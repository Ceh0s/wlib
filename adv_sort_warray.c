/*
** EPITECH PROJECT, 2025
** sort word array
** File description:
** function sorting words in an array with a given compare function
*/

#include "lib.h"
#include <stdlib.h>

static void swap_words(char **tab, size_t i, size_t a)
{
    char *tmp = tab[i];

    tab[i] = tab[a];
    tab[a] = tmp;
}

static void opti_sort(char **tab, int(*cmp)(char const *, char const *),
    ssize_t i, int idx)
{
    for (size_t tmp = i + 1; i < tmp &&
        cmp(tab[i], tab[i + 1]) == idx; i--)
        swap_words(tab, i, i + 1);
}

void adv_sort_warray(char **tab,
    int(*cmp)(char const *, char const *), int idx)
{
    char *tmp = NULL;

    if (!tab || !tab[0])
        return;
    for (ssize_t i = 0; tab[i + 1]; i++)
        if (cmp(tab[i], tab[i + 1]) == idx) {
            opti_sort(tab, cmp, i, idx);
            i = i < 2 ? 0 : i - 2;
        }
}
