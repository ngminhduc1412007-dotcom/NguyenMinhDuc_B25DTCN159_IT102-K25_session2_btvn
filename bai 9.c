#include <stdio.h>

int main(){
	int a = 10;
    int b = 20;
    int c = 30;
    double A = pow(a, 3) + pow(b, 2) + 2 * c + sqrt(a + b - c);

    printf("Gia tri cua A = %.2f\n", A);

    return 0;
	
} 
