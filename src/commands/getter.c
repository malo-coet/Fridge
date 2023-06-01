/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include "../../includes/lib.h"
#include "../../includes/fridge.h"

int getter(fridge_t *f)
{
    char *input_commands = NULL;
    size_t len = 0;

    if (getline(&input_commands, &len, stdin) == -1) {
        write_save(f);
        exit(0);
    }

    input_commands[len - 1] = '\0';

    for (int i = 0; input_commands[i]; i++) {
        if (input_commands[i] == '\n')
            input_commands[i] = '\0';
    }

    f->command = input_commands;
    f->commands = my_str_to_word_array(input_commands);

    return 0;
}
