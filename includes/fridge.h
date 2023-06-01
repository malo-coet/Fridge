/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-navy-mathis.rapaccioli
** File description:
** TODO: add description
*/

#ifndef FRIDGE_H
    #define FRIDGE_H

    #define SAVE_FILE_NAME ".save"
    #include <stdio.h>
    #include <string.h>

    typedef struct ingredients_s {
        int tomato;
        int dough;
        int onion;
        int pasta;
        int olive;
        int pepper;
        int ham;
        int cheese;
    } ingredients_t;

    typedef struct fridge_s {
        int args;
        char *command;
        char **commands;
        struct ingredients_s *i;
    } fridge_t;

    // commands
        int handler(fridge_t *f);
        int getter(fridge_t *f);

        // builtins
            int maker(fridge_t *f);
            int display(fridge_t *f);
            int add_struct(fridge_t *f);

    // errors
        int error_handler(fridge_t *f, int state);
        int start_errors(fridge_t *f);
        int make_error(char *name, int type);

    // utils
        // file
            void write_save(fridge_t *f);
            void init_save(fridge_t *f);

        // init
            int init_args(fridge_t *f);

        //free
            void free_all(fridge_t *f);
            void free_commands(fridge_t *f);

        //strwords
            int my_strwords(char **str);

#endif //FRIDGE_H
