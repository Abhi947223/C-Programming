#include <stdio.h>
#include <math.h>

int main()
{
	double celsius = 0;
	double fahren = 0;
	printf("Celsius\tFahrenheit\n");
	for(; celsius <= 100.0 ; celsius+=5.0 ){
		fahren = 32.0  + (celsius*9.0)/5.0;
		printf("%0.1lf\t%0.1lf\n",celsius,fahren);
	}
	return 0;
}
