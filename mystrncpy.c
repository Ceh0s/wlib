/*
** EPITECH PROJECT, 2025
** my_strcpy
** File description:
** copies a string into another
*/

#include "lib.h"

char *mystrncpy(char *dest, const char *src, size_t n)
{
    size_t i = 0;

    if (!src || !dest)
        return dest;
    for (; src[i] != '\0' && i < n; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
