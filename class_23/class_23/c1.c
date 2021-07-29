#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////结构体声明，以学生为例
//struct Stu//定义结构体类型(蓝图，不占空间)
//{//struct结构体关键字 Stu结构体类型 struct Stu结构体标签
//	char name[20];
//	short age;
//	char tele[12];//电话号码12位
//	char sex[5];
//}s1,s2,s3;//这里可写全局变量，注意分号结束，结构体声明不是函数
//int main()
//{
//	struct Stu s//创建结构体变量(创建，占空间)
//	return 0;
//}



////结构体声明，利用typedef简化结构体变量创建
//typedef struct Stu//typedef定义后面的类型，也即定个昵称
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//是类型。要定的昵称，只打Stu就相当于struct Stu
//int main()
//{
//	struct Stu s1;//仍然可用
//	Stu s2;//typedef后与上式等效
//		return 0;
//}



////结构体成员的初始化
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	Stu s1 = {"张三",20,"12345678901","男"};
//	struct Stu s2 = {"旺仔",30,"12345678901","保密"};
//	return 0;
//}



////结构体包含另一个结构体，声明及打印
//struct S
//{
//	int a;
//	char c;
//	char arr[20];//与外面的arr不影响，结构体范围的定义都是这样。
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;//结构T嵌套了一个结构S
//	char* pc;
//};
//int main()
//{
//	char arr[] = "world";
//	struct T t = { "hehe",{100,'w',"hello",3.14},arr};//嵌套的结构体用{}括起
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);//打印嵌套数据
//	printf("%lf\n", t.s.d);
//	return ;
//}



////结构体传参至函数，指针传参更优，因为不格外开辟空间
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//void print1(Stu n)//打印结构体内容，typedef了才简化成Stu
//{
//	printf("姓名：%s\n", n.name);
//	printf("年龄：%d\n", n.age);
//	printf("电话：%s\n", n.tele);//11位电话，第12位是\0
//	printf("性别：%s\n", n.sex);
//}
//void print2(Stu* p)//指针形式打印结构体内容
//{
//	printf("姓名：%s\n", p->name);
//	printf("年龄：%d\n", p->age);
//	printf("电话：%s\n", p->tele);
//	printf("性别：%s\n", p->sex);
//}
//int main()
//{
//	Stu s = { "李四",40,"12345678901","男" };
//	print1(s);//打印结构体内容
//	printf("\n");
//	print2(&s);//指针形式传参打印，
//	return 0;
//}