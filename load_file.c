/*
** EPITECH PROJECT, 2025
** load file in mem
** File description:
** self explanatory
*/

#include "lib.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

static char *cpy_file_str(int fd, size_t size)
{
    char *buf = malloc(sizeof(char) * (size + 1));
    long long len = 0;

    if (!buf)
        return NULL;
    len = read(fd, buf, size);
    if (len < 0) {
        free(buf);
        return NULL;
    }
    buf[len] = '\0';
    close(fd);
    return buf;
}

char *load_file(const char *filepath, size_t i)
{
    struct stat s;
    int fd = 0;

    if (!filepath)
        return NULL;
    fd = open(filepath, O_RDONLY);
    if (fd < 0)
        return NULL;
    if (i > 0)
        return cpy_file_str(fd, i);
    if (stat(filepath, &s) == -1) {
        close(fd);
        return NULL;
    }
    return cpy_file_str(fd, s.st_size);
}
