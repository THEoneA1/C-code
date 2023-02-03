#include<stdio.h>
#include<string.h>
int main(void)
{
	int a,b,c,d,e,x;
	scanf("%d",&x);
	
	a=x/10000;
	b=x%10000/1000;
	c=x%1000/100;
	d=x%100/10;
	e=x%10;
	if(a>0&&a<=9)
	{
		printf("num=5,natural order:%d %d %d %d %d,reverse order:%d %d %d %d %d",a,b,c,d,e,e,d,c,b,a);
	}else if(b>0&&b<=9)
	{
		printf("num=4,natural order:%d %d %d %d,reverse order:%d %d %d %d",b,c,d,e,e,d,c,b);
	}else if(c>0&&c<=9)
	{
		printf("num=3,natural order:%d %d %d,reverse order:%d %d %d ",c,d,e,e,d,c);
	}else if(d>0&&d<=9)
	{
		printf("num=2,natural order:%d %d,reverse order:%d %d ",d,e,e,d);
	}else if(e>0&&e<=9)
	{
		printf("num=1,natural order:%d,reverse order:%d ",e,e);
	}else
	{
		printf("input error\n");
	}
	return 0;
}
