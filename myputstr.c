/*
** EPITECH PROJECT, 2025
** my putstr
** File description:
** write a chain of characters
*/

#include "lib.h"
#include <unistd.h>

void myputstr(const char *str)
{
    if (!str)
        return;
    write(1, str, mystrlen(str));
}
