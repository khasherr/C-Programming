#include <stdio.h>

int maximumFinder(int x, int y, int z){ 
int maximum = x;

if( y > maximum) {
	maximum = y;
}

if (z > maximum){ 
 maximum = z;
}

return maximum;
}

int main(void){ 

int  number1, number2, number3; 
printf("%s", "Enter 3 numbers :"); 
scanf ("%d%d%d", &number1, &number2, &number3); 
printf("Max is %d\n", maximumFinder(number1, number2, number3));


}
