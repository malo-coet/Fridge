/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** handler.c
*/

#include "../../includes/fridge.h"
#include "../../includes/lib.h"

int make_error(char *name, int type)
{
    if (type == 1)
        printf("'make pizza': not enough %s\n", name);
    if (type == 2)
        printf("'make pasta': not enough %s\n", name);
    return 1;
}

int start_errors(fridge_t *f)
{
    if (f->args != 1)
        return 84;

    return 0;
}
