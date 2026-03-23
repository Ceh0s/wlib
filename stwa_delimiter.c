/*
** EPITECH PROJECT, 2025
** str to word array delimiter
** File description:
** home at last
** splits a string pointed to by _str_ into an array of words
** _didx_ determines if _str_ is cut using the characters from _delim_
** or using the _delim_ string itself (1 for the latter)
** _empty_ determines if two consecutive delimiters translates to an
** empty string in the array (1 if so)
*/

#include "lib.h"
#include <stdlib.h>
#include <stdio.h>

static int is_delim(const char *str, const char *delim, int didx)
{
    if (didx == 0)
        return charisauth(*str, delim);
    return (!mystrncmp(str, delim, mystrlen(delim)));
}

static size_t count_words(const char *str, const char *delim,
    int didx, int empty)
{
    size_t count = 0;
    size_t lend = didx == 1 ? mystrlen(delim) : 1;

    if (!str)
        return count;
    if (!is_delim(str, delim, didx))
        count++;
    for (size_t i = didx == 1 && count == 1 ? lend : 0; str[i]; i += lend)
        if (is_delim(str + i, delim, didx)
            && !is_delim(str + i + lend, delim, didx))
            count++;
    return count;
}

static char *find_words(const char *str, size_t loc, const char *delim,
    int didx)
{
    size_t i = 0;
    size_t len = 0;
    size_t count = 0;
    size_t lend = didx == 1 ? mystrlen(delim) : 1;

    if (!is_delim(str, delim, didx))
        count++;
    i = didx == 1 && count == 1 ? lend : 0;
    for (; count < loc && str[i]; i += lend)
        if (is_delim(str + i, delim, didx)
            && !is_delim(str + i + lend, delim, didx))
            count++;
    for (size_t x = i; !is_delim(str + x, delim, didx) && str[x]; x++)
        len++;
    return mystrndup(str + i, len);
}

char **stwa_delimiter(const char *str, const char *delim, int didx, int empty)
{
    size_t i = 0;
    char **arr = NULL;
    size_t words = count_words(str, delim, didx, empty);

    arr = malloc(sizeof(char *) * (words + 1));
    if (!arr)
        return NULL;
    for (; i < words; i++)
        arr[i] = find_words(str, i + 1, delim, didx);
    arr[i] = NULL;
    return arr;
}
