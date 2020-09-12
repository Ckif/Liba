#include"libmx.h"

char **mx_strsplit(char const *s, char c) {
    int i = 0;
    int count = 0;
    int words = 0;
    char **ret = NULL;

    if (!s)
        return NULL;
    words = mx_count_words(s,c)+1;
    ret = (char **)malloc(sizeof(char *) * (words));
    for ( i = 0; i < words-1; i++) {
        count = 0;
        while(*s == c)
            s++;
        while(s[count] != c)
            count++;
        ret[i] = mx_strnew(count);  
        ret[i] = mx_strncpy(ret[i], s, count);
        s += count;
    }
    ret[i] = NULL;
    return ret;
}
