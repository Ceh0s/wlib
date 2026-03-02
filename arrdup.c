/*
** EPITECH PROJECT, 2025
** arrdup
** File description:
** duplicates array
*/

#include "lib.h"
#include <stdlib.h>

char **arrdup(char **arr)
{
    char **dup = NULL;
    size_t i = arrlen(arr);

    if (i == 0)
        return NULL;
    dup = malloc(sizeof(char *) * (i + 1));
    if (!dup)
        return NULL;
    for (i = 0; arr[i]; i++)
        dup[i] = mystrdup(arr[i]);
    dup[i] = NULL;
    return dup;
}
