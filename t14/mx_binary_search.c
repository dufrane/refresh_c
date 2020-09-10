// #include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int l = 0;
    int r = size - 1;
    int m;

    if (!*arr)
        return -1;
    else {
        while (l <= r) {
            ++*count;
            m = (r + l) / 2;
            if (mx_strcmp(arr[m], s) == 0)
                return m;
            else if (mx_strcmp(arr[m], s) > 0)
                r = m - 1;
            else
                l = m + 1;
        }
        *count = 0;
        return -1;
    }
}

// int main() {
//     char *arr[]= {"222", "Abcd", "aBc", "ab", "az", "z"};
//     int count = 0;
//     printf("returns %d and count = %d\n", mx_binary_search(arr, 6, "ab", &count), count);
// }
