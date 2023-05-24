 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//指针
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

//结构体
struct stu
{
	char name[20];
	int age;
	char sex[10];
	char id[15];
};
int main()
{
	struct stu s={"张三",20,"男","20230523"};
	struct stu *ps=&s;
	printf("姓名：%s\n年龄：%d\n性别：%s\n学号：%s\n", s.name, s.age, s.sex, s.id);
	strcpy(s.name, "李四");
	strcpy(s.id, "20230524");
	printf("姓名：%s\n年龄：%d\n性别：%s\n学号：%s\n", ps->name, ps->age, ps->sex, ps->id);
	return 0;
}

