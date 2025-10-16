#include <stdio.h>
#include <math.h>

 int main(){
 	
 	int a = 3;
	int b = 4;
	int c = 2;
	double S = ((pow ( a, 2 ) + sqrt(pow( b, 2 ) + 4 * a * c)) / 2 * a ) - (pow(b,3)/pow(c,2)) + sqrt(fabs(a-b));
    printf("Gia tri cua S = %.2f\n", S);
    
    return 0;
 }
