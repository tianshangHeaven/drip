#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>


int FSwitch(int x)
{
	switch (x)
	{
	case 1:
		printf("case 1:\n");
		break;
	case 2:
		printf("case 2:\n");
		break;	
	case 3:
printf("case 3:\n");
		break;
	default:
		printf("%d,Ö»ÄÜÊäÈë1~3\n",x);
		break;
	};
		return x;
};
