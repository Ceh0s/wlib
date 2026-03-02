/*
** EPITECH PROJECT, 2025
** my putnstr
** File description:
** write a chain of characters up to n
*/

#include "lib.h"
#include <unistd.h>

void myputnstr(const char *str, size_t n)
{
    ssize_t len = 0;

    if (!str)
        return;
    len = mystrnlen(str, n);
    write(1, str, len);
}
