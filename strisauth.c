/*
** EPITECH PROJECT, 2025
** str isauth
** File description:
** returns 1 if the string only contains auth chars, 0 otherwise
** toggle variable is for switching the function to banned chars mode
*/

#include "lib.h"

int strisauth(const char *str, const char *auth, int toggle)
{
    if (!str)
        return 1;
    for (int i = 0; str[i] != '\0'; i++)
        if (charisauth(str[i], auth) == toggle)
            return 0;
    return 1;
}
