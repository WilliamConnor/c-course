#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////作业函数10
////①init数组全设为0		②打印数组每个元素
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr)[0];
//	Init(arr, sz);
//	Print(arr, sz);
//	return 0;
//}



////③reverse函数逆置数组(对称交换思想)
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left < right)//下标思想
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//void Print(int arr[], int sz)//打印
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Reverse(arr, sz);//逆置
//	Print(arr, sz);//打印
//	return 0;
//}



////作业函数11	数组A和数组B内容交换（数组一样大）
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int temp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	return 0;//用监视看结果
//}



////第5题short *p = (short*)arr;强制类型转换
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



////第6题char* p = (char*)&a;①只修改一字节②内存倒着储存
//int main()
//{
//	int a = 0x11223344;
//	char* p = (char*)&a;
//	*p = 0;//修改末位一个字节，得11223300
//	printf("%x\n", a);//x是16进制打印
//	return 0;
//}



////第7题①全局变量不初始化，默认为0，局部变量则为随机。
////②sizeof计算所占内存大小，是无符号数
////③有符号数 与 无符号数比较，会强制转换为无符号数，-1的转换会变成一个极大的数
//int i;//全局变量不初始化，默认为0，
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;//结果为>
//}



////第8题a++,++a的使用
//// 逗号,的优先级最低，其他都优先于逗号，包括=赋值，除非()括号
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;//先算赋值，逗号优先级最低，再计算剩下的逗号
//	b += a++ + c;//a++仍然生效，a自加1
//	printf("%d %d %d\n", a, b, c);//9 23 8
//	return 0;
//}



////第12题 自定义函数返回参数二进制中1的个数 % 2再除以2
////传参(unsigned int n )可以将负数强制转换为无符号数，使得负数模2除以2的算法依然有效。
//int count_bit_one(unsigned int n)//unsigned使得负数也能正常计算
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)//-1模2余-1
//		{
//			count++;
//		}
//		n = n / 2;//-1除以2得0，直接返回结果为0，是错误结果
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);//计算二进制位为1的个数(指内存的补码)
//	printf("%d\n", count);
//	return 0;
//}



////方法②>>的方法，按位与&
////方法③n=n&(n-1)每次执行都能去掉二进制一个1。
//int count_bit_one(int n)//正确且最高效，无需unsigned int
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//实际上每次执行，会去掉二进制补码所有1里面最右边的1
//		count++; //能执行几次就是内存补码有几个1。
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);//计算二进制位为1的个数(指内存的补码)
//	printf("%d\n", count);
//	return 0;
//}



//第10题 求两个数a和b的二进制中不同位的个数
//方法①利用12题的方法，分别判断某一位是否为1，再判断是否相等。
//方法②让a和b异或，得到的结果再判断有几个1。异或为1则是相异。
//int get_diff_bit(int a, int b)
//{
//	int n = a ^ b;//异或^之后，得到相异的二进制位为1
//	int count = 0;//此处开始调用12题解法③
//		while (n)
//		{
//			n = n & (n - 1);//实际上每次执行，会去掉二进制补码所有1里面最右边的1
//			count++; //能执行几次就是内存补码有几个1。
//		}
//		return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);//返回二进制(补码)有差异的个数
//	printf("%d\n", count);
//	return 0;
//}



////第11题 分别打印二进制的奇数位和偶数位
//void print(int n)
//{
//	int i = 0;
//	printf("奇数位：\n");
//	for (i = 30; i >= 0; i -= 2)//打印顺序打印，而起始位就是1，所以奇、偶分别由>>30、31开始，i+=2
//	{
//		printf("%d ", (n >> i) & 1);//1即是0001，1与1按位与才是1，否则0
//	}
//	printf("\n");
//	//开始打印偶数位
//	printf("偶数位：\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);//分别打印奇数偶数位的自定义函数
//	return 0;
//}



////14题打印数组，不使用下标，使用指针
//void print_arr(int *p, int sz)//注意传参的数组名，即是指针*p
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));//指针+i后解引用*
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);//指针打印数组，不用下标
//	return 0;
//}



////作业6 n*n乘法口诀表
//void print_table(int n)
//{
//	int i, j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d*%d=%-3d ", i, j, i * j);//实现两位数的整齐打印
//		}//%-2d和%2d都是占用2格，当不足2格时，分别是左右对齐
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}



////插曲，模拟strlen，非递归法。指针循环法。自写低效版
//int my_strlen(char *p)
//{
//	int i = 0;
//	int count = 0;
//	while (i != -1)
//	{
//		if (*(p + i) != '\0')
//		{
//			i++;
//			count++;
//		}
//		else
//		{
//			i = -1;//当到达\0也即数组结束，i=-1可以取消循环
//		}
//	}
//		return count;
//}
//int main()
//{
//	char arr[] = "12345";
//	int count = my_strlen(arr);//模拟strlen
//	printf("%d\n", count);
//	return 0;
//}



////模拟strlen，非递归法。指针循环法。高效版
//int my_strlen(char *p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//		return count;
//}
//int main()
//{
//	char arr[] = "1234567";
//	int count = my_strlen(arr);//模拟strlen
//	printf("%d\n", count);
//	return 0;
//}



////逆置字符串，用递归，不使用字符串库函数。
//int my_strlen(char *p)//模拟strlen
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//		return count;
//}
//
//void reverse_string(char arr[])//也可形参char* arr或char *arr
//{
//	char temp = arr[0];//①暂存首字符
//	int len = my_strlen(arr);//求得字符串长度
//	arr[0] = arr[len - 1];//②让首字符变成末字符
//	arr[len - 1] = '\0';//③让倒数第二字符变\0，下面接递归
//	if (my_strlen(arr + 1) >= 2)//如果字符不足2，不继续递归
//	{
//		reverse_string(arr + 1);//从第二字符再开始递归
//	}
//	arr[len - 1] = temp;//④让末字符变成首字符
//}
//
//int main()
//{
//	char arr[] = "1234567";
//	reverse_string(arr);//逆置字符串
//	printf("%s\n", arr);
//	return 0;
//}



////一个非负整数，返回组成它的数字之和。DigitSum()
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + (n % 10);//是当前最后一位+之前部分的递归
//	}
//	return n;
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d", ret);//例子：1729返回1+7+2+9 = 19
//	return 0;
//}



////n的k次方，递归法实现。
//double Pow(int n, int k)//n的k次方，递归法实现。
//{
//	if (k < 0)//负次方情况
//	{
//		return (1.0 / (Pow(n, -k)));//转为1除以正数处理，注意浮点数
//	}
//	else if (k > 0)
//	{
//		return n * Pow(n, k - 1);//n*n*n……直至k为0。
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);//n的k次方，递归法实现。
//	printf("%lf", ret);
//	return 0;
//}