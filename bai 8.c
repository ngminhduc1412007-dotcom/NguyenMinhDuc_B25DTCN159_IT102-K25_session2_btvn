#include <stdio.h>
#include <math.h>

int main(){
	int number = 12345;
	int result = 0;
	int digit1 = number % 10;
    int digit2 = (number / 10) % 10;
    int digit3 = (number / 100) % 10;
    int digit4 = (number / 1000) % 10;
    int digit5 = (number / 10000) % 10;
	
	result = digit1 * 10000 + digit2 * 1000 + digit3 * 100 + digit4 * 10 + digit5 * 1;
	printf ("chuc nghin = %d\n", digit1);
    printf ("nghin = %d\n", digit2);
    printf ("tram = %d\n", digit3);
    printf ("chuc = %d\n", digit4);
    printf ("don vi = %d\n", digit5);
    printf ("dao nguoc cac chu so %d", result);
    
    return 0;
} 
