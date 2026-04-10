/*
** EPITECH PROJECT, 2025
** isfreeable
** File description:
** verifies if the given array and/or string
** is freeable then acts accordingly
*/

#include "lib.h"
#include <stdlib.h>

void is_freeable(char **arr, char *str)
{
    free(str);
    if (!arr)
        return;
    for (int i = 0; arr[i]; i++)
        free(arr[i]);
    free(arr);
}
