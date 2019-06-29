#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int  maximumFinder (int number1, int number2, int number3){ 
int max = number1; 
if (number2 > max) { 
 max = number2; 
}

if (number3 > max){ 
max = number3;
}

return max;
}
int main() { 

int number1 = 10; 
int number2 = 20; 
int number3 = 100; 

int result = maximumFinder(number1, number2, number3); 
printf("%d", result);
}
