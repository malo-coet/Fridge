/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** handler.c
*/

#include "../../includes/fridge.h"
#include "../../includes/lib.h"

int error_handler(fridge_t *f, int state)
{
    if (state == 1)
        if (start_errors(f) == 84)
            return 84;

    return 0;
}
