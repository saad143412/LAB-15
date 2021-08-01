#include<stdio.h>
struct package{
	float milk;
	float sugar;
	int egg;
};
int main()
{
	printf("Programmer Name:Muhammad Saad\n\n");
	struct package box;
	box.milk=2;
	box.sugar=3;
	box.egg=4;
	
	printf("Milk:%f\n",box.milk);
	printf("Sugar:%f\n",box.sugar);
	printf("Egg:%d\n",box.egg);
	
}
