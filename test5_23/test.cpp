 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//指针
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

//结构体
struct stu 
{
	char name[10];
	int age;
	char sex[10];
	char id[15];
};
int main()
{
	struct stu s={"张三",20,"男","20230523"};
	strcpy(s.name, "李四");
	struct stu* p = &s;
	printf("姓名：%s\n年龄：%d\n性别：%s\n学号：%s\n", s.name, s.age, s.sex, s.id);
	printf("姓名：%s\n年龄：%d\n性别：%s\n学号：%s\n", p->name, p->age, p->sex, p->id);
	return 0;
}

