#define _crt_secure_no_warnings 1
#include<stdio.h>

////ģ��strlen���������ټ������ڵݹ��ָ��
////ָ�뷨 ģ��strlen����
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;//end�Լ�ֱ��\0��֮ǰ��Ԫ�ظ������ǳ���
//	}
//	return end - start;//��������ָ���м�Ԫ�أ�Ҳ���ַ�������
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



////���� ���� ָ�� �޸�ֵ
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i+1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}



////ָ�����顪�����ָ�������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };//ָ�������ʼ��
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}