/*
** EPITECH PROJECT, 2025
** strdup
** File description:
** make an allocated copy of given string
*/

#include "lib.h"
#include <stdlib.h>

char *my_strdup(const char *src)
{
    char *dest = NULL;

    if (!src)
        return NULL;
    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    if (!dest)
        return NULL;
    my_strcpy(dest, src);
    return dest;
}
