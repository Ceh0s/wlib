/*
** EPITECH PROJECT, 2025
** my strcmp
** File description:
** compares two strings; returs 0 if equal,
** negative value if s1 < s2, positive value if s1 > s2
*/

#include "lib.h"

int my_strcmp_bool(const char *s1, const char *s2)
{
    size_t i = 0;

    if (!s1 && !s2)
        return 0;
    if (!s1 && s2)
        return -1;
    if (!s2 && s1)
        return 1;
    for (; s1[i] != '\0' || s2[i] != '\0'; i++)
        if (s1[i] != s2[i])
            return s1[i] - s2[i] > 0 ? 1 : -1;
    if (s1[i] != s2[i])
        return s1[i] - s2[i] > 0 ? 1 : -1;
    return 0;
}

int my_strcmp(const char *s1, const char *s2)
{
    size_t i = 0;

    if (!s1 && !s2)
        return 0;
    if (!s1 && s2)
        return -1;
    if (!s2 && s1)
        return 1;
    for (; s1[i] != '\0' || s2[i] != '\0'; i++)
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
    return s1[i] - s2[i];
}
