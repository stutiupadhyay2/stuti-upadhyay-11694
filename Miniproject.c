#include <stdio.h>

/ function declarations /
void add();
void subtract();
void multiply();
void divide();

int main()
{
    int choice;
    char again;

    do
    {
        printf("\n**** MINI CALCULATOR ****\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            default:
                printf("Invalid choice");
        }

        printf("\nDo you want to continue? (yes/no): ");
        scanf(" %c", &again);

    } while(again == 'y' || again == 'Y');

    printf("\nThank you for using calculator");
    return 0;
}

/ functions /

void add()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d", a + b);
}

void subtract()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Difference = %d", a - b);
}

void multiply()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Product = %d", a * b);
}

void divide()
{
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if(b == 0)
        printf("Division not possible");
    else
        printf("Quotient = %.2f", a / b);
}

