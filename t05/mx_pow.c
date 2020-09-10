// #include <stdio.h>

double mx_pow(double n, unsigned int pow) {
    double result = n;
    
    if (pow == 0) {
        return 1;
    }
    if (pow == 1) {
        return n;
    }
    for (; pow >1; pow--) {
        result = result * n;   
    }
    return result;
}

// int main(){
//     printf("%f", mx_pow(3, 3));
// }
