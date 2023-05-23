 #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>


//创建一个函数求两个数较大值
//int MAX(int x, int y)
//{
//	if (x>y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = MAX(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}

//单目操作符： sizeof（），~(取反)，前置++/--，后置++/--

//1.sizeof（）
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//
//
//	return 0;
//}


//2.~(对一个二进制按位取反)
//int main()
//{
//	int a = 5;
//	//00000000000000000000000000000101
//	int b = ~a;
//	//11111111111111111111111111111010（补码）（第一位为1表示负数，负数存储的是补码）
//	//11111111111111111111111111111001（反码）
//	//00000000000000000000000000000110（原码）（-6）
//	//原码，反码，补码（原码》按位取反得反码》加1得补码）（补码减1》反码》原码）
//	printf("%d\n", b);//打印的是原码
//	return 0;
//}

//3.++/--
//int main()
//{
//	int a = 10;
//	int b = a++;//后置，先使用，后++（a=11,b=10）
//	int b = ++a;//前置，先++，后使用(a=11,b=11)
//	printf("a=%d  b=%d", a, b);
//	return 0;
//}




//逻辑操作符：  &&（逻辑与） ||（逻辑或）
//int main()
//{
//	//0--为假
//	//非0--为真
//	int a = 0;
//	int b = 3;
//	int c = a && b;//两为真，才是真
//	int c = a || b;//一为真，就是真
//	printf("c=%d", c);
//	return 0;
//}


//条件操作符：（exp1?exp2:exp3）1成立 2 ，1不成立 3
//int main()
//{
//	int a = 30;
//	int b = 20;
//	int min = 0;
//	min = (a < b ? a : b);
//	printf("min=%d", min);
//	return 0;
//}


//static #define