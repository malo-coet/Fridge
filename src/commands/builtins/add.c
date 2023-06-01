/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** maker.c
*/

#include "../../../includes/fridge.h"
#include "../../../includes/lib.h"

int add_ingredients(fridge_t *f, int nbr, int state)
{
    switch (state) {
        case 1: f->i->tomato += nbr; return 0;
        case 2: f->i->dough += nbr; return 0;
        case 3: f->i->onion += nbr; return 0;
        case 4: f->i->pasta += nbr; return 0;
        case 5: f->i->olive += nbr; return 0;
        case 6: f->i->pepper += nbr; return 0;
        case 7: f->i->ham += nbr; return 0;
        case 8: f->i->cheese += nbr; return 0;
    }

    return 0;
}

int check_add(fridge_t *f)
{
    int nbr;
    nbr = atoi(f->commands[2]);

    if (nbr < 0)
        return -1;

    return nbr;
}

int add_struct(fridge_t *f)
{
    int nbr = check_add(f);
    if (nbr == -1 || my_strwords(f->commands) != 3)
        return -1;
    if (!strcmp("tomato",f->commands[1]))
        return add_ingredients(f, nbr, 1);
    if (!strcmp("dough", f->commands[1]))
        return add_ingredients(f, nbr, 2);
    if (!strcmp("onion", f->commands[1]))
        return add_ingredients(f, nbr, 3);
    if (!strcmp("pasta", f->commands[1]))
        return add_ingredients(f, nbr, 4);
    if (!strcmp("olive", f->commands[1]))
        return add_ingredients(f, nbr, 5);
    if (!strcmp("pepper", f->commands[1]))
        return add_ingredients(f, nbr, 6);
    if (!strcmp("ham", f->commands[1]))
        return add_ingredients(f, nbr, 7);
    if (!strcmp("cheese", f->commands[1]))
        return add_ingredients(f, nbr, 8);
    return -1;
}
