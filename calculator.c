#include<stdio.h>
#include<stdlib.h>

int menu(int c)
{
    printf("Enter your choice:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
    scanf("%d", &c);

    return c;
}

void switchroo(int c)
{
    float a = 0.0,b = 0.0;
    switch(c)
    {
        case 1: printf("Enter two numbers\n");
                scanf("%f %f", &a, &b);
                printf("Sum is %f\n", a+b);
                break;
        
        case 2: printf("Enter two numbers\n");
                scanf("%f %f", &a, &b);
                printf("Difference is %f\n", a-b);
                break;

        case 3: printf("Enter two numbers\n");
                scanf("%f %f", &a, &b);
                printf("Prodcut is %f\n", a*b);
                break;

        case 4: printf("Enter two numbers\n");
                scanf("%f %f", &a, &b);
                printf("Result is %f\n", a/b);
                break;

        case 5: printf("Thanks for using Simple Calculator!\n");
                exit(0);

        default: printf("Please enter a valid choice\n");
    }
}

int main()
{
    int choice;

    printf("This is a Simple Calculator\n");

    while(1)
    {
        choice = menu(choice);

        switchroo(choice);
    }

    return 0;
}