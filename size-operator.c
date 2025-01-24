#include <stdio.h>

int main(void){

   printf("Variables of type char occupy %u bytes\n", sizeof(char));
   printf("Variables of type short occupy %u bytes\n", sizeof(short));
   printf("Variables of type int occupy %u bytes\n", sizeof(int));
   printf("Variables of type long occupy %u bytes\n", sizeof(long));
   printf("Variables of type long long occupy %u bytes\n", sizeof(long long));
   printf("Variables of type float occupy %u bytes\n", sizeof(float));
   printf("Variables of type double occupy %u bytes\n", sizeof(double));
   printf("Variables of type long double occupy %u bytes\n", sizeof(long double));
    
   
    int var = 5264;
    printf("variable occupy the %u bytes\n",sizeof(var));
    
    long long var2 = 5454535;
    printf("variable occupy the %u bytes\n",sizeof(var2));

    return 0;
}