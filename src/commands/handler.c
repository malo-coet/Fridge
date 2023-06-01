/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** handler.c
*/

#include "../../includes/fridge.h"
#include "../../includes/lib.h"

int builtins(fridge_t *f, char *command)
{
    if (!strcmp(f->command, "disp fridge"))
        return display(f);

    if (!strcmp(command, "addToFridge"))
        return add_struct(f);

    if (!strcmp(command, "make"))
        return maker(f);

    if (!strcmp(command, "exit")) {
        write_save(f);
        return 2;
    }

    return -1;
}

int handler(fridge_t *f)
{
    char *command = f->commands[0];
    int num = builtins(f, command);

    if (num == -1) {
        printf("'%s': Invalid operation\n", f->command);
        return 1;
    }

    return num;
}
