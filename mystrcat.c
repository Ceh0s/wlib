/*
** EPITECH PROJECT, 2025
** my_strcat.c
** File description:
** concatenates two strings
*/

#include "lib.h"
#include <stddef.h>

char *mystrcat(char *dest, const char *src)
{
    ssize_t len = mystrlen(dest);

    if (!src || len == -1)
        return dest;
    mystrcpy(&dest[len], src);
    return dest;
}
