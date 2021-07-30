#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <assert.h>

////插曲：实现一个数列：数 = 平方根(6+上一位数)，证明趋于无穷时极限为3
//double F(double n)
//{
//	if (n == 1.0)
//	{
//		return sqrt(6);
//	}
//	if (n > 1.0)
//	{
//		return sqrt((6 + F(n - 1)));//极限为3
//	}
//}
//int main()
//{
//	double n = 2.0;//n是递归次数
//	n = F(n);
//	printf("%lf\n", n);
//	return 0;
//}




////strcpy模拟实现①
//void my_strcpy(char* arr1, char* arr2)//arr1是目标，arr2是源
//{
//	while (*arr2 != '\0')//没到\0就一直复制
//	{
//		*arr1 = *arr2;//复制
//		arr1++;//自加就行，不需要for循环
//		arr2++;
//	}
//	*arr1 = *arr2;//此时跳出循环，*arr2已经是\0，相当于给\0给arr1
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



////strcpy模拟实现②，一行代码，但是没有考虑NULL指针问题
//void my_strcpy(char* arr1, char* arr2)//arr1是目标，arr2是源
//{
//	while (*arr1++ = *arr2++)//先赋值，赋值arr1为while的判断
//	{//b、i、t都是真，继续循环。到\0先赋值，发现是0,就跳出循环
//		;//不为\0就++，执行下一次循环，直到\0  '\0'码值就是0
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



////strcpy模拟实现③，上述基础改良NULL指针情况，但是规避问题，不建议采用。
//void my_strcpy(char* arr1, char* arr2)//arr1是目标，arr2是源
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



////strcpy模拟实现④assert();断言的引用，及头文件#include<assert.h>
////assert();符合内部条件则正常，不符合则报错
//void my_strcpy(char* arr1, char* arr2)
//{
//	assert(arr1 != NULL); //符合内部条件则正常，不符合则报错
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
//	my_strcpy(arr1, NULL);//替换了NULL以查看效果
//	printf("%s\n", arr1);
//	return 0;
//}



////strcpy模拟实现⑤满分版，注意strcpy原函数定义的char*和const
//char* my_strcpy(char* arr1, const char* arr2)
//{
//	char* ret = arr1;//先记录下数组地址
//	assert(arr1 != NULL); //断言，符合内部条件则正常，不符合则报错
//	assert(arr2 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;//直接返回已记录的数据地址，而不用担心循环导致的变化
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));//直接打印结果
//	return 0;
//}



////strlen模拟。满分版
//int my_strlen(const char* str)//const使得源值不可被改变
//{
//	int count = 0;
//	assert(str != NULL);//声明不接受空指针
//	while (*str != '\0')//常规局，计数器直到'\0'停止
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);//计算数组长度
//	printf("%d\n", len);
//	return 0;
//}