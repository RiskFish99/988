#include<stdio.h>
#include<iostream>
int main()
{
	printf("����ѡ����ܻ������룡\n1-���ܣ�2-����\n");
	int a;
	scanf("%d",&a);
switch(a)
	{
case 1:{
		printf("������Ҫ���ܵ��ַ���\n");
		char c;
		c=getchar();
		while(c!=('\n'))
		{
			if((c>='a'&&c<='z')||(c<='Z'&&c>='A'))
				{
				if((c>='w'&&c<='z')||(c>='W'&&c<='Z'))
					c=c-22;
				else
					c+=4;
				}
				c=getchar();
				printf("%s",c);
		}
		break;
	   } 
case 2:	
		{
			printf("������Ҫ������ַ���\n");
			char c;
			c=getchar();
			while(c!=('\n'))
			{
			if((c>='a'&&c<='z')||(c<='Z'&&c>='A'))
				{
				if((c>='a'&&c<='d')||(c>='A'&&c<='D'))
					c=c+22;
				else
					c-=4;
				}
				c=getchar();
				printf("%c",c);
			}
			break;
	}
	system("pause");
}}