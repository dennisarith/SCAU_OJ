/*下面程序，交换两数，使两数由大到小输出，请填空

#include "stdio.h"

void swap(_______________________)          
{  
   int temp;
   temp=*p1;
   *p1=*p2;
   *p2=temp; 
} 

int main()                                                
{ int a,b; int *pa,*pb;
   scanf("%d%d", &a, &b);
   pa=&a; pb=&b;
  if(a<b) swap(_______________________);
  printf("%d %d\n",a,b);
} */

#include "stdio.h"

void swap(int *p1,int *p2)//交换其地址值
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
	int a, b; int* pa, * pb;
	scanf("%d%d", &a, &b);
	pa = &a; pb = &b;
	if (a < b) swap(pa,pb);
	printf("%d %d\n", a, b);
}
