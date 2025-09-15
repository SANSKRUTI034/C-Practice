#include<stdio.h>
int main()
{
    char cvalue = 'S';
    int ivalue = 243;
    double dvalue= 23.1234;
    float fvalue=12.21;


    printf("size of character is:    %c \n", sizeof(cvalue));
    printf("size of integer is:%d \n", sizeof(ivalue));
    printf("size of float is:%f \n", sizeof(fvalue));
    printf("size of double is:%lf \n", sizeof(dvalue));

    return 0;
};