#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//�ṹ��struct
struct Book
{
	char name[20];//C���Գ������
	int price;//55
};//ע�⣡�˴�����Ҫ�ֺŽ���struct
int main()
{
	struct Book b1 = { "C���Գ������", 55 };//�����鱾b1�����丳ֵ
	printf("������%s\n", b1.name);//����b1.������ȡ��Ӧ���ݣ�b1���Զ��������
	printf("�۸�%dԪ\n", b1.price);
	b1.price = 15;
	printf("�޸ĺ�۸�%dԪ\n\n", b1.price);
	struct Book* p = &b1;//�ṹ��ָ���������struct+�ṹ������*
	//����ָ��ķ���ȡ��ֵ��
	printf("�ṹ���ַ��%p\n", p);
	printf("������%s\n", (*p).name);
	printf("�۸�%d\n\n", (*p).price);
	//�����м򻯵ķ�����->
	printf("������%s\n", p->name);
	printf("�۸�%d\n\n", p->price);
	//�ı������ͼ۸�strcpy-string copy
	b1.price = 20;//�ṹ�����ֱ�����ֱ�Ӹı䣬�ַ�������
	strcpy(b1.name, "C++");//��Ҫ����string.h
	printf("�ı��������%s\n", b1.name);
	printf("�ı�ļ۸�%dԪ\n\n", b1.price);
	return 0;
} 




