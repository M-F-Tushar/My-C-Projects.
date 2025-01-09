// An integer variable num that will contain 10
/*
Write a program that print an integer number
*/

#include<stdio.h>
int main()
{
    int num1=20, num2=30;
    float num3=50.45;
    double num4=60.456789;
    char ch='a';

    printf("integers are %d, %d\n", num1, num2);
    printf("float is %.1f\n", num3);//one number after .
    printf("double is %lf\n", num4);
    printf("character is %c", ch);

    return 0;
}
