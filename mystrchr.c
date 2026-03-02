/*
** EPITECH PROJECT, 2026
** mystrchr
** File description:
** looks for the first occurence of any of the delim characters in str
** returns the length of the string up to that character if it's found
** -1 otherwise
*/

#include "lib.h"

ssize_t mystrchr(char *str, char *delim)
{
    size_t i = 0;

    if (!str)
        return (ssize_t)-1;
    for (; str[i]; i++)
        if (charisauth(str[i], delim) == 1)
            return i;
    return (ssize_t)-1;
}
