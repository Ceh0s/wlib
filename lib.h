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

int myputnbr(long long);
void myputstr(const char *);
void myputnstr(const char *, size_t);
int myputerr(const char *, int);
void show_warray(char **);

int charisauth(char, const char *);
int strisauth(const char *, const char *, int);
int mystrcmp(const char *, const char *);
int mystrncmp(char const *, char const *, size_t);
ssize_t mystrchr(char *, char *);
ssize_t countocc(char *, char *);

ssize_t mystrnlen(const char *, size_t);
ssize_t mystrlen(const char *);
ssize_t arrlen(char **);
int numlen(long long);
int my_getnbr(char const *);

char *mystrcpy(char *, const char *);
char *mystrncpy(char *, const char *, size_t);
char *mystrcat(char *, const char *);
char *mystrncat(char *, const char *, size_t);
char *astrcat(const char *, const char *);
char *mystrdup(const char *);
char *mystrndup(const char *, size_t);
char **arrdup(char **);
char *strcutd(const char *, const char *);
void isfreeable(char **, char *);

char **stwa_delimiter(const char *, const char *, int, int);

#endif
