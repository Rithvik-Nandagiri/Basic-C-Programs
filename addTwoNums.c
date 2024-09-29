#include<stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two numbers separated by space\n");
    scanf("%d %d", &num1, &num2);

    printf("Sum of the given numbers is: %d\n", num1 + num2);
    return 0;
}