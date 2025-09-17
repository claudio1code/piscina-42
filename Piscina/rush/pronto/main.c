#include "dictionnaire.h"

int	main(int argc, char *argv[])
{
	t_dict	*dict;
	char	*dict_file;
	char	*num_str;

	if (argc == 2)
	{
		dict_file = "dict.txt";
		num_str = argv[1];
	}
	else if (argc == 3)
	{
		dict_file = argv[1];
		num_str = argv[2];
	}
	else
	{
		write_str(1, "Usage: ./rush02 [dict] number\n");
		return (1);
	}
	dict = parse_dict(dict_file);
	if (!dict)
	{
		write_str(1, "Dict Error\n");
		return (1);
	}
	number_to_words(dict, num_str);
	write_char(1, '\n');
	free_dict(dict);
	return (0);
}
