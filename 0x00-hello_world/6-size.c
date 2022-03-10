#include<stdio.h>
int main(){
	int a;
	long int b;
	char d;
	float f;

	printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(a));

	printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(b));
	
	printf("Size of  char: %lu byte(s)\n",(unsigned long)sizeof(d));
	
	printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
	
	
	return 0;
}
