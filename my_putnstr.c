/*
** EPITECH PROJECT, 2025
** my putnstr
** File description:
** write a chain of characters up to n
*/

#include "lib.h"
#include <unistd.h>

int my_putnstr(int fd, const char *str, int return_value, size_t n)
{
    ssize_t len = 0;

    if (!str)
        return return_value;
    write(fd, str, my_strnlen(str, n));
    return return_value;
}
