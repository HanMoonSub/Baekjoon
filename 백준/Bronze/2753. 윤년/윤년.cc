#include <stdio.h>

int main() {
	int year;
	scanf("%d", &year);

	int yun;

	if (year % 400 == 0) 
    yun = 1;
	else if (year % 100 == 0) 
    yun = 0;
	else if (year % 4 == 0) 
    yun = 1;
	else  
    yun = 0;

	printf("%d\n", yun);

	return 0;
}