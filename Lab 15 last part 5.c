#include<stdio.h>
struct package{
	float milk;
	float sugar;
	int egg;
};
int main()
{
	printf("Programmer Name:Muhammad Saad\n\n");
	struct package *packageptr,package1;
	packageptr=&package1;
	
	printf("How much milk: ");
	scanf("%f",&packageptr->milk);
	
	printf("How much sugar: ");
	scanf("%f",&packageptr->sugar);
	
	printf("Enter Eggs: ");
	scanf("%d",&packageptr->egg);
	
	printf("Displaying:\n");
	printf("Milk: %f\n",packageptr->milk);
	printf("Sugar: %fkg\n",packageptr->sugar);
	printf("Eggs: %d\n",packageptr->egg);
}
