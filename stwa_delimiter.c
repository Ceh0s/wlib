/*
** EPITECH PROJECT, 2025
** str to word array delimiter
** File description:
** home at last
** splits a string into an array of words
*/

#include "lib.h"
#include <stdlib.h>

static int is_delim(char c, const char *delim)
{
    for (size_t i = 0; delim[i] != '\0'; i++)
        if (c == delim[i])
            return 1;
    return 0;
}

static size_t count_words(const char *str, const char *delim)
{
    size_t count = 0;

    if (!str)
        return count;
    if (!is_delim(str[0], delim))
        count++;
    for (size_t i = 0; str[i]; i++)
        if (is_delim(str[i], delim) && !is_delim(str[i + 1], delim)
            && str[i + 1])
            count++;
    return count;
}

static char *fill_string(const char *str, size_t from, size_t size)
{
    char *dest = malloc(sizeof(char) * (size + 1));
    size_t x = 0;

    if (!dest)
        return NULL;
    for (size_t i = from; i < from + size; i++) {
        dest[x] = str[i];
        x++;
    }
    dest[x] = '\0';
    return dest;
}

static char *find_words(const char *str, size_t loc, const char *delim)
{
    size_t i = 0;
    size_t len = 0;
    size_t tmp = 0;

    if (!is_delim(str[0], delim))
        tmp++;
    for (; tmp < loc && str[i]; i++)
        if ((is_delim(str[i], delim) && !is_delim(str[i + 1], delim)))
            tmp++;
    for (size_t x = i; !is_delim(str[x], delim) && str[x]; x++)
        len++;
    return fill_string(str, i, len);
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
