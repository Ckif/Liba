#include "libmx.h"

char *mx_strndup(const char *str, size_t n) {
    char *copy = mx_strnew(n);
    copy = mx_strncpy(copy, str, n);
    return copy;
}
