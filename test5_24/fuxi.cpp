 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//��֧��䣨if��
//�������� С��18��δ���� 18-28���� 28-45���� ����45����
int main()
{
	int num = 0;
	printf("�������䣺");
	scanf("%d", &num);
	if (num<18)
	{
		printf("δ����\n");
	}
	else if (num<28)
	{
		printf("����\n");
	}
	else if(num<45)
	{
		printf("����");
	}
	else
	{
		printf("����");
	}
	return 0;
}

//�ж�һ�����Ƿ�Ϊ����
int main()
{
	int num = 0;
	scanf("%d", &num);
	if (0!=num%2)
	{
		printf("%d������", num);
	}
	else
	{
		printf("%d��������", num);
	}
	return 0;
}

//���1-100������

int main()
{
	int i = 0;
	printf("0-100֮���������");
	while (i<100)
	{
		i++;
		if (0!=i%2)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

//��֧��䣨switch��
//����1-7 ��ʾ����
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����һ");
		break;
	case 2:
		printf("���ڶ�");
		break;
	case 3:
		printf("������");
		break;
	case 4:
		printf("������");
		break;
	case 5:
		printf("������");
		break;
	case 6:
		printf("������");
	case 7:
		printf("������");
		break;
		break;
	default:
		printf("�������");
		break;
	}
	return 0;
}

//����1-5Ϊ�����գ�6 7Ϊ��Ϣ��
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������");
		break;
	case 6:
	case 7:
		printf("��Ϣ��");
		break;
	default:
		printf("�������");
		break;
	}
	return 0;
}