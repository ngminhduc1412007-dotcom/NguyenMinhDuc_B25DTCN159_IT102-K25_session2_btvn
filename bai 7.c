#include <stdio.h>
#include <math.h>

int main(){

    int number = 12345;
    int sum = 0;
    int digit1 = number % 10;
    int digit2 = (number / 10) % 10;
    int digit3 = (number / 100) % 10;
    int digit4 = (number / 1000) % 10;
    int digit5 = (number / 10000) % 10;

    sum = digit1 + digit2 + digit3 + digit4 + digit5;
    printf("don vi = %d\n", digit1);
    printf("chuc = %d\n", digit2);
    printf("tram = %d\n", digit3);
    printf("nghin = %d\n", digit4);
    printf("chuc nghin = %d\n", digit5);
    printf("tong = %d\n", sum);
    
    return 0; 
}
