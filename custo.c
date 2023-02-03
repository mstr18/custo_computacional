#include <stdio.h>
#include <stdlib.h>
#include <time.h>


double exponentialrec(double base, int exponent) {
  
    if (exponent == 0)
    	return 1;
  	else if (exponent == 1)
    	return base;
  	else
   	 	return base * exponentialrec(base, exponent - 1);
}

double exponentialfor(double base, int exponent) {
  
  double result = 1;
  for (int i = 0; i < exponent; i++) 
  {
    result *= base;
  }
  return result;
}

int main(int argc, char** argv)
{
	clock_t start, end;
    double elapsed;
	
	
	start = clock();
  	long double result = exponentialfor(2, 51200000);
  	end = clock();
	
	elapsed = ((double) (end - start)) / CLOCKS_PER_SEC;

	printf("\n\ntempo para o for: %lf seconds\n\n", elapsed);
	
    start = clock();
  	result = exponentialfor(2, 51200000);
  	end = clock();
	
	elapsed = ((double) (end - start)) / CLOCKS_PER_SEC;

	printf("\n\ntempo para o recursivo: %lf seconds\n\n", elapsed);
	
	system("pause");
	
	return 0;
}
