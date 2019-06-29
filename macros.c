#include <stdio.h>
#include <string.h>

#define UPPER 25 //how you defined constant
#define PI 3.14
#define SPHERE_VOLUME(r) (4/3) * PI * r * r* r
#define SUM(x,y) (x+y)
#define MINIMUM(a,b) a > b ? b : a 
#define MAXIMUM(a,b) a > b ? a : b
#define MINIMUM2(a, b, c) MINIMUM(a, MINIMUM(a,c))
main () { 
//int counter; 
//float r = 6.0; 
//float area = PI * r * r;
//for (counter = 1; counter <= UPPER; counter++){ 
//printf("\n%d", counter); // will print number from 1 - 25
//int counter; 
//for (counter = 1; counter <= 10 ; counter ++)
//printf("\tThe area is : %f", SPHERE_VOLUME(counter));
//printf("%d", SUM(10,10));
printf("\n%d", MINIMUM(10,20));
printf("\n%d", MAXIMUM(10,20));
printf("\n%d", MINIMUM2(10,20,30));
}

