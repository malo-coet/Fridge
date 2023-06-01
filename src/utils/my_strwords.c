/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday08-melissa.mi-you
** File description:
** my_strwords
*/

#include "../../includes/lib.h"

int my_strwords(char **str)
{
    int indice = 0;

    while (str[indice] != 0){
        indice++;
    }
    return (indice);
}
