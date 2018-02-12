#include <stdio.h>
#include<conio.h>
void main()
{
int N,i;
scanf("%d",&N);
char a[10];
for(i=0;i<N;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<N;i++)
{
	printf("%d %d\n",a[i],i);
}
	getch();
}
