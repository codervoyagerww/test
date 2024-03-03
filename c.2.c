#include <stdio.h>
int main ()
{
	int a,b,c,max;
	scanf("%d,%d,%d",&a,&b,&c);
	printf("请输入a,b,c的值\n");
	max = a;
	if(max<b)
	max = b;
	if(max<c)
	max = c;
	printf("最大的数是%d\n",max);
	return 0;
}