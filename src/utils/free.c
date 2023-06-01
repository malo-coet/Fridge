/*
** EPITECH PROJECT, 2023
** fridge
** File description:
** the free file
*/

#include "../../includes/lib.h"
#include "../../includes/fridge.h"

void free_commands(fridge_t *fridge)
{
    int size = my_strwords(fridge->commands);

    for (int i = 0; i < size; i++)
        free(fridge->commands[i]);
    free(fridge->commands);
}

void free_all(fridge_t *fridge)
{
    free(fridge->command);
    free_commands(fridge);
    free(fridge->i);
}
