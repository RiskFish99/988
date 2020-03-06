#include<stdio.h>
#include<iostream>
#include<math.h>
int main()
{
	printf("输入序号选择图形：1-三角形，2-矩形，3-圆形\n");
	int n;
	scanf("%d",&n);
	switch(n)
		{
		case 1:printf("输入三角形三边长:\n");
					float a1,b1,c1,s1,p;
					scanf("%f%f%f",&a1,&b1,&c1);
					if(a1+b1>c1&&a1+c1>b1&&b1+c1>a1)
					{
						p=(a1+b1+c1)/2;
						s1=sqrt(p*(p-c1)*(p-a1)*(p-b1));
						printf("三角形面积是：%f\n",s1);
					}
					else
						printf("无法构成三角形！\n");
					break;
		case 2:printf("请输入矩形长和宽：\n");
				   float a2,b2,s2;
				   scanf("%f%f",&a2,&b2);
				   s2=a2*b2;
				   printf("矩形面积是：%f\n",s2);
				   break;
		case 3:printf("请输入圆形半径：\n");
				   float r,s3;
				   scanf("%f",&r);
				   s3=3.14*r*r;
				   printf("圆形面积是：%f\n",s3);
				   break;
		}
system("pause");
}