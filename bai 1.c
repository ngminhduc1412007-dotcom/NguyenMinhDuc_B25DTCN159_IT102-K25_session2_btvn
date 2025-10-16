#include <stdio.h>

int main(){
	short a = 1; // so nguyen nho 
	int b = 10; // so nguyen 
	long c = 10L; // so nguyen dai 
	long long d = 1000; // so nguyen dai hon
	unsigned short e = 50; // so nguyen nho khong dau
	unsigned int f = 15U; // so nguyen khong dau
	unsigned long g = 1500; // so nguyen dai khong dau
	unsigned long long h = 34567; // so nguyen dai hon khong dau 
	float point = 9.7; // so thap phan 
	char letter = 'abc'; // ky tu  
	printf ("gia tri1 %hi \n", a);
	printf ("gia tri2 %d \n", b);
	printf ("gia tri3 %ld \n", c);
	printf ("gia tri4 %lld \n", d);
	printf ("gia tri5 %hu \n", e); 
	printf ("gia tri6 %u \n", f);
	printf ("gia tri7 %lu \n", g);
	printf ("gia tri8 %llu \n", h);
	printf ("gia tri9 %.1f \n", point);
	printf ("gia tri10 %c", letter);
	
	return 0;
}
