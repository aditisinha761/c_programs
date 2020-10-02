// swap two numbers using call by reference
#include<stdio.h>
int swap(int *x,int *y)
{
 int tmp;
 tmp=*x;
 *x=*y;
 *y=tmp;
}
int main()
{
 int a,b,r;
   printf("enter two numbers");
   scanf("%d%d",&a,&b);
   swap(&a,&b);
 printf ("After swapping :%d %d" , a,b);
 return 0;
}
