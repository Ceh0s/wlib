/*
** EPITECH PROJECT, 2026
** password_generator.c
** File description:
** randomly generates a password of length _len_ based on _auth_ character
** array, or from a list of ascii characters if the latter parameter is null.
** --
** _len_ defines the length of the password to be generated. if it's zero, _len_
** is set to 16 by default.
** --
** _auth_ defines an array of strings composed of characters that are required
** to be in the final generated password, whether it be for personal preference
** or character requirements/restrictions in login forms.
** --
** WARNING: this function does not initialize srand(). Use it in the caller
** function to ensure random password generation.
*/

#include "lib.h"
#include <stdio.h>
#include <stdlib.h>

void create_password_default(char **pass, const size_t len)
{
    const char *all = " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUV"
        "WXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";

    for (size_t i = 0; i < len; i++)
        (*pass)[i] = all[rand() % 94];
}

const char *password_generator(char **auth, size_t len)
{
    ssize_t size_arr = arr_len(auth);
    char *pass = NULL;

    len = len == 0 ? 16 : len;
    pass = malloc(sizeof(char) * (len + 1));
    if (!pass)
        return NULL;
    if (size_arr == -1)
        create_password_default(&pass, len);
    else {
        free(pass);
        printf("get rotated idiot\n");
        return NULL;
    }
    pass[len] = '\0';
    return pass;
}
