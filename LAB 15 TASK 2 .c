#include<stdio.h>
#include<conio.h>
int main()
{
	printf("Programmer Name:Muhammad Saad\n\n");
    int num;
    printf("Enter any number to store in num variable: ");
    scanf("%d", &num);
    printf("\nValue of num = %d", num);
    printf("\nAddress of num = %p", &num);
    getch();
    return 0;
}
