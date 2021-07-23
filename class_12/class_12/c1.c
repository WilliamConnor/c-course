#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

////数组创建和初始化
//int main()
//{
//	int arr[] = { 1,2,3 };//没放满，是不完全初始化，余下默认放0
//	char arr2[5] = { 'a',98 };//98识别为ASCII码值相当于'b'
//	char arr3[5] = "ab";//与上面结果一样，但其第三个值实际上是\0，上一行是直接给0
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//是7，包括了\0，比实际字符个数多1。
//	printf("%d\n", strlen(arr4));//是6，等于实际字符个数
//	return 0;//【提示：char占一个字节，int占4个字节】
//}


//
////数组创建。字符串、单字符形式创建的区别
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机值，因为无\0终止
//	printf("\n");
//	int arr3[] = { 123 };
//	int arr4[] = { 1,2,3 };//数字数组没有上面的两种方法，123是就是1个100多的数
//	printf("%d\n", sizeof(arr3));//4
//	printf("%d\n", sizeof(arr4));//12
//	printf("%d\n", strlen(arr3));//非字符不可用
//	printf("%d\n", strlen(arr4));//非字符不可用
//	printf("\n");
//	int arr5[5] = { 123 };
//	int arr6[5] = { 1,2,3 };//给定[]值就输出相应数量
//	printf("%d\n", sizeof(arr5));//20
//	printf("%d\n", sizeof(arr6));//20
//}



////数组结尾'\0'的重要性
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
//	printf("%d\n\n", strlen(arr3));//随机值
//
//	char arr4[] = { '1','2','3','4','5','6','7','8','9','10','\0'};
//	int sz4 = sizeof(arr4) / sizeof(arr4[0]);//11
//	printf("%d\n", sz4);
//	printf("%d\n", strlen(arr4));//10
//	return 0;
//}



////一维数组在内存中的存储。相差十六进制的4。
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{//十六进制由0~9 A B C D E F组成，A是10，F是15，0是0也就是16
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}//相邻整型数组元素地址相差十六进制的4(0,4,8,C, 0,4,8,C……)
//	return 0;
//}



////插曲sum = 1+2+3+……+n
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



////二维数组的创建和初始化和打印，用监视功能看数组元素
//int main()
//{
//	int arr1[3][4] = { 1,2,3,4,5 };//3行4列,第一行放1~4，第二行第一个是5，其他放0。
//	int arr2[3][4] = { { 1,2,3},{4,5} };//123放第一行，45放第二行，其他0，相当于放了两个一维数组。
//	int arr3[][4] = { {1,2,3,4},{5,6,7,8} };//列不能省略，行可以省略，内含几个{}定义几行。
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr2[i][j]);//打印arr2
//		}
//		printf("\n");
//	}
//	return 0;
//}



////二维数组在在内存中的存储。
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



////冒泡排序，用函数将整型数组排序(随机数组升序)。
//bubble_sort(int arr[], int sz)
//{
//	int i, j = 0;
//	for (i = 0; i < sz; i++)//10个数总共比较9趟，也即sz-1
//	{
//		int flag = 1;//先假设是完全升序数组(每次趟开始都会定义一次)
//		for (j = 0; j < sz - 1 - i; j++)//第一趟10个数作9次比较，第二趟9个数作8次比较，也即sz-i-1
//		{
//			int temp = 0;
//			if (arr[j] > arr[j + 1])//常规交换操作
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;//任意一次发生了交换，也即否定完全有序数组
//			}
//		}
//		if (flag == 1)//如果第一趟下来发现没有交换，就表示数组已经完全升序，直接跳出函数。
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof必须在主函数里计算
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



////数组名是首元素地址。
//int main()
//{
//	int arr[] = { 1,2,3 };
//	printf("%p\n", arr);//说明数组名是地址
//	printf("%p\n", &arr[0]);//说明是首元素地址
//	printf("%p\n", &arr);//与上面不同，是取整个数组地址，虽然只打印了起始地址
//	printf("%d\n", *arr);//解引用确实是第一个元素
//}



////数组名是首元素地址①arr+1②&arr[0]+1③&arr+1比较。
//int main()
//{
//	int arr[] = { 1,2,3 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);//表示第二个元素地址
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);//表示第二个元素地址
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);//表示整个数组地址之后下一个元素地址，也即数组最后一个元素地址+4
//}