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

static int is_delim(const char *str, const char *delim, int didx)
{
    if (didx == 0)
        return char_is_auth(*str, delim);
    return (!my_strncmp(str, delim, my_strlen(delim)));
}

static size_t count_words(const char *str, const char *delim,
    int didx, int empty)
{
    size_t count = (str && empty == 1) ? 1 : 0;
    size_t lend = (didx == 1) ? my_strlen(delim) : 1;
    int in_word = 0;

    if (!str)
        return 0;
    for (size_t i = 0; str[i];)
        if (is_delim(str + i, delim, didx)) {
            count += empty;
            in_word = 0;
            i += lend;
        } else {
            count += (in_word == 0 && empty == 0) ? 1 : 0;
            in_word = 1;
            i++;
        }
    return count;
}

static char *find_words(const char *str, size_t loc, const char *delim,
    int *opt)
{
    size_t i = 0;
    size_t count = (opt[1] == 1) ? 1 : 0;
    size_t lend = (opt[0] == 1) ? my_strlen(delim) : 1;
    size_t len = 0;

    for (int in_word = 0; str[i] && count < loc;)
        if (is_delim(str + i, delim, opt[0])) {
            count += opt[1];
            in_word = 0;
            i += lend;
        } else {
            count += (in_word == 0 && opt[1] == 0) ? 1 : 0;
            in_word = 1;
            i += (count < loc) ? 1 : 0;
        }
    while (str[i + len] && !is_delim(str + i + len, delim, opt[0]))
        len++;
    return my_strndup(str + i, len);
}

#include <stdio.h>

char **stwa_delimiter(const char *str, const char *delim, int didx, int empty)
{
    size_t i = 0;
    char **arr = NULL;
    size_t words = count_words(str, delim, didx, empty);

    arr = malloc(sizeof(char *) * (words + 1));
    if (!arr)
        return NULL;
    for (; i < words; i++)
        arr[i] = find_words(str, i + 1, delim, (int[2]){didx, empty});
    arr[i] = NULL;
    return arr;
}
