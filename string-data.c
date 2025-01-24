#include <stdio.h>

int main(void){

    // we learn string
    // there are three way to show string. all way array.but this things we use three type within array

    // system 1

    char name[20];
    name[0] = 'I';
    name[1] = ' ';
    name[2] = 'A';
    name[3] = 'm';
    name[4] = ' ';
    name[5] = 'S';
    name[6] = 'a';
    name[7] = 'j';
    name[8] = 'i';
    name[9] = 'b';
    printf("this is = %s\n",name);

    // system 2

    char name1[30] = {
        'I',' ','a','m',' ','S','a','j','i','b'
    };
    printf("this is = %s\n",name1);

    // system 3

    char name2[30] = "I am Asikuzzaman Sajib";
    printf("this is = %s\n",name2);

    printf("index 0 = %c\n",name2[0]);
     printf("index 0 = %c\n",name2[8]);

    return 0;
}