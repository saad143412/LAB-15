// Program showing pointer expressions
// during Arithmetic Operations
#include <stdio.h>
  
int main()
{
	printf("Programmer Name:Muhammad Saad\n\n");
    // Integer variables
    int a = 30, b = 20;
  
    // Variables for storing arithmetic
    // operations solution
    int add, sub, div, mul, mod;
  
    // Pointer variables for variables
    // a and b
    int *ptr_a, *ptr_b;
  
    // Initialization of pointers
    ptr_a = &a;
    ptr_b = &b;
  
    // Performing arithmetic Operations
    // on pointers
    add = *ptr_a + *ptr_b;
    sub = *ptr_a - *ptr_b;
    mul = *ptr_a * *ptr_b;
    div = *ptr_a / *ptr_b;
    mod = *ptr_a % *ptr_b;
  
    // Printing values
    printf("Addition = %d\n", add);
    printf("Subtraction = %d\n", sub);
    printf("Multiplication = %d\n", mul);
    printf("Division = %d\n", div);
    printf("Modulo = %d\n", mod);
    return 0;
}
#include<stdio.h>
#include<conio.h>
void main()
{
	printf("Programmer Name:Muhammad Saad\n\n");
	int *p, *q;
    int m, n;
    int res, res1;
    printf("\nEnter two numbers: ");
    scanf("%d%d",&m,&n);
    p = &m;
    q = &n;
    res = (m + n) * (m * n);
    printf("Result (using numbers) : %d\n",res);
    res1 = (*p + *q) * (*p * *q);
    printf("Result (using pointers) : %d\n",res1);
    getch();
}
#include <stdio.h>
int main()
{
	printf("Programmer Name:Muammad Saad\nReg.No.:20MDELE163\n\n");
   /* Pointer of integer type, this can hold the
    * address of a integer type variable.
    */
   int *p;

   int var = 10;

   /* Assigning the address of variable var to the pointer
    * p. The p can hold the address of var because var is
    * an integer type variable.
    */
   p= &var;

   printf("Value of variable var is: %d", var);
   printf("\nValue of variable var is: %d", *p);
   printf("\nAddress of variable var is: %p", &var);
   printf("\nAddress of variable var is: %p", p);
   printf("\nAddress of pointer p is: %p", &p);
   return 0;
}
