/*
** EPITECH PROJECT, 2025
** my getnbr
** File description:
** returns a number sent to the funciton as a string
*/

#include "lib.h"

static int fill_number(char const *str, long nb, int len)
{
    int i = 0;

    for (; str[i] == '0'; i++);
    if (i == len)
        return 0;
    if (i < len)
        nb *= str[i] - 48;
    for (i++; i < len; i++) {
        if (((nb * 10) + (str[i] - 48)) > 2147483647 ||
            ((nb * 10) - (str[i] - 48)) < -2147483648)
            return 0;
        nb *= 10;
        if (nb >= 0)
            nb += str[i] - 48;
        else
            nb -= str[i] - 48;
    }
    i = nb;
    return i;
}

static int find_number_length(char const *str, int sign)
{
    int len = 0;

    if (sign == 0)
        return 0;
    for (int i = 0; str[i] != '\0' && str[i] >= '0' && str[i] <= '9'; i++)
        len++;
    return fill_number(str, sign, len);
}

static int find_sign(char const *str)
{
    int i = 0;
    int minus = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] == '-')
            minus++;
        if (str[i] >= '0' && str[i] <= '9')
            break;
    }
    if (str[i] == '\0')
        return 0;
    if (minus % 2 == 0)
        return find_number_length(&str[i], 1);
    return find_number_length(&str[i], -1);
}

int my_getnbr(char const *str)
{
    int nb = 0;
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            return find_number_length(&str[i], 1);
        if (str[i] == '-')
            return find_sign(&str[i]);
    }
    return nb;
}
