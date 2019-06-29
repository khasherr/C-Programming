#include <stdio.h>
#include <ctype.h> 
#include <stdlib.h>
#include <math.h>

double hypotenus (double base, double height){ 
 return pow(base, 2) + pow(height,2);
}

int main () { 
int base = 10; 
int height = 20; 
double result = hypotenus(base, height); 
printf("%f", sqrt(result));
}
