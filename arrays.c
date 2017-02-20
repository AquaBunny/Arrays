#include <stdio.h>

int main(void) {
	
	int i;
	float f;
	double d;
	int a[10];
	
	int b[10] = {1,2,3,4,5,6,7,8,9,10};
	
	printf("The size of i is %lu\n", sizeof(i));
	printf("The size of f is %lu\n", sizeof(f));
	printf("The size of d is %lu\n\n", sizeof(d));
	
	printf("The size of int is %lu\n", sizeof(int));
	printf("The size of float is %lu\n", sizeof(float));
	printf("The size of double is %lu\n\n", sizeof(double));

	printf("The size of 5 is %lu\n", sizeof(5));
	printf("The size of 5.0f is %lu\n", sizeof(5.0f));
	printf("The size of 5.0 is %lu\n\n", sizeof(5.0));
	
	printf("The size of the array a (10 intergers) is %lu\n", sizeof(a));
	printf("memory addresses are: %li (0), %li (9)\n",(long int)&a[0], (long int)&a[9]);
	
	for(i = 0; i < 10; ++i) {
		a[i] = i;
		printf("%i\n", a[i]);
		printf("%i\n", b[i]);
	}
	printf("\n");
	
	return 0;
}