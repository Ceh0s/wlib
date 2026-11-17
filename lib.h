/*
** EPITECH PROJECT, 2025
** my.h
** File description:
** lib's my.h
*/

#ifndef LIB_H_
    #define LIB_H_

    #include <stddef.h>
    #include <sys/types.h>

int my_putnbr(long long);
int my_putstr(int, const char *, int);
int my_putnstr(int, const char *, int, size_t);
void show_warray(char **);

int char_is_auth(char, const char *);
int str_is_auth(const char *, const char *, int);
int my_strcmp_bool(const char *, const char *);
int my_strcmp(const char *, const char *);
int my_strncmp(char const *, char const *, size_t);
ssize_t my_strchr(char *, char *);
ssize_t count_occ(char *, char *);

ssize_t my_strnlen(const char *, size_t);
ssize_t my_strlen(const char *);
ssize_t arr_len(char **);
int num_len(long long);
int my_getnbr(char const *);

char *my_strcpy(char *, const char *);
char *my_strncpy(char *, const char *, size_t);
char *my_strcat(char *, const char *);
char *my_strncat(char *, const char *, size_t);
char *my_astrcat(const char *, const char *);
char *my_strdup(const char *);
char *my_strndup(const char *, size_t);
char **arr_dup(char **);
char *my_strcutd(const char *, const char *);
void is_freeable(void **, void *);

char **stwa_delimiter(const char *, const char *, int, int);

const char *password_generator(char **, size_t, int);

#endif
