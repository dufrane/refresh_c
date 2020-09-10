// #include <stdio.h>
#include <stdlib.h>

char *mx_strcpy(char *dst, const char *src) {
    int i = 0;

    if (dst == NULL)
        return NULL;
    for(; src[i] != '\0'; i++) {
        dst[i] = src[i];
    }
    dst[i] = '\0';
    return dst;
}

// int main() {
//     char src [] = "1234567";
//     char dst [] = "123";
//     printf("%s", mx_strcpy(dst, src));
// }
