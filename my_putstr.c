/*
** EPITECH PROJECT, 2025
** my putstr
** File description:
** write a chain of characters
*/

#include "lib.h"
#include <unistd.h>

int my_putstr(int fd, const char *str, int return_value)
{
    if (!str)
        return return_value;
    write(fd, str, my_strlen(str));
    return return_value;
}
