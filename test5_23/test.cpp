 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//ָ��
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 200;
//	printf("%d\n", a);
//	return 0;
//}

//�ṹ��
struct stu 
{
	char name[10];
	int age;
	char sex[10];
	char id[15];
};
int main()
{
	struct stu s={"����",20,"��","20230523"};
	strcpy(s.name, "����");
	struct stu* p = &s;
	printf("������%s\n���䣺%d\n�Ա�%s\nѧ�ţ�%s\n", s.name, s.age, s.sex, s.id);
	printf("������%s\n���䣺%d\n�Ա�%s\nѧ�ţ�%s\n", p->name, p->age, p->sex, p->id);
	return 0;
}

