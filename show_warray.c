/*
** EPITECH PROJECT, 2025
** show word array
** File description:
** display the contents of an array of words
*/

#include "lib.h"
#include <unistd.h>

void show_warray(char **tab)
{
    if (!tab)
        return;
    for (int a = 0; tab[a]; a++) {
        my_putstr(tab[a]);
        write(1, "\n", 1);
    }
}
