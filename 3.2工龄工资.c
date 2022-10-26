#include<stdio.h>
int main()
{
	int x,y,z;
	printf("请输入工龄和工资:");
	scanf("%d%d",&x,&y);
	if(x>=20)
	if(y>2000)
	z=y+200;
	else
	z=y+180;
	else	
	if(y>1500)
	z=y+150;
	else
	z=y+120;
	printf("现工资=%d\n",z);
	return 0;
}
