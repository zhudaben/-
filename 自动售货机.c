#include<stdio.h>
#include<stdlib.h>
int main(){
	int num;
	printf("**************************\n");
	printf("******�Զ��ۻ���**********\n");
	printf("*******1.��ķ*************\n");
	printf("*******2.��������*********\n");
	printf("*******3.��ķ*************\n");
	printf("*******4.����*************\n");
	printf("*******5.����*************\n");
	printf("*******6.ɯ����*************\n");
	printf("*******7.��������*************\n");
	printf("*******8.����*************\n");
	system("cls");
	printf("\t\t\t\t\t���㿪ʼ����������������ѡ��\n\t		\t\t\t������1~8: "); 
	scanf("%d",&num);
	switch(num)
	{
		case 1:
		printf("\t\t\t\t\t\t��ѡ�����������ķ");
		break;
		case 2:
		printf("\t\t\t\t\t\t��ѡ��������ǰ�������");
		break;
		case 3:
		printf("\t\t\t\t\t\t��ѡ�����������ķ");
		break;
		case 4:
		printf("\t\t\t\t\t\t��ѡ��������ǳ���");
		break;
		case 5:
		printf("\t\t\t\t\t\t��ѡ��������Ǳ���");
		break;
		case 6:
		printf("\t\t\t\t\t\t��ѡ���������ɯ����");
		break;
		case 7:
		printf("\t\t\t\t\t\t��ѡ��������ǰ�������");
		break;
		case 8:
		printf("\t\t\t\t\t\t��ѡ��������ǵ���");
		break;
		
	}
}
