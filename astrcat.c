/*
** EPITECH PROJECT, 2026
** astrcat
** File description:
** same as mystrcat, but allocates the destination string in place of the caller
*/

#include "lib.h"
#include <stdlib.h>

char *astrcat(const char *a, const char *b)
{
    char *res = malloc(sizeof(char) * (mystrlen(a) + mystrlen(b) + 1));

    mystrcpy(res, a);
    mystrcat(res, b);
    return res;
}
