#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//结构体struct
struct Book
{
	char name[20];//C语言程序设计
	int price;//55
};//注意！此处必须要分号结束struct
int main()
{
	struct Book b1 = { "C语言程序设计", 55 };//定义书本b1，及其赋值
	printf("书名：%s\n", b1.name);//利用b1.可以提取相应内容，b1是自定义的名称
	printf("价格：%d元\n", b1.price);
	b1.price = 15;
	printf("修改后价格：%d元\n\n", b1.price);
	struct Book* p = &b1;//结构体指针的类型是struct+结构体名字*
	//利用指针的方法取得值：
	printf("结构体地址：%p\n", p);
	printf("书名：%s\n", (*p).name);
	printf("价格：%d\n\n", (*p).price);
	//上述有简化的方法：->
	printf("书名：%s\n", p->name);
	printf("价格：%d\n\n", p->price);
	//改变书名和价格strcpy-string copy
	b1.price = 20;//结构体数字变量可直接改变，字符串不行
	strcpy(b1.name, "C++");//需要引用string.h
	printf("改变的书名：%s\n", b1.name);
	printf("改变的价格：%d元\n\n", b1.price);
	return 0;
} 




