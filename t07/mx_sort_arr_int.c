// #include <stdio.h>

void mx_sort_arr_int(int *arr, int size) {
    int *a = arr;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (a[j] > a[i]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}  

// int main() {
//     int arr[]= {3, 55, -11, 1, 0, 4, 22};
//     mx_sort_arr_int(arr, 7); 
//     for (int i = 0; i < 7; i++){
//         printf(" %d", arr[i]);
//     }
//     return 0;
// }
