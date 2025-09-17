#include "dictionnaire.h"
#include <stdio.h>
#include <ctype.h>

static char	*trim(char *str)
{
	while (isspace((unsigned char)*str))
		str++;
	if (*str == '\0')
		return (str);
	return (str);
}

int	write_char(int fd, char c)
{
	ssize_t	bytes;

	bytes = write(fd, &c, 1);
	if (bytes != 1)
		return (-1);
	return (0);
}

void	write_str(int fd, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (write_char(fd, str[i]) == -1)
			break;
		i++;
	}
}

t_dict	*parse_dict(char *file)
{
	int		fd;
	char	buffer[4096];
	ssize_t	bytes;
	t_dict	*dict;
	char	*line;
	char	*colon;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (NULL);
	bytes = read(fd, buffer, 4095);
	if (bytes < 0)
	{
		close(fd);
		return (NULL);
	}
	buffer[bytes] = '\0';
	close(fd);
	dict = NULL;
	line = strtok(buffer, "\n");
	while (line)
	{
		colon = strchr(line, ':');
		if (colon)
		{
			*colon = '\0';
			if (strlen(trim(line)) > 0 && strlen(trim(colon + 1)) > 0)
			{
				t_dict	*node = malloc(sizeof(t_dict));
				if (!node)
				{
					free_dict(dict);
					return (NULL);
				}
				node->key = strdup(trim(line));
				node->value = strdup(trim(colon + 1));
				node->next = dict;
				dict = node;
			}
		}
		line = strtok(NULL, "\n");
	}
	return (dict);
}

void	free_dict(t_dict *dict)
{
	t_dict	*tmp;

	while (dict)
	{
		tmp = dict->next;
		free(dict->key);
		free(dict->value);
		free(dict);
		dict = tmp;
	}
}

void	number_to_words(t_dict *dict, char *num_str)
{
	long long	num;
	char		buffer[100];
	char		*endptr;

	num = strtoll(num_str, &endptr, 10);
	if (num < 0 || *endptr != '\0')
	{
		write_str(1, "Error\n");
		return ;
	}
	if (num == 0)
	{
		/* Imprime "zero" usando o dicionário */
		t_dict	*curr = dict;
		while (curr)
		{
			if (atoi(curr->key) == 0)
			{
				write_str(1, curr->value);
				return ;
			}
			curr = curr->next;
		}
	}
	sprintf(buffer, "%lld", num);
	process_full_number(dict, buffer);
}

static int	calculate_scale(int exp)
{
	int	i;
	int	scale;

	i = 0;
	scale = 1;
	while (i < exp)
	{
		scale *= 1000;
		i++;
	}
	return (scale);
}

static void	print_scale(t_dict *dict, int scale)
{
	t_dict	*curr;

	curr = dict;
	while (curr)
	{
		if (atoi(curr->key) == scale)
		{
			write_char(1, ' ');
			write_str(1, curr->value);
			return ;
		}
		curr = curr->next;
	}
}

static void	process_number_group(t_dict *dict, char *group)
{
	int	value;
	char	temp[4];

	value = atoi(group);
	if (value >= 100)
	{
		int	hundreds;
		int	remainder;

		hundreds = value / 100;
		remainder = value % 100;
		sprintf(temp, "%d", hundreds);
		process_number_group(dict, temp);
		write_char(1, ' ');
		print_word_for_value(dict, 100);
		if (remainder > 0)
		{
			write_char(1, ' ');
			sprintf(temp, "%d", remainder);
			process_number_group(dict, temp);
		}
		return ;
	}
	if (value <= 19)
	{
		print_word_for_value(dict, value);
		return ;
	}
	print_word_for_value(dict, (value / 10) * 10);
	if (value % 10)
	{
		write_char(1, ' ');
		print_word_for_value(dict, value % 10);
	}
}

static void	process_remaining_groups(t_dict *dict, char *num_str,
		int *index, int num_groups)
{
	int		group_index;
	char	group[4];
	int		scale;
	int		count;
	int		i;

	group_index = 1;
	while (group_index < num_groups)
	{
		strncpy(group, num_str + *index, 3);
		group[3] = '\0';
		*index += 3;
		if (atoi(group) != 0)
		{
			write_char(1, ' ');
			process_number_group(dict, group);
			if (group_index < num_groups - 1)
			{
				count = num_groups - group_index;
				scale = calculate_scale(count);
				write_char(1, ' ');
				print_scale(dict, scale);
			}
		}
		group_index++;
	}
}

static void	process_full_number(t_dict *dict, char *num_str)
{
	int		len;
	int		num_groups;
	int		first_len;
	int		index;
	char	group[4];

	len = strlen(num_str);
	num_groups = (len + 2) / 3;
	first_len = len - (num_groups - 1) * 3;
	index = 0;
	strncpy(group, num_str, first_len);
	group[first_len] = '\0';
	if (atoi(group) != 0)
	{
		process_number_group(dict, group);
		if (num_groups > 1)
		{
			int	scale = calculate_scale(num_groups - 1);
			write_char(1, ' ');
			print_scale(dict, scale);
		}
	}
	index += first_len;
	process_remaining_groups(dict, num_str, &index, num_groups);
}

static void	print_word_for_value(t_dict *dict, int value)
{
	t_dict	*curr;

	curr = dict;
	while (curr)
	{
		if (atoi(curr->key) == value)
		{
			write_str(1, curr->value);
			return ;
		}
		curr = curr->next;
	}
}
