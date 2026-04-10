/*
** EPITECH PROJECT, 2025
** my puterr
** File description:
** write a chain of characters on the standard error output
*/

#include "lib.h"
#include <unistd.h>

int my_puterr(const char *str, int return_value)
{
    write(2, str, my_strlen(str));
    return return_value;
}
