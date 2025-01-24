#include <stdio.h>

int main(void){

    // signed integer
    printf("These are Signed integer-\n");
    // short - %hd 
    short a = 45;
    printf("I am short = %hd\n",a);

    // int - %d
    int b = 855;
    printf("I am integer = %d\n",b);

    // long integer - %ld
    long c = 1825L;
    printf("I am Long Int = %ld\n",c);

    // long long integer - %lld
    long long d = 258462LL;
    printf("I am long Long Int = %lld\n",d);
    
    // octal(0-7). base 8 - %o
    int o = 077;
    printf("I am octal Number = %o\n",o);
    printf("Octal to decimal = %d\n",o);

    // hexadecimal(0-15)(10-15(A-F)) base-16 - %x %X
    int h = 0Xfff;
    printf("i am hexadecimal number = %X\n",h);
    printf("hexadecimal to decimal = %d\n",h);
    int w = 0Xdead;
    printf("this is : %X %d\n",w,w);
    int hex1 = 0xfade;
    printf("%x %d\n",hex1,hex1);
    int hex2 = 0x123456EE;
    printf("%x %d\n",hex2,hex2);
    unsigned long long hex3 = 0XFABABULL;
    printf("%x %llu\n",hex3);
    unsigned long hex4 = 0xafl;
    printf("%x %lu\n",hex4);
    // unsigned integer
    printf("\nUnsigned integer = \n");

    // unsigned short - %hu
    unsigned short us = 62400;
    printf("I am unsigned short = %hu\n",us);

    // unsigned int - %u
    unsigned int ui = 10025U;
    printf("i am unsigned Int = %u\n",ui);

    // unsigned long int - %lu
     unsigned long ul = 4294967295UL;
     printf("i am unsigned long Int = %lu\n",ul);

    // unsigned long long int - %llu
    unsigned long long ull = 25489145ULL;
     printf("i am unsigned long long Int = %llu\n",ull);


     unsigned short negative = -2;
      printf("i am unsigned short negative Int = %hu\n",negative);
      
      double exponent_num = 0.5E-15;
      printf("this exponent is = %lf\n",exponent_num);
      
     double biggest = 123E30;
     printf("%lf\n",biggest);

     

     return 0;
}

// 0000000000000010
// 1111111111111101   1's complement (opposite number) 
//               +1   2's complement
// 1111111111111110

