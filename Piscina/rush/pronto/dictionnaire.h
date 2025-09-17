#ifndef DICTIONNAIRE_H
#define DICTIONNAIRE_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

typedef struct s_dict {
    char *key;      /**< Chave do dicionário */
    char *value;    /**< Valor associado à chave */
    struct s_dict *next; /**< Ponteiro para o próximo elemento */
} t_dict;

int write_char(int fd, char c);
void write_str(int fd, const char *str);
t_dict *parse_dict(char *file);
void free_dict(t_dict *dict);
void number_to_words(t_dict *dict, char *num_str);

#endif /* DICTIONNAIRE_H */
