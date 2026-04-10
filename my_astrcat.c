/*
** EPITECH PROJECT, 2026
** astrcat
** File description:
** same as mystrcat, but allocates the destination string in place of the caller
*/

#include "lib.h"
#include <stdlib.h>

char *my_astrcat(const char *a, const char *b)
{
    char *res = malloc(sizeof(char) * (my_strlen(a) + my_strlen(b) + 1));

    my_strcpy(res, a);
    my_strcat(res, b);
    return res;
}
