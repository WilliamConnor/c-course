#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>


////����
////strcpy�ַ������ƿ�������β\0Ҳ������
//int main()
//{
//	char arr1[] = "�ַ�����������";
//	char arr2[20] = "0";//[]Ҫ������,��Ȼ,�����С�����
//	char arr3[40];//����ֻ��[]���ֲ�������
//	strcpy(arr2, arr1);
//	strcpy(arr3,"�ַ��������������");//����ֱ�Ӹ���copy����
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}



////memset�ڴ�����,���磬�ı��ַ���ǰһ���ֵ�����
////memset����ֵ�ɷŵ����ַ�����Ϊ����ASCII��ֵ���棬���������ַ�����
//int main()
//{
//	char arr[] = "hello world";//�ַ���"",�����ַ�''����ʱ�ַ�����Ҫ{}
//	memset(arr, '*', 5);//memset(����,����ֵ���ӿ�ͷ��ʼ�ĸ��ĸ���)
//	printf("%s\n", arr);
//	return 0;
//} 



////�Զ��庯��get_max�Ƚ����������ֵ
//int get_max(int x, int y)
//{
//	if (x > y)//��ֱ�ӷ��ؾͲ��õ�������z
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d", max);
//	return 0;
//}



////�Զ��庯��Swap����������������(����ʾ��)(xy��ab��ַ��ͬ�����޹�)
//void Swap(int x, int y)//void��ʾ�޷���ֵ
//{
//	int z;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}



//////�Զ��庯��Swap����������������(��ȷʾ��)
//void Swap(int* pa, int* pb)//void��ʾ�޷���ֵ
//{//��ָ��int* pa���ܵ�ַ,int* pa�ɻ���int* x��
//	int z;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap(&a, &b);//����ab��ַȥ����
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}



////��ӡ100~200�����������Զ��庯��(���׼��ͬ)
//int is_prime(int x)
//{
//	int tmp = 2;//�Գ���
//	for (tmp = 2; tmp < x; tmp++)
//	{
//		if (x % tmp == 0)
//		{
//			return 0;//returnֱ�ӽ�����������breakǿ
//		}
//	}
//	return 1;//��û�����������򷵻�1
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



////��ӡ100~200������(�Գ�����ƽ�����Ż�)
//int is_prime(int x)
//{
//	int tmp = 2;//����ƽ����sqrt��Ҫ#include<math.h>
//	for (tmp = 2; tmp <= sqrt(x); tmp++)
//	{
//		if (x % tmp == 0)
//		{
//			return 0;//returnֱ�ӽ�����������breakǿ
//		}
//	}
//	return 1;//��û�����������򷵻�1
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



////�ж����꣬�Զ��庯��
////���귵��1�����򷵻�0
//int is_leap_year(int y)
//{//������������4�Ҳ�������100��������400ֱ��������
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else 
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}



////���ֲ��ң��������飬�Զ��庯��
//int binary_search(int arr[], int k, int sz)//�βε�������Բ�ָ��[]��С
//{//int arr[]��ʵ�����飬�������Ǹ�ָ�롣k��Ҫ������sz������Ԫ��������
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//�ں�����sizeof(arr)ֻ��������ָ��Ĵ�С�������õ���������
//	int ret = binary_search(arr, k, sz);//ָ���ֲ���
//	if (-ret == 1)//ԭ���ִ���һ��==��=
//	{
//		printf("�������Ҳ���ָ������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±꣺%d\n", ret);
//	}
//	return 0;
//}



////num++���Զ��庯��
//void Plus(int* p)
//{
//	(*p)++;//�����ŵĻ�����p++����*p
//}
//int main()
//{
//	int num = 0;
//	Plus(&num);//Ҫע�⴫�ݵ���&��ַ
//	printf("num++ һ�Σ�%d\n", num);
//	Plus(&num);
//	Plus(&num);
//	printf("num++ �����Σ�%d\n", num);
//	return 0;
//}



////����Ƕ�׵���
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_new_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("hehe\n");//Ƕ��3�δ�ӡһ��
//	}
//}
//int main()
//{
//	three_new_line();//��ӡ����
//	return 0;
//}



////������ʽ����
//int main()
//{//strlen�ķ���ֵ����printf��Ϊ����
//	printf("%d\n", strlen("abc"));
//	return 0;
//}



////printf����ʽ���ʡ�printf����ֵ�Ǵ�ӡ�ַ����ĳ���
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}



////���������������Լ��ĺ�����""����<>
////add.h���Խ���ͷ�ļ���add.c���ú�������
////���������������ڣ�����ʵ�ַֹ���������������ģ��
//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}