 #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>


//����һ���������������ϴ�ֵ
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

//��Ŀ�������� sizeof������~(ȡ��)��ǰ��++/--������++/--

//1.sizeof����
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


//2.~(��һ�������ư�λȡ��)
//int main()
//{
//	int a = 5;
//	//00000000000000000000000000000101
//	int b = ~a;
//	//11111111111111111111111111111010�����룩����һλΪ1��ʾ�����������洢���ǲ��룩
//	//11111111111111111111111111111001�����룩
//	//00000000000000000000000000000110��ԭ�룩��-6��
//	//ԭ�룬���룬���루ԭ�롷��λȡ���÷��롷��1�ò��룩�������1�����롷ԭ�룩
//	printf("%d\n", b);//��ӡ����ԭ��
//	return 0;
//}

//3.++/--
//int main()
//{
//	int a = 10;
//	int b = a++;//���ã���ʹ�ã���++��a=11,b=10��
//	int b = ++a;//ǰ�ã���++����ʹ��(a=11,b=11)
//	printf("a=%d  b=%d", a, b);
//	return 0;
//}




//�߼���������  &&���߼��룩 ||���߼���
//int main()
//{
//	//0--Ϊ��
//	//��0--Ϊ��
//	int a = 0;
//	int b = 3;
//	int c = a && b;//��Ϊ�棬������
//	int c = a || b;//һΪ�棬������
//	printf("c=%d", c);
//	return 0;
//}


//��������������exp1?exp2:exp3��1���� 2 ��1������ 3
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