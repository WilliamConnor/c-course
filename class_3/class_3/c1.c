#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////��(������)λȡ��~
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", a);//ԭ��
//	printf("%d\n", b);//�ǲ��룬Ҫ��1���ٰѵ�һλ�����ⲿ��ȡ����ԭ��
//	//      a  00000000000000000000000000000000 ȡ��ǰԭ��
//	//     ~a  11111111111111111111111111111111 ȡ�������ʽ
//	//print(a) 10000000000000000000000000000001 ����ת����ԭ��
//	return 0;
//}


////ǰ�úͺ���++���÷�,--ͬ��
//int main()
//{
//	int a = 10;
//	int b = a++;//�Ǻ���++���ȸ�ֵ��b�����Լ�1
//	printf("a=%d,b=%d\n", a, b);//��a=11,b=10
//	int c = 10;
//	int d = ++c;//����+1���ٸ�ֵ��d
//	printf("c=%d,d=%d", c, d);
//	return 0;
//}



////(����)ǿ������ת��,һ�㲻ת��
//int main()
//{
//	int a = (int)3.14;//ǿ�н�ȡ3.14��3
//	printf("%d\n", a);
//	return 0;
//}


////�߼������� &&�߼��� ||�߼���
////��ָ���Ƿ�0������0Ϊ��
//int main()
//{
//	int a = 0;
//	int b = 5;
//	int x = a && b;//&&�������
//	printf("a && b = %d\n", x);
//	int c = 0;
//	int d = 5;
//	int y = c || d;//||һ������
//	printf("c || d = %d\n", y);
//	return 0;
//}


////����������Ҳ����Ŀ������.
////���exp1�棬����Ϊexp2,����Ϊexp3
//int main()
//{
//	int a = 17;//a��b�ɸ�
//	int b = 6;
//	int max = 0;
//	max = (a > b ? a : b);//(exp1?exp2:exp3;)
//	printf("�ϴ�ֵΪ��%d\n", max);
//	return 0;
//}


////(�����ǽ������)�Ĵ�������
//int main()
//{
//	register int a = 10;
//	return 0;
//}


////�����ض���typedef
//typedef unsigned int u_int;
//int main()
//{
//	u_int a = 10;
//	unsigned int b = 10;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


////static��̬,���ξֲ�����,������������
//void test()
//{
//	static int a = 0;//ʹ��a���ڳ��ֲ�������
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


////static������ȫ�ֱ�������С������
////��ȫ�ֱ����޷�extern,ֻ����ԭ�ļ�ʹ��
//static int g = 10;//�޷���Դ�ļ���extern
//int Add(int x, int y)//�˺���Ҳ�޷�����extern
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = Add(a, b);
//	printf("%d\n",c);
//	return 0;
//}


////�����ķ�ʽ
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////��ķ�ʽ
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = MAX(a, b);//��ķ�ʽ
//	int d = Max(a, b);//�����ķ�ʽ
//	printf("�ϴ�ֵΪ%d\n", c);
//	printf("�ϴ�ֵΪ%d\n", d);
//	return 0;
//}



////ָ���Ǹ�������������ŵ�ַ��δ����*������
//int main()
//{
//	int a = 10;
//	printf("&a = %p\n", &a); //��ӡ��ַ
//	int* p = &a;//p��ָ�������ר�ż�¼��ַ,��int*
//	printf(" p = %p\n", p); //��ӡ����ĵ�ַ
//	*p = 20;//*�ǽ����ò�����,�����ǰ�p��ַ��Ҳ����a��Ϊ20
//	printf(" a = %d(�ı���)\n", a);
//	return 0;
//}



////ָ��(���ַ�Ϊ��),ָ����p������Ϊint* char*��
//int main()
//{
//	char ch = 'w';
//	printf("&ch = %p\n", &ch); 
//	char* p = &ch;
//	printf("  p = %p\n", p); 
//	*p = 'a';
//	printf(" ch = %c(�ı���)\n", ch);
//	printf("sizeof (p)=%d\n", sizeof(p));
//	//32λ��64λ������ַ�ֽ�Ϊ4��8����IDE���ã�����debug�����
//	return 0;
//}



//
int main()
{

	return 0;
}