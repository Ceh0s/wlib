/*
** EPITECH PROJECT, 2025
** strisauth
** File description:
** returns 1 if the sent character is contained within the auth string
*/

#include <stddef.h>

int charisauth(char c, const char *auth)
{
    for (size_t i = 0; auth[i]; i++)
        if (c == auth[i])
            return 1;
    return 0;
}
