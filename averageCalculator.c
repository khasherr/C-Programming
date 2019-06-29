#include <stdio.h>

int main () { 
  
  char array [100];
  int userInput, counter, sum =0; 
  float average;
  printf("Enter a number :" ); 
       scanf("%d", &userInput);
  for (counter = 0; counter <= userInput; counter++){ 
       
       printf("Enter Numbers: ");
       scanf("%d", &array[counter]); 
       sum = sum + array[counter]; 
  }
     average = (float) sum / userInput;
    
   printf("The is sum is %i", sum);
   printf("The average is %f", average);
   
   return 0; 
}
  
  
 
 
 
