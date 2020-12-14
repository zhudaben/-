#include<stdio.h>
#include<stdlib.h>
int main(){
	int num;
	printf("**************************\n");
	printf("******自动售货机**********\n");
	printf("*******1.雷姆*************\n");
	printf("*******2.艾米莉亚*********\n");
	printf("*******3.拉姆*************\n");
	printf("*******4.肠姐*************\n");
	printf("*******5.贝蒂*************\n");
	printf("*******6.莎提拉*************\n");
	printf("*******7.爱姬多娜*************\n");
	printf("*******8.地龙*************\n");
	system("cls");
	printf("\t\t\t\t\t从零开始的异世界生活老婆选择\n\t		\t\t\t请输入1~8: "); 
	scanf("%d",&num);
	switch(num)
	{
		case 1:
		printf("\t\t\t\t\t\t你选择的老婆是雷姆");
		break;
		case 2:
		printf("\t\t\t\t\t\t你选择的老婆是艾米莉亚");
		break;
		case 3:
		printf("\t\t\t\t\t\t你选择的老婆是拉姆");
		break;
		case 4:
		printf("\t\t\t\t\t\t你选择的老婆是肠姐");
		break;
		case 5:
		printf("\t\t\t\t\t\t你选择的老婆是贝蒂");
		break;
		case 6:
		printf("\t\t\t\t\t\t你选择的老婆是莎提拉");
		break;
		case 7:
		printf("\t\t\t\t\t\t你选择的老婆是爱姬多娜");
		break;
		case 8:
		printf("\t\t\t\t\t\t你选择的老婆是地龙");
		break;
		
	}
}
