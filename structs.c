#include<stdio.h>
#include<string.h>

//Structs
//Sher Khan 

int main ( int argc, char **argv){ 

//how to declare a struct 
struct struct1 { 
  int number; 
  char name[20];
};

//assign values to struct 
struct struct1 a; 
a.number = 1; 

//cant assign string value to an array
// 1- array we want to find, 2-the string we want the array to be filled with, 3- number of characters
strncpy(a.name, "Sher", 10); 
printf("Struct1 (a) number: %d, name: %s\n", a.number, a.name);

//another way to do it 
struct struct1 b = {2, "Darth Vader"}; 
printf("Struct1 (b) number: %d, name: %s\n", b.number, b.name); 

//size of struct 
printf("size of struct: %d", sizeof(struct struct1)); // will be 24 bc int = 4 +20 for string char. 

return 0;
}





