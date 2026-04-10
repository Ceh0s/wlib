/*
** EPITECH PROJECT, 2025
** my_putnbr
** File description:
** Function
*/

#include "lib.h"
#include <unistd.h>

int my_putnbr(long long nb)
{
    int len = num_len(nb);
    char str[len + 1];
    unsigned long long n = nb < 0 ? -nb : nb;
    int i = len - 1;
    int neg = 0;

    if (nb < 0) {
        str[0] = '-';
        neg = 1;
    }
    while (i >= neg) {
        str[i] = (n % 10) + '0';
        n /= 10;
        i--;
    }
    write(1, str, len);
    return len;
}
