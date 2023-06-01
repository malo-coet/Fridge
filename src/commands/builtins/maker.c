/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** maker.c
*/

#include "../../../includes/fridge.h"
#include "../../../includes/lib.h"

void make_pizza(fridge_t *f)
{
    f->i->tomato -= 5;
    f->i->dough -= 1;
    f->i->onion -= 3;
    f->i->olive -= 8;
    f->i->pepper -= 8;
    f->i->ham -= 4;
    f->i->cheese -= 3;
}

void make_pasta(fridge_t *f)
{
    f->i->tomato -= 5;
    f->i->pasta -= 2;
    f->i->olive -= 6;
    f->i->cheese -= 3;
    f->i->ham -= 4;
}

int check_pizza(fridge_t *f)
{
    int num = 0;

    if (f->i->tomato < 5)
        num = make_error("tomato", 1);
    if (f->i->dough < 1)
        num = make_error("dough", 1);
    if (f->i->onion < 3)
        num = make_error("onion", 1);
    if (f->i->olive < 8)
        num = make_error("olive", 1);
    if (f->i->pepper < 8)
        num = make_error("pepper", 1);
    if (f->i->ham < 4)
        num = make_error("ham", 1);
    if (f->i->cheese < 3)
        num = make_error("cheese", 1);

    return num;
}

int check_pasta(fridge_t *f)
{
    int num = 0;

    if (f->i->tomato < 5)
        num = make_error("tomato", 2);
    if (f->i->pasta < 2)
        num = make_error("pasta", 2);
    if (f->i->olive < 6)
        num = make_error("olive", 2);
    if (f->i->cheese < 3)
        num = make_error("cheese", 2);
    if (f->i->ham < 4)
        num = make_error("ham", 2);
    return num;
}

int maker(fridge_t *f)
{
    char *command;
    command = f->commands[1];

    if (strcmp(command, "pizza") == 0) {
        if (check_pizza(f) == 1)
            return 1;
        make_pizza(f);
        return 0;
    }
    if (strcmp(command, "pasta") == 0) {
        if (check_pasta(f) == 1)
            return 1;
        make_pasta(f);
        return 0;
    }
    printf("'%s': meal unknown\n", command);
    return 1;
}
