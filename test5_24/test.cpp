 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//��֧���(if)
//�������� С��18��δ���� 18-28���� 28-45���� ����45����
//int main()
//{
//	int age;
//	printf("�������䣺");
//	scanf("%d", &age);
//	if (age<18)
//	{
//		printf("δ����");
//	}
//	else if (age < 28) 
//	{
//		printf("����");
//	}
//	else if(age<45)
//	{
//		printf("����");
//	}
//	else
//	{
//		printf("����");
//	}
//	return 0;
//}

//����else:else�������δƥ���ifƥ��

//int main()
//{
//	int a = 1;
//	int b = 1;
//	if (a == 0)
//		if (b == 1)
//			printf("�Ǻ�");
//		else
//			printf("����");
//	return 0;
//}


//�ж�һ�����Ƿ�Ϊ����

//int main()
//{
//	int num;
//	int i;
//	printf("�������֣�");
//	scanf("%d", &num);
//	i = num % 2;
//	if (0==i)
//	{
//		printf("ż��");
//	}
//	else
//	{
//		printf("����");
//	}
//	return 0;
//}


//���1-100������
//int main()
//{
//	int i = 0;
//	printf("0-100�е�����Ϊ��");
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

//��֧��䣨switch��
//����1-7 ��ʾ����
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//����
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������");
//		break;
//	}
//	return 0;
//}

//����1-5Ϊ�����գ�6 7Ϊ��Ϣ��

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
//		printf("������");
//		break;		
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//	default:
//		printf("�������");
//		break;
//	}
//	return 0;
//}