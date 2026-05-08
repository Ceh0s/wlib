/*
** EPITECH PROJECT, 2025
** strndup
** File description:
** make an allocated copy of given string up to n characters
*/

#include "lib.h"
#include <stdlib.h>

char *my_strndup(const char *src, size_t n)
{
    char *dest = NULL;

    if (!src)
        return NULL;
    dest = malloc(sizeof(char) * (my_strnlen(src, n) + 1));
    if (!dest)
        return NULL;
    my_strncpy(dest, src, n);
    return dest;
}
