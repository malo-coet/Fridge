/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include "../../includes/lib.h"
#include "../../includes/fridge.h"
#include <stdio.h>

void write_save(fridge_t *f)
{
    FILE *file = fopen(SAVE_FILE_NAME, "w");

    fprintf(file, "tomato = %d\n", f->i->tomato);
    fprintf(file, "dough = %d\n", f->i->dough);
    fprintf(file, "onion = %d\n", f->i->onion);
    fprintf(file, "pasta = %d\n", f->i->pasta);
    fprintf(file, "olive = %d\n", f->i->olive);
    fprintf(file, "pepper = %d\n", f->i->pepper);
    fprintf(file, "ham = %d\n", f->i->ham);
    fprintf(file, "cheese = %d\n", f->i->cheese);

    fclose(file);
}

void init_save(fridge_t *f)
{
    f->i->tomato = 50;
    f->i->dough = 50;
    f->i->onion = 50;
    f->i->pasta = 50;
    f->i->olive = 50;
    f->i->pepper = 50;
    f->i->ham = 50;
    f->i->cheese = 50;
}
