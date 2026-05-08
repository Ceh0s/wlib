/*
** EPITECH PROJECT, 2026
** mystrchr
** File description:
** looks for the first occurence of any of the delim characters in str
** returns the length of the string up to that character if it's found
** -1 otherwise
*/

#include "lib.h"

ssize_t my_strchr(char *str, char *delim)
{
    if (!str)
        return (ssize_t)-1;
    for (size_t i = 0; str[i]; i++)
        if (char_is_auth(str[i], delim))
            return i;
    return (ssize_t)-1;
}
