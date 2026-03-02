/*
** EPITECH PROJECT, 2025
** my puterr
** File description:
** write a chain of characters on the standard error output
*/

#include "lib.h"
#include <unistd.h>

int myputerr(const char *str, int return_value)
{
    write(2, str, mystrlen(str));
    return return_value;
}
