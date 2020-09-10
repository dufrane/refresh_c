// #include <stdio.h> 

int mx_strcmp(const char *s1, const char *s2);

int mx_bubble_sort(char **arr, int size) {
    char *buf;
    int count = 0;

    for (int i = 0; i < size; ++i) {
        for (int j = i; j < size; ++j) {
            if (mx_strcmp(arr[i], arr[j]) > 0) {
                buf = arr[i];
                arr[i] = arr[j];
                arr[j] = buf;
                ++count;
            }
        }
    }
    return count;
}

// int main() {
//     char *arr[] = {"abc", "xyz", "ghi", "def"};
//     printf("%d \n", mx_bubble_sort(arr, 4));
// }

// int main() {
//     char *arr[] = {"abc", "acb", "a"};
//     printf("%d \n", mx_bubble_sort(arr, 3));
// }
