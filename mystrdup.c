/*
** EPITECH PROJECT, 2025
** strdup
** File description:
** make an allocated copy of given string
*/

#include "lib.h"
#include <stdlib.h>

char *mystrdup(const char *src)
{
    char *dest = NULL;

    if (!src)
        return NULL;
    dest = malloc(sizeof(char) * (mystrlen(src) + 1));
    if (!dest)
        return NULL;
    mystrcpy(dest, src);
    return dest;
}
