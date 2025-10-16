#include <stdio.h>
#include <math.h>

int main(){
	int a = 10;
	int b = 5;
	int tong = a + b;
	int hieu = a - b;
	int tich = a * b;
	float thuong = a / b;
	
	printf ("tong cua 2 so %d \n", tong);
	printf ("hieu cua 2 so %d \n", hieu);
	printf ("tich cua 2 so %d \n", tich);
	printf ("thuong cua 2 so %.2f", thuong);
	
	return 0;
}
