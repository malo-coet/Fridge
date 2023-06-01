/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include "../includes/lib.h"
#include "../includes/fridge.h"

int main(int ac, char **av)
{
    (void)av;
    fridge_t f;
    f.args = ac;
    if (error_handler(&f, 1) == 84)
        return 84;
    init_args(&f);
    while (1) {
        getter(&f);
        if (handler(&f) == 2) {
            write_save(&f);
            free_all(&f);
            return 0;
        } else {
            free(f.command);
            free_commands(&f);
        }
    }
    write_save(&f);
    free_all(&f);
    return 0;
}
