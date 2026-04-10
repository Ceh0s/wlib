/*
** EPITECH PROJECT, 2025
** strcutd
** File description:
** remove _delim_ character(s) from _str_ and concatenate end result
** if no valid characters remain, an empty nonnull string is returned
** in case of error/invalid arguments, the function returns NULL
*/

#include "lib.h"
#include <stdlib.h>

char *my_strcutd(const char *str, const char *delim)
{
    size_t len = 0;
    char *res = NULL;

    if (!str || !delim)
        return NULL;
    for (size_t i = 0; str[i]; i++)
        if (!char_is_auth(str[i], delim))
            len++;
    res = malloc(sizeof(char) * (len + 1));
    if (!res)
        return NULL;
    len = 0;
    for (size_t i = 0; str[i]; i++)
        if (!char_is_auth(str[i], delim)) {
            res[len] = str[i];
            len++;
        }
    res[len] = '\0';
    return res;
}
