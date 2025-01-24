#include<stdio.h>
#include <stdbool.h>

int main(void){
    
    bool is_logged_in = false;
    if(is_logged_in){
      printf("user logged in\n");
    }else{
        printf("user logged out\n");
    }

    bool is_programme = true;
    bool is_false_fun = false;
    printf("this is = %d\n",is_programme);
    printf("this result = %d\n",is_false_fun);

    printf("%d\n",10>8);   

    short x = 12;
    short y = 15;
    printf("%d\n",x>y);

    printf("%d\n",10 ==10);
    printf("%d\n",10 == 15);

    bool is_humburger_tasty = true;
    bool is_humburger_fun = true;
    printf("%d\n",is_humburger_tasty == is_humburger_fun);
    return 0;
}


// boolean data type doesn't exist in c .
// boolean data is only true or false .  1 - true, 0 - false
// but boolean data type is defined as the int,short,long,long long 