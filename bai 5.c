#include <stdio.h>
#include <math.h>

int main(){
	int a = 1;
	int b = 2;
	float c = 1.5;
	
	float tong = a + b + c;
	int tongsonguyen = a + b + (int)c;
	
	printf ("tong %.2f \n", tong);
	printf ("tong so nguyen %d", tongsonguyen);
	
	return 0; 
	  
} 
