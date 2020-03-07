#include<stdio.h>
#include<iostream>
int main()
{
	printf("ÇëÄúÑ¡Ôñ¼ÓÃÜ»òÕßÆÆÒë£¡\n1-¼ÓÃÜ£¬2-ÆÆÒë\n");
	int a;
	scanf("%d",&a);
switch(a)
	{
case 1:{
		printf("ÇëÊäÈëÒª¼ÓÃÜµÄ×Ö·û£º\n");
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
			printf("ÇëÊäÈëÒªÆÆÒëµÄ×Ö·û£º\n");
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