/*
** EPITECH PROJECT, 2025
** my_strncat.c
** File description:
** concatenates two strings up to n characters
*/

#include "lib.h"
#include <stddef.h>

char *my_strncat(char *dest, const char *src, size_t n)
{
    size_t len = my_strlen(dest);

    if (src == NULL)
        return dest;
    my_strncpy(&dest[len], src, n);
    return dest;
}
