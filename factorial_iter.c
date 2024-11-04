// Can calculatethe factorial of a number upto 65. From 66, it dispalys 0
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num = 0;
    unsigned long result = 1;
    printf("Enter a number: \n");
    scanf("%d", &num);
    if(num <= 0)
    {
        printf("Factorial is only for positive integers greater than 1\n");
        exit(0);
    }
    for(int i = num; i > 0; i--)
    {
        result = result * i;
    }

    printf("Factorial of the given number is : %lu\n", result);

    return 0;
}