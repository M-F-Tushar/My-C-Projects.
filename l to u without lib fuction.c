#include<stdio.h>
int main()
{
    char lower;
    printf("Enter any lowercase letter : ");
    scanf("%c",&lower);//The difference between lower and upper is 32

    printf("The uppercase letter : %c",lower-32);
}
