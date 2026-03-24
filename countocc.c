/*
** EPITECH PROJECT, 2026
** wlib
** File description:
** countocc
*/

#include "lib.h"
#include <sys/types.h>

ssize_t countocc(char *str, char *elems)
{
    size_t count = 0;

    if (!str)
        return (ssize_t)-1;
    for (size_t i = 0; str[i]; i++)
        count += charisauth(str[i], elems);
    return count;
}
