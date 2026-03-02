/*
** EPITECH PROJECT, 2025
** my_strncat.c
** File description:
** concatenates two strings up to n characters
*/

#include "lib.h"
#include <stddef.h>

char *mystrncat(char *dest, const char *src, size_t n)
{
    size_t len = mystrlen(dest);

    if (src == NULL)
        return dest;
    mystrncpy(&dest[len], src, n);
    return dest;
}
