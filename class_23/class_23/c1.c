#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////�ṹ����������ѧ��Ϊ��
//struct Stu//����ṹ������(��ͼ����ռ�ռ�)
//{//struct�ṹ��ؼ��� Stu�ṹ������ struct Stu�ṹ���ǩ
//	char name[20];
//	short age;
//	char tele[12];//�绰����12λ
//	char sex[5];
//}s1,s2,s3;//�����дȫ�ֱ�����ע��ֺŽ������ṹ���������Ǻ���
//int main()
//{
//	struct Stu s//�����ṹ�����(������ռ�ռ�)
//	return 0;
//}



////�ṹ������������typedef�򻯽ṹ���������
//typedef struct Stu//typedef�����������ͣ�Ҳ�������ǳ�
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//�����͡�Ҫ�����ǳƣ�ֻ��Stu���൱��struct Stu
//int main()
//{
//	struct Stu s1;//��Ȼ����
//	Stu s2;//typedef������ʽ��Ч
//		return 0;
//}



////�ṹ���Ա�ĳ�ʼ��
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	Stu s1 = {"����",20,"12345678901","��"};
//	struct Stu s2 = {"����",30,"12345678901","����"};
//	return 0;
//}



////�ṹ�������һ���ṹ�壬��������ӡ
//struct S
//{
//	int a;
//	char c;
//	char arr[20];//�������arr��Ӱ�죬�ṹ�巶Χ�Ķ��嶼��������
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;//�ṹTǶ����һ���ṹS
//	char* pc;
//};
//int main()
//{
//	char arr[] = "world";
//	struct T t = { "hehe",{100,'w',"hello",3.14},arr};//Ƕ�׵Ľṹ����{}����
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);//��ӡǶ������
//	printf("%lf\n", t.s.d);
//	return ;
//}



////�ṹ�崫����������ָ�봫�θ��ţ���Ϊ�����⿪�ٿռ�
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//void print1(Stu n)//��ӡ�ṹ�����ݣ�typedef�˲ż򻯳�Stu
//{
//	printf("������%s\n", n.name);
//	printf("���䣺%d\n", n.age);
//	printf("�绰��%s\n", n.tele);//11λ�绰����12λ��\0
//	printf("�Ա�%s\n", n.sex);
//}
//void print2(Stu* p)//ָ����ʽ��ӡ�ṹ������
//{
//	printf("������%s\n", p->name);
//	printf("���䣺%d\n", p->age);
//	printf("�绰��%s\n", p->tele);
//	printf("�Ա�%s\n", p->sex);
//}
//int main()
//{
//	Stu s = { "����",40,"12345678901","��" };
//	print1(s);//��ӡ�ṹ������
//	printf("\n");
//	print2(&s);//ָ����ʽ���δ�ӡ��
//	return 0;
//}