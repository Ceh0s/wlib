/*
** EPITECH PROJECT, 2025
** strndup
** File description:
** make an allocated copy of given string up to n characters
*/

#include "lib.h"
#include <stdlib.h>

char *mystrndup(const char *src, size_t n)
{
    char *dest = NULL;

    if (!src)
        return NULL;
    dest = malloc(sizeof(char) * (mystrnlen(src, n) + 1));
    if (!dest)
        return NULL;
    mystrncpy(dest, src, n);
    return dest;
}
