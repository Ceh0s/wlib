/*
** EPITECH PROJECT, 2025
** my strnlen
** File description:
** returns length of given string up to n
*/

#include "lib.h"
#include <sys/types.h>

ssize_t my_strnlen(char const *str, size_t n)
{
    ssize_t i = 0;

    if (!str)
        return (ssize_t)-1;
    for (; str[i] != '\0' && i < n; i++);
    return i;
}
