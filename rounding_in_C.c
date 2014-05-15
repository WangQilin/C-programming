//this program illustrates how to do rounding in C with different precisions

#include <stdio.h>
#define PI 3.1415926535
#define PRECISION 1000.0	//10.0   round to the 1st decimal place
							//100.0  round to the 2nd decimal place
							//1000.0 round to the 1st decimal place, so on so forth

int main(void) {
	int  i_result;
	float f_result;
	int temp;

	//round to integer, simply add 0.5 to the original number
	i_result = PI + 0.5;
	printf("%d \n", i_result);

	//round to floating point number, multiply the number by PRECISION
	//then add 0.5 to it, finally divide it by PRECISION
	temp = PI * PRECISION + 0.5;
	f_result = temp / PRECISION;
	printf("%.3f \n", f_result);

	return 0;	
}
