/*
** EPITECH PROJECT, 2025
** str to word array delimiter
** File description:
** home at last
** splits a string into an array of words
*/

#include "lib.h"
#include <stdlib.h>

static size_t count_words(const char *str, const char *delim)
{
    size_t count = 0;

    if (!str)
        return count;
    if (!charisauth(str[0], delim))
        count++;
    for (size_t i = 0; str[i]; i++)
        if (charisauth(str[i], delim) && !charisauth(str[i + 1], delim)
            && str[i + 1])
            count++;
    return count;
}

static char *find_words(const char *str, size_t loc, const char *delim)
{
    size_t i = 0;
    size_t len = 0;
    size_t count = 0;
    char *dest = NULL;

    if (!charisauth(str[0], delim))
        count++;
    for (; count < loc && str[i]; i++)
        if ((charisauth(str[i], delim) && !charisauth(str[i + 1], delim)))
            count++;
    for (size_t x = i; !charisauth(str[x], delim) && str[x]; x++)
        len++;
    dest = malloc(sizeof(char) * (len + 1));
    if (!dest)
        return NULL;
    return mystrncpy(dest, str + i, len);
}

char **stwa_delimiter(const char *str, const char *delim)
{
    size_t i = 0;
    char **arr = NULL;
    size_t words = count_words(str, delim);

    arr = malloc(sizeof(char *) * (words + 1));
    if (!arr)
        return NULL;
    for (; i < words; i++)
        arr[i] = find_words(str, i + 1, delim);
    arr[i] = NULL;
    return arr;
}
