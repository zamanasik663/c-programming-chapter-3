// c program to print size of
// different data types in C


#include <stdio.h>

int main(){

      int size_of_int = sizeof(int);
      printf("Size of integer = %d\n",size_of_int);

      int size_of_float = sizeof(float);
      printf("Size of float = %d\n",size_of_float);

      int size_of_short_int = sizeof(short int);
      printf("Size of short integer = %d\n",size_of_short_int);

      int size_of_unsigned_short_int = sizeof(unsigned short int);
      printf("Size of Unsigned Short Integer = %d\n",size_of_unsigned_short_int);
      

    return 0;
}