#include<stdio.h>
#include<iostream>
#include<math.h>
int main()
{
	printf("�������ѡ��ͼ�Σ�1-�����Σ�2-���Σ�3-Բ��\n");
	int n;
	scanf("%d",&n);
	switch(n)
		{
		case 1:printf("�������������߳�:\n");
					float a1,b1,c1,s1,p;
					scanf("%f%f%f",&a1,&b1,&c1);
					if(a1+b1>c1&&a1+c1>b1&&b1+c1>a1)
					{
						p=(a1+b1+c1)/2;
						s1=sqrt(p*(p-c1)*(p-a1)*(p-b1));
						printf("����������ǣ�%f\n",s1);
					}
					else
						printf("�޷����������Σ�\n");
					break;
		case 2:printf("��������γ��Ϳ�\n");
				   float a2,b2,s2;
				   scanf("%f%f",&a2,&b2);
				   s2=a2*b2;
				   printf("��������ǣ�%f\n",s2);
				   break;
		case 3:printf("������Բ�ΰ뾶��\n");
				   float r,s3;
				   scanf("%f",&r);
				   s3=3.14*r*r;
				   printf("Բ������ǣ�%f\n",s3);
				   break;
		}
system("pause");
}