#include<stdio.h>
int circle()
{
	float radius;
	float pi=3.14;
	printf("enter the value ");
    scanf("%f",&radius);
    printf("area of circle means %f",pi*radius*radius);
	
}
 int rectangle()
 {
 
 float width,length;
 
 printf("\n\n\n");
 printf("enter your width ");
 scanf("%f",&width);
 printf("enter your length ");
 scanf("%f",&length);
 printf("your value is %f",width*length);
 
}



int triangle()
{
  float base,height;
  printf("\n\n\n");
  printf("enter your base ");
  scanf("%f",&base);
  printf("enter your hight ");
  scanf("%f",&height);
  printf("your value is %f",base * height);
}




int main()
{
	circle();
	rectangle();
	triangle();
}