/*
** EPITECH PROJECT, 2025
** my_strcat.c
** File description:
** concatenates two strings
*/

#include "lib.h"
#include <stddef.h>

char *my_strcat(char *dest, const char *src)
{
    ssize_t len = my_strlen(dest);

    if (!src || len == -1)
        return dest;
    my_strcpy(&dest[len], src);
    return dest;
}
