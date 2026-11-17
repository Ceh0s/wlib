/*
** EPITECH PROJECT, 2026
** password_generator.c
** File description:
** randomly generates a password of length _len_ based on the _auth_ array, or
** from all printable ascii characters if it's set to NULL.
** --
** _len_ defines the length of the password to be generated. if it's zero, _len_
** is set to 16 by default.
** --
** _auth_ defines an array of strings composed of characters that are required
** to be in the final generated password. At least one char of each string will
** appear in the final password. This parameter is nullable.
** --
** _fill_with_auth_ determines if the password is to be exclusively filled with
** characters from the _auth_ array. If false, the rest of the password will be
** completed using printable ascii characters.
** --
** WARNING: this function does not initialize srand(). Use it in the caller
** function to ensure passwords are randomly generated.
*/

#include "lib.h"
#include <stdlib.h>

static int error_handling(ssize_t size_arr, size_t len, char **auth, int flag)
{
    if (size_arr > len && auth)
        return my_putstr(2,
            "Number of required chars exceeds password length\n", 84);
    if (!auth && flag)
        return my_putstr(2, "Fill flag is set to true but array is null\n", 84);
    return 0;
}

static char get_random_char(const char *str)
{
    size_t len = my_strlen(str);

    return len > 0 ? str[rand() % len] : '\0';
}

static void shuffle_password(char *pass, size_t len)
{
    size_t j = 0;
    char tmp = 0;

    for (size_t i = len - 1; i > 0; i--) {
        j = rand() % (i + 1);
        tmp = pass[i];
        pass[i] = pass[j];
        pass[j] = tmp;
    }
}

static void fill_remaining(char *pass, char **auth, size_t start,
    size_t len_and_flag[2])
{
    const char *all = " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUV"
        "WXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";

    for (size_t i = start; i < len_and_flag[0]; i++)
        pass[i] = (len_and_flag[1] && auth) ?
            get_random_char(auth[rand() % start]) : get_random_char(all);
}

static int create_password(char *pass, char **auth, size_t len,
    int fill_with_auth)
{
    size_t i = 0;

    for (; auth[i] != NULL; i++) {
        pass[i] = get_random_char(auth[i]);
        if (!pass[i])
            return 84;
    }
    fill_remaining(pass, auth, i, (size_t[2]){len, (size_t)fill_with_auth});
    shuffle_password(pass, len);
    return 0;
}

const char *password_generator(char **auth, size_t len, int fill_with_auth)
{
    ssize_t size_arr = arr_len(auth);
    char *pass = NULL;

    len = len == 0 ? 16 : len;
    if (error_handling(size_arr, len, auth, fill_with_auth) == 84)
        return NULL;
    pass = malloc(sizeof(char) * (len + 1));
    if (!pass)
        return NULL;
    if (size_arr <= 0)
        fill_remaining(pass, NULL, 0, (size_t[2]){len, 0});
    else if (create_password(pass, auth, len, fill_with_auth) == 84) {
        free(pass);
        return NULL;
    }
    pass[len] = '\0';
    return pass;
}
