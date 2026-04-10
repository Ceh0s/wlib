/*
** EPITECH PROJECT, 2025
** lenarr
** File description:
** returns the lenght of an array of strings
*/

#include "lib.h"

ssize_t arr_len(char **arr)
{
    ssize_t len = 0;

    if (!arr)
        return (ssize_t)-1;
    for (; arr[len]; len++);
    return len;
}
