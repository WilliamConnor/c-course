#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"add.h"
#include<string.h>



////�����ڶ���add.c������add.h��Add����
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}



////�����ݹ飬��ʾ����ջ���
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}



////�ݹ���ϰ��һ������ֵ(�޷���)����˳���ӡÿһλ
//void print(int n)//�Զ��庯��
//{//�ݹ�˼���������Ƕ�׵�������ǶΪֹ�����𲽷���
//	if (n > 9)//����������2λ����Ҫ���
//	{
//		print(n / 10);
//	}//ָ1234/10�õ�123�ʹ�ӡ4,123�ٴ���print��12�ʹ�ӡ3��12����print�ٵ�1�ʹ�ӡ2����ʱn<9��ֱ��1%10�õ�1
//	printf("%d ", n);//��ʮλ����λ������ӡ�������ӡ��λ��
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//��1234
//	print(num);//���Զ��庯����ָ��ӡÿһλ��
//	return 0;
//}



////�ݹ���ϰ�����ַ������ȣ��Զ��庯����������
//int my_strlen(char* str)//�������������Ԫ�ص�ַ��������*����
//{
//	int count = 0;
//	while (*str != '\0')//��Ϊ�������ǵ�һ����������ֱ�ӱȽϵ��ַ�������Ҫstrcmp�ַ����Ƚ�
//	{
//		count++;//ֻҪû��'\0'�ĵ�ַ���ͼ���һ��
//		str++;//��ַ+1��ָ��ָ��ڶ�����
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//���鴫�β����������飬������Ԫ�ص�ַ
//	printf("len = %d\n", len);
//	return 0;
//}



////�ݹ���ϰ�����ַ������ȣ�����������ʱ����(��������strlen)
//int my_strlen(char* str)//�������������Ԫ�ص�ַ��������*����
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);//str + 1���ǵ�ַ+1����ȡ��һ������ַ
//	}//��������!='\0'��returnֵ+1
//	else
//		return 0;//���һ��������\0�������鳤��Ϊ0
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//���鴫�β����������飬������Ԫ�ص�ַ
//	printf("len = %d\n", len);
//	return 0;
//}


////�ݹ���ϰ����n!(ѭ���棬�ǵݹ�)
//int Fac_1(int n)
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac_1(n);//�Զ��庯����ײ�
//	printf("%d\n", ret);
//	return 0;
//}



////�ݹ���ϰ����n!�ݹ��(���������)
//int Fac_2(int n)//
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac_2(n - 1);//��n����n-1�Ľײ�
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac_2(n);//�Զ��庯����ײ�
//	printf("%d\n", ret);
//	return 0;
//}



////�ݹ���ϰ�����n��쳲���������(����Ч�ݹ��)(�����)
//int Fib(int n)
//{
//	if (n <= 2)//��ʼ����������1
//		return 1;
//	else
//		return Fib(n - 2) + Fib(n - 1);//Ч�ʺܵͣ������ظ�����
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}



////�ݹ���ϰ�����n��쳲���������(����Ч������)(�����)
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;//��n<2ֱ��return��1
//	while (n > 2)//��2�༸����c=a+b���Ρ�
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;//ÿ�θ��ӽ�n>2������
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}



////ջ���ʾ������סF10���Կ��Կ���Stack overflow
//void Test(int n)
//{
//	if (n < 10000)
//	{
//		Test(n + 1);
//	}
//}
//int main()
//{
//	Test(1);
//	return 0;
//}



//��ŵ��hanoi����(����)



//������̨������(��������쳲���������)
//һֻ����һ�ο�������1��̨�ף�Ҳ��������2���������������һ��n����̨���ܹ��ж������������Ⱥ����ͬ�㲻ͬ�Ľ������
//���n=1��ֻ��һ���������Ǿ���1
//���n=2����ô������������2��[1,1]
//���n=3����ô������������[1,1,1],[1,2],[2,1]
//���n=4����ô������������[1,1,1,1],[1,1,2],[1,2,1],[2,1,1],[2,2]
//���n=5����ô�а���������[1,1,1,1,1],[1,1,1,2],[1,1,2,1],[1,2,1,1],[2,1,1,1],[2,2,1],[2,1,2],[1,2,2]
//���Ϊ1��2��3��5��8  ��쳲���������
 
 
//https://blog.csdn.net/zhangshk_/article/details/81148340
////������̨�׵ݹ�������
// int jump(int n) 
// {
//    if (n == 0)
//        return 0;
//    if (n == 1)
//        return 1;
//    if (n == 2)
//        return 2;
//    return jump(n - 1) + jump(n - 2);
//}
// int main()
// {
//     int n, ret;
//     printf("����������Ҫ������̨��\n");
//     scanf("%d", &n);
//     ret = jump(n);
//     printf("�ܹ�%d�����\n",ret);
//     return 0;
// }



////������̨��ѭ��������
//int jump2(int n) 
//{
//    if (n == 0)
//        return 0;
//    if (n == 1)
//        return 1;
//    if (n == 2)
//        return 2;
//    int b = 1;
//    int c = 2;
//    int count = 2;
//    while (count++ < n) //�ȱȽϣ���++����2�༸��ִ�м���
//    {
//        int a = b;//a=1      �ڶ���a=2      �ڶ���a=3 
//        b = c;//    b=2      �ڶ���b=3      �ڶ���b=5
//        c = a + c;//c=1+2=3  �ڶ���c=2+3=5  ������c=3+5=8  �Դ�����
//    }
//    return c;
//}
//int main()
//{
//    int n, ret;
//    printf("����������Ҫ������̨��\n");
//    scanf("%d", &n);
//    ret = jump2(n);
//    printf("�ܹ�%d�����\n", ret);
//    return 0;
//}