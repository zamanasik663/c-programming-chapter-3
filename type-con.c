#include <stdio.h>

int main(void){
    
    // Implicit
    // char ch = 'H';
    // int r = ch + 1050;
    // printf("%c %d %x\n",ch,ch,ch);
    // printf("result : %d\n",r);
    // that is called Implicit


    // Explicit
    // char ch1 = 'U';
    // int x = (int)ch1 + 250;
    // printf("Explicit Convert data = %d\n",x);
    // char ch2 = 'v';
    // int y = (int)ch2 + 30;
    // printf("result 2 = %d\n",y);

    // float f = (float)y;
    // printf("float = %f\n",(float)y);


    // float a = 3.5f;
    // float b = 2.5f;
    // float c = 5.6f;
    // float d = 4.15f;
    
    // int result = (int)a + (int)b + (int)c + (int)d;
    // printf("this result is = %d\n",result);

    float p = 10.25f;
    int i = (int)p;
    printf("%.2f %d\n",p,i);

    int s = 23.25f;
    printf("%d\n",s);

    int var1 = 15;
    float var2 = 8.35f;
    double var3 = var1 + var2;
    printf("reasult of var1 + var2 = %f\n",var3);

    int var4 = (char)95;
    printf("%c\n",var4);
    int var5 = 98;
    char var6 = (char)var5;
    printf("%c\n",var6);

    // int var7,var8,var9;
    // var7 = 5;
    // var8 = 2;
    // var9 = var7/var8;
    // double var10 = (double)var9;
    // printf("%lf\n",var10);

    int var7 = 5, var8 = 2;
    double var9 = (double)var7/var8;
    printf("%lf\n",var9);
    return 0;
}




// there are two types of type conversion. like-Implicit & Explicit
// Implicit - Implicit Type Casting in C, also known as automatic type conversion, occurs when the compiler automatically converts one data type into another without explicit instruction from the programmer.


// Explicit - In this case, the programmer explicitly converts the data type, typically for operations that require specific data types. This is done by placing the target data type in parentheses before the variable.
