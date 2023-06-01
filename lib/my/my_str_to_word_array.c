/*
** EPITECH PROJECT, 2023
** minishell1_bootstrap
** File description:
** splits a string into words
*/

#include <stdlib.h>

static int counter_world(char const *str)
{
    int nb_world = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n')
            nb_world++;
        i++;
    }
    return (nb_world + 1);
}

static int counter_letter(char const *str, int i)
{
    int nb_letter = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n' || str[i] == ' ')
            return nb_letter;
        nb_letter++;
        i++;
    }
    return nb_letter;
}

char **my_str_to_word_array(char const *str)
{
    int nb_letter;
    int nb_world = counter_world(str);
    char **word_array = malloc(sizeof(char *) * (nb_world + 1));
    int indice_str = 0;

    if (word_array == NULL)
        return NULL;
    for (int i = 0; i < nb_world; i++) {
        nb_letter = counter_letter(str, indice_str);
        word_array[i] = malloc(sizeof(char) * (nb_letter + 1));
        for (int j = 0; j < nb_letter; j++) {
            word_array[i][j] = str[indice_str];
            indice_str++;
        }
        word_array[i][nb_letter] = '\0';
        indice_str++;
    }
    word_array[nb_world] = NULL;
    return word_array;
}
