#include <stdio.h>

int mx_sqrt(int x) {
    int y;
    
    for (; y < x/2; y++ ) {
        if (x == y * y) {  
            return y;
        }
    }
    return 0;
}

int main() {
    printf("%d", mx_sqrt(25));
}
