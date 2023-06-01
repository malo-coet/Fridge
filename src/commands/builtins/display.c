/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** maker.c
*/

#include "../../../includes/fridge.h"
#include "../../../includes/lib.h"

int display(fridge_t *f)
{
    printf("tomato = %d\n", f->i->tomato);
    printf("dough = %d\n", f->i->dough);
    printf("onion = %d\n", f->i->onion);
    printf("pasta = %d\n", f->i->pasta);
    printf("olive = %d\n", f->i->olive);
    printf("pepper = %d\n", f->i->pepper);
    printf("ham = %d\n", f->i->ham);
    printf("cheese = %d\n", f->i->cheese);

    return 0;
}
