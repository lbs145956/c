 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//分支语句(if)
//输入年龄 小于18是未成年 18-28青年 28-45中年 大于45老年
//int main()
//{
//	int age;
//	printf("输入年龄：");
//	scanf("%d", &age);
//	if (age<18)
//	{
//		printf("未成年");
//	}
//	else if (age < 28) 
//	{
//		printf("青年");
//	}
//	else if(age<45)
//	{
//		printf("中年");
//	}
//	else
//	{
//		printf("老年");
//	}
//	return 0;
//}

//悬空else:else与最近的未匹配的if匹配

//int main()
//{
//	int a = 1;
//	int b = 1;
//	if (a == 0)
//		if (b == 1)
//			printf("呵呵");
//		else
//			printf("哈哈");
//	return 0;
//}


//判断一个数是否为奇数

//int main()
//{
//	int num;
//	int i;
//	printf("输入数字：");
//	scanf("%d", &num);
//	i = num % 2;
//	if (0==i)
//	{
//		printf("偶数");
//	}
//	else
//	{
//		printf("奇数");
//	}
//	return 0;
//}


//输出1-100的奇数
//int main()
//{
//	int i = 0;
//	printf("0-100中的奇数为：");
//	while (i<100)
//	{
//		i++;
//		if (0!=i%2)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//分支语句（switch）
//输入1-7 显示星期
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//整形
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("输入错误");
//		break;
//	}
//	return 0;
//}

//输入1-5为工作日，6 7为休息日

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;		
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default:
//		printf("输入错误");
//		break;
//	}
//	return 0;
//}