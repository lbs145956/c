 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//ָ��
int main()
{
	int a = 10;
	int* p = &a;
	printf("%d\n", a);
	printf("%d\n", *p);
	*p = 20;
	printf("%d\n", *p);
	return 0;
}

//�ṹ��
struct stu
{
	char name[20];
	int age;
	char sex[10];
	char id[15];
};
int main()
{
	struct stu s={"����",20,"��","20230523"};
	struct stu *ps=&s;
	printf("������%s\n���䣺%d\n�Ա�%s\nѧ�ţ�%s\n", s.name, s.age, s.sex, s.id);
	strcpy(s.name, "����");
	strcpy(s.id, "20230524");
	printf("������%s\n���䣺%d\n�Ա�%s\nѧ�ţ�%s\n", ps->name, ps->age, ps->sex, ps->id);
	return 0;
}

