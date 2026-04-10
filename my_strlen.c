/*
** EPITECH PROJECT, 2025
** my strlen
** File description:
** returns length of given string
*/

#include "lib.h"

ssize_t my_strlen(char const *str)
{
    ssize_t i = 0;

    if (!str)
        return (ssize_t)-1;
    for (; str[i] != '\0'; i++);
    return i;
}
