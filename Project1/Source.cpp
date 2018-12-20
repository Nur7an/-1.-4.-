/*#include<stdio.h>
int  main()
{
	int n;
	scanf("%d",&n);
	for (int i = 1; n <= i; i++)
	{
		n = n * n;
		printf("%d", n);
	}
}
*/
/*#include <stdio.h> //3 zadacha
int main() {
	int k;

	printf("k = ");
	scanf("%d", &k);
	for (int i = 1; i <= k; i++)
	{
		printf("%d\n", k);
	}

	return 0;
}
*/
/*#include <stdio.h> //4.a zadacha
int main() {
	int l=35;

	for (int k = 20; k <= l; k++)
	{
		printf("%d\n", k);
	}

	return 0;
}*/
/*#include <stdio.h> //4.b zadacha
int main() {
	int l,sum;
	scanf("%d", &l);

	for (int k = 10; k <= l; k++)
	{
		sum = k * k;
		printf("%d\n", sum);
	}

	return 0;
}*/
#include <stdio.h> //4.c zadacha
/*int main() {
	int l, sum;
	scanf("%d", &l);

	for (int k = 50; l <= k; l++)
	{
		sum = l *l*l;
		printf("%d\n", sum);
	}

	return 0;
}
*/
/*#include <stdio.h> //4.c zadacha
int main() {
	int a, b;
	scanf("%d%d", &a, &b);

	for (int a; a <= b; a++)
	{

		printf("%d\n", a);
	}

	return 0;
}*/

/*#include <stdio.h> //5 zadacha
int main() {
	int a = 20, b, sum;
	scanf("%d", &b);

	for (int i = 0; i <= b; i++)
	{
		sum = a * b;

	}
	printf("%d\n", sum);
	return 0;
}*/

/*#include <stdio.h> //6 zadacha

int main() {
	int a = 453, b, sum;
	scanf("%d", &b);

	for (int i = 0; sum <= a; i++)
	{
		sum = b / a;

	}
	printf("%d\n", sum);
	return 0;
}
*/
/*#include <stdio.h> //7 zadacha

int main() {
	float a = 2.5, b, sum;
	scanf("%f", &b);

	for (int i = 10; i <= b; i++)
	{
		sum = b * a;
		printf("%f\n", sum);
	}

	return 0;
}
*/
/*#include<stdio.h> //zadacha 8
int main()
{
	int curency, tenge;
	scanf("%d", &curency);
	for (int i = 0; i < curency; i++)
		tenge = curency * 370;
	printf("%d", tenge);

}*/
/*
#include<stdio.h> //zadacha 9,10
int main()
{
	int number,result;
	scanf("%d", &number);
	for (int i = 0; i<=10 ; i++)
	{
		result=number*i;
	printf("%d\n", result);
}
}*/
/*
#include <stdio.h> //zadacha 11

int main()
{
   float cost=0; //enter cost
   float result = 1;

	scanf("%f", &cost);
	result = cost/1000;

	for (int i = 0; i<=1000 ; i=i+50)
	{
	  printf("%f\n", result*i);
	}
}*/
/*
#include <stdio.h> //zadacha 12.a

int main()
{

   int sum;



	for (int i = 8; i<=15 ; i++)
	{
	  sum=sum+i;

	}
printf("%d\n", sum);

}*/
/*
#include <stdio.h>//zadacha 12.b

int main()
{

   int sum=0,a;

	scanf("%d",&a);

	for (; a<=20 ; a++)
	{
	  sum=sum+a;

	}
printf("%d\n", sum);

}*/
/*
#include <stdio.h>//zadacha 12.c

int main()
{

   int sum=0,b;

	scanf("%d",&b);

	for (int i=1; i<=b ; i++)
	{
	  sum=sum+i;

	}
printf("%d\n", sum);

}*/
/*
#include <stdio.h>//zadacha 12.d

int main()
{

   int sum=0,b,a;

	scanf("%d%d",&b,&a);

	for (; a<=b ; a++)
	{
	  sum=sum+a;

	}
printf("%d\n", sum);

}*/
/*
#include <stdio.h> //zadacha 13

int main()
{

   int sum=0,a,i=0;

	 //scanf("%d",&a);

do
	{
		scanf("%d",&a);

		 sum = sum+a;
		 i++;

	}while (a!=0);

printf("%d kolvo %d \n", sum, i);

}*/