/*
** EPITECH PROJECT, 2025
** unsigned to str
** File description:
** put unsigned int into a string
*/

#include "lib.h"

int numlen(long long nb)
{
    int len = 1;
    unsigned long long n = nb < 0 ? -nb : nb;

    len += (nb < 0);
    for (; n > 9; len++)
        n /= 10;
    return len;
}
