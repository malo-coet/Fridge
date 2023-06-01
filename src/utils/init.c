/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include "../../includes/lib.h"
#include "../../includes/fridge.h"

int get_quantities(fridge_t *f, char *line)
{
    char name[1024];
    int quantity;
    sscanf(line, "%s = %d", name, &quantity);
    if (strcmp(name, "tomato") == 0)
        f->i->tomato = quantity;
    if (strcmp(name, "dough") == 0)
        f->i->dough = quantity;
    if (strcmp(name, "onion") == 0)
        f->i->onion = quantity;
    if (strcmp(name, "pasta") == 0)
        f->i->pasta = quantity;
    if (strcmp(name, "olive") == 0)
        f->i->olive = quantity;
    if (strcmp(name, "pepper") == 0)
        f->i->pepper = quantity;
    if (strcmp(name, "ham") == 0)
        f->i->ham = quantity;
    if (strcmp(name, "cheese") == 0)
        f->i->cheese = quantity;
    return 0;
}

int init_args(fridge_t *f)
{
    FILE *file;
    char buffer[1024];
    f->i = malloc(sizeof(ingredients_t) + 1);

    file = fopen(SAVE_FILE_NAME, "r");
    if (file == NULL) {
        init_save(f);
        return 0;
    }

    while (fgets(buffer, 100, file) != NULL)
        get_quantities(f, buffer);

    fclose(file);
    return 0;
}
