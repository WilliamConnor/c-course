#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <assert.h>

////������ʵ��һ�����У��� = ƽ����(6+��һλ��)��֤����������ʱ����Ϊ3
//double F(double n)
//{
//	if (n == 1.0)
//	{
//		return sqrt(6);
//	}
//	if (n > 1.0)
//	{
//		return sqrt((6 + F(n - 1)));//����Ϊ3
//	}
//}
//int main()
//{
//	double n = 2.0;//n�ǵݹ����
//	n = F(n);
//	printf("%lf\n", n);
//	return 0;
//}




////strcpyģ��ʵ�֢�
//void my_strcpy(char* arr1, char* arr2)//arr1��Ŀ�꣬arr2��Դ
//{
//	while (*arr2 != '\0')//û��\0��һֱ����
//	{
//		*arr1 = *arr2;//����
//		arr1++;//�ԼӾ��У�����Ҫforѭ��
//		arr2++;
//	}
//	*arr1 = *arr2;//��ʱ����ѭ����*arr2�Ѿ���\0���൱�ڸ�\0��arr1
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



////strcpyģ��ʵ�֢ڣ�һ�д��룬����û�п���NULLָ������
//void my_strcpy(char* arr1, char* arr2)//arr1��Ŀ�꣬arr2��Դ
//{
//	while (*arr1++ = *arr2++)//�ȸ�ֵ����ֵarr1Ϊwhile���ж�
//	{//b��i��t�����棬����ѭ������\0�ȸ�ֵ��������0,������ѭ��
//		;//��Ϊ\0��++��ִ����һ��ѭ����ֱ��\0  '\0'��ֵ����0
//	}
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



////strcpyģ��ʵ�֢ۣ�������������NULLָ����������ǹ�����⣬��������á�
//void my_strcpy(char* arr1, char* arr2)//arr1��Ŀ�꣬arr2��Դ
//{
//	if (arr1 != NULL && arr2 != NULL)
//	{
//		while (*arr1++ = *arr2++)
//		{
//			;
//		}
//	}
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



////strcpyģ��ʵ�֢�assert();���Ե����ã���ͷ�ļ�#include<assert.h>
////assert();�����ڲ��������������������򱨴�
//void my_strcpy(char* arr1, char* arr2)
//{
//	assert(arr1 != NULL); //�����ڲ��������������������򱨴�
//	assert(arr2 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, NULL);//�滻��NULL�Բ鿴Ч��
//	printf("%s\n", arr1);
//	return 0;
//}



////strcpyģ��ʵ�֢����ְ棬ע��strcpyԭ���������char*��const
//char* my_strcpy(char* arr1, const char* arr2)
//{
//	char* ret = arr1;//�ȼ�¼�������ַ
//	assert(arr1 != NULL); //���ԣ������ڲ��������������������򱨴�
//	assert(arr2 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;//ֱ�ӷ����Ѽ�¼�����ݵ�ַ�������õ���ѭ�����µı仯
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));//ֱ�Ӵ�ӡ���
//	return 0;
//}



////strlenģ�⡣���ְ�
//int my_strlen(const char* str)//constʹ��Դֵ���ɱ��ı�
//{
//	int count = 0;
//	assert(str != NULL);//���������ܿ�ָ��
//	while (*str != '\0')//����֣�������ֱ��'\0'ֹͣ
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);//�������鳤��
//	printf("%d\n", len);
//	return 0;
//}