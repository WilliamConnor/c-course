#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

////���鴴���ͳ�ʼ��
//int main()
//{
//	int arr[] = { 1,2,3 };//û�������ǲ���ȫ��ʼ��������Ĭ�Ϸ�0
//	char arr2[5] = { 'a',98 };//98ʶ��ΪASCII��ֵ�൱��'b'
//	char arr3[5] = "ab";//��������һ�������������ֵʵ������\0����һ����ֱ�Ӹ�0
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//��7��������\0����ʵ���ַ�������1��
//	printf("%d\n", strlen(arr4));//��6������ʵ���ַ�����
//	return 0;//����ʾ��charռһ���ֽڣ�intռ4���ֽڡ�
//}


//
////���鴴�����ַ��������ַ���ʽ����������
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//���ֵ����Ϊ��\0��ֹ
//	printf("\n");
//	int arr3[] = { 123 };
//	int arr4[] = { 1,2,3 };//��������û����������ַ�����123�Ǿ���1��100�����
//	printf("%d\n", sizeof(arr3));//4
//	printf("%d\n", sizeof(arr4));//12
//	printf("%d\n", strlen(arr3));//���ַ�������
//	printf("%d\n", strlen(arr4));//���ַ�������
//	printf("\n");
//	int arr5[5] = { 123 };
//	int arr6[5] = { 1,2,3 };//����[]ֵ�������Ӧ����
//	printf("%d\n", sizeof(arr5));//20
//	printf("%d\n", sizeof(arr6));//20
//}



////�����β'\0'����Ҫ��
//int main()
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//	printf("%d\n", sz);
//
//	
//	int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);//10
//	printf("%d\n\n", sz2);
//
//	char arr3[] = {'1','2','3','4','5','6','7','8','9','10'};
//	int sz3 = sizeof(arr3) / sizeof(arr3[0]);//10
//	printf("%d\n", sz3);
//	printf("%d\n\n", strlen(arr3));//���ֵ
//
//	char arr4[] = { '1','2','3','4','5','6','7','8','9','10','\0'};
//	int sz4 = sizeof(arr4) / sizeof(arr4[0]);//11
//	printf("%d\n", sz4);
//	printf("%d\n", strlen(arr4));//10
//	return 0;
//}



////һά�������ڴ��еĴ洢�����ʮ�����Ƶ�4��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{//ʮ��������0~9 A B C D E F��ɣ�A��10��F��15��0��0Ҳ����16
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}//������������Ԫ�ص�ַ���ʮ�����Ƶ�4(0,4,8,C, 0,4,8,C����)
//	return 0;
//}



////����sum = 1+2+3+����+n
//int Sum(int n)
//{
//	int i, sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum + i;
//	}
//	return sum;
//}
//int main()
//{i
//	int n, sum = 0;
//		scanf("%d", &n);
//		sum = Sum(n);
//		printf("%d\n", sum);
//	return 0;
//
//}



////��ά����Ĵ����ͳ�ʼ���ʹ�ӡ���ü��ӹ��ܿ�����Ԫ��
//int main()
//{
//	int arr1[3][4] = { 1,2,3,4,5 };//3��4��,��һ�з�1~4���ڶ��е�һ����5��������0��
//	int arr2[3][4] = { { 1,2,3},{4,5} };//123�ŵ�һ�У�45�ŵڶ��У�����0���൱�ڷ�������һά���顣
//	int arr3[][4] = { {1,2,3,4},{5,6,7,8} };//�в���ʡ�ԣ��п���ʡ�ԣ��ں�����{}���弸�С�
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr2[i][j]);//��ӡarr2
//		}
//		printf("\n");
//	}
//	return 0;
//}



////��ά���������ڴ��еĴ洢��
//int main()
//{
//	int arr[3][4] = { { 1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr2[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}



////ð�������ú�����������������(�����������)��
//bubble_sort(int arr[], int sz)
//{
//	int i, j = 0;
//	for (i = 0; i < sz; i++)//10�����ܹ��Ƚ�9�ˣ�Ҳ��sz-1
//	{
//		int flag = 1;//�ȼ�������ȫ��������(ÿ���˿�ʼ���ᶨ��һ��)
//		for (j = 0; j < sz - 1 - i; j++)//��һ��10������9�αȽϣ��ڶ���9������8�αȽϣ�Ҳ��sz-i-1
//		{
//			int temp = 0;
//			if (arr[j] > arr[j + 1])//���潻������
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;//����һ�η����˽�����Ҳ������ȫ��������
//			}
//		}
//		if (flag == 1)//�����һ����������û�н������ͱ�ʾ�����Ѿ���ȫ����ֱ������������
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof�����������������
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



////����������Ԫ�ص�ַ��
//int main()
//{
//	int arr[] = { 1,2,3 };
//	printf("%p\n", arr);//˵���������ǵ�ַ
//	printf("%p\n", &arr[0]);//˵������Ԫ�ص�ַ
//	printf("%p\n", &arr);//�����治ͬ����ȡ���������ַ����Ȼֻ��ӡ����ʼ��ַ
//	printf("%d\n", *arr);//������ȷʵ�ǵ�һ��Ԫ��
//}



////����������Ԫ�ص�ַ��arr+1��&arr[0]+1��&arr+1�Ƚϡ�
//int main()
//{
//	int arr[] = { 1,2,3 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);//��ʾ�ڶ���Ԫ�ص�ַ
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);//��ʾ�ڶ���Ԫ�ص�ַ
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);//��ʾ���������ַ֮����һ��Ԫ�ص�ַ��Ҳ���������һ��Ԫ�ص�ַ+4
//}