#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//strlen
#include<windows.h>//Sleep
#include<stdlib.h>//系统函数cls


////getchar和putchar,ctrl+z为EOF
////EOF的值实际上是 - 1
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}



////scanf+getchar组合的bug(回车\n的读取)
//int main()
//{
//	int re = 0;
//	int ch = 0;
//	char password[20] = {0};//[]中括号形式的都为数组，不受arr[]这个名字限制
//	printf("请输入密码:>");
//	scanf("%s", password);//scanf取走密码，但遗留一个\n
//	printf("是否确定密码(Y/N)");
//	while ((ch = getchar()) != '\n');//补充一个getchar把输入缓冲区的\n取走，这里不需要赋值给变量
//	{
//		;//空语句，因为用getchar每次判断本身已经移除一个字符
//	}
//	re = getchar();//getchar读取了scanf留下的回车，其实为\n，值10
//	if (ret == 'Y')
//		printf("密码储存成功");
//	else if (ret == 'N')
//		printf("放弃密码");
//	else
//		printf("操作错误,请重试");
//	return 0;
//}



////只打印1~9的字符(不是数字)。0~9范围外有bug（未解决）
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch> '9')
//			continue;
//		putchar(ch);
//		printf("\n");//空一行而已
//	}
//	return 0;
//}



////for循环 for(初始化;条件判断;调整)
////自动打印1~10的数 for在continue之后依然调整，while则看代码位置
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10;i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}



////for打印数组
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



////for亚种1 死循环
//int main()
//{
//	for (;;)
//	{
//		printf("1");
//	}
//	
//	return 0;
//}



////for亚种2 多变量循环
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{//&&同真才真  ++i与i++等同
//		printf("a ");
//	}
//	return 0;
//}



////【注意】再次提醒小心赋值=与相等==
//int main()
//{
//	int i, j;
//	for (i = 0, j = 0; j = 0; ++i, j++)
//	{//这里是j赋值了0而非判断相等。0为假，故循环执行0次
//		j++;
//	}
//	return;
//}



////do while 循环打印1~10
//int main()
//{
//	int i = 0;
//	do
//	{
//		i++;
//		printf("%d ", i);
//	} 	
//	while (i < 10);//注意分号;
//	return 0;
//}



////计算n的阶乘①
////注意int储存有限，n过大会导致溢出而结果为0
//int main()
//{
//	int n, i, c;//i是循环变量，c是所求n的阶层
//	do//do while用以排除不可行的输入，即n<=1
//	{
//		printf("请输入要求阶乘的n:\n");
//		scanf("%d", &n);
//		if (n > 0)
//			c = 1;
//		else
//		{
//			c = 0;
//			printf("输入错误，请重新输入！\n");
//		}
//	} 	while (c != 1);//do while结束
//	c = n;
//	for (i = n-1; i != 1; i--)
//	{
//		if (1 == n)//判断单次输入的if有多执行一次的bug
//		{
//			printf("1的阶乘为1\n");
//			i = 1;
//			break;
//		}
//		c = c * i;
//	}
//	printf("%d的阶乘为%d\n", n, c);
//	return 0;
//}



////计算n的阶乘②(简化版)(输入1和其他非正整数无反应)
//int main()
//{
//	int n, i, c;
//		printf("请输入要求阶乘的n:\n");
//		scanf("%d", &n);
//	c = n;
//	for (i = n - 1; i != 1; i--)
//	{
//		c = c * i;
//	}
//	printf("%d的阶乘为%d\n", n, c);
//	return 0;
//}



////计算n的阶乘③(从1开始循环乘至n版)
//int main()
//{
//	int n, i, c;//c是所求阶层
//	printf("请输入要求阶乘的n:\n");
//	scanf("%d", &n);
//	for (i = 1, c = 1; i <= n; i++)
//	{
//		c *= i;
//	}
//	printf("%d的阶乘为%d\n", n, c);
//	return 0;
//}



////计算n!的和①
//int main()
//{
//	int n, i, c, sum;//c是所求n!,sum是所求n!
//	printf("请输入要求阶乘的n:\n");
//	scanf("%d", &n);
//	for (i = 1, c = 1,sum = 0; i <= n; i++)
//	{
//		c *= i;
//		sum += c;
//	}
//	printf("%d的阶乘为%d\n", n, c);
//	printf("%d!的和为%d\n", n, sum);
//	return 0;
//}



////计算n!的和②  基于不要求阶层的输出,故简化
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int c = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{//n<=3的3可以改成要判断的n!
//		c = c * n;
//		sum = sum + c;
//	}
//	n--;//循环结束多出一个n，自减
//	printf("%d!的和为%d\n", n, sum);
//	return 0;
//}



////获取有序数组指定数①(遍历，对于有序数组，效率不高)
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//k为要寻找的数
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if(k==arr[i])
//		{
//			printf("找到了，下标是：%d\n",i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}



////获取有序数组指定数②二分法思想
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10,11 };//数组元素可改
//	int k = 7;//要查找的元素，可改
//	int sz = sizeof(arr) / sizeof(arr[0]);//元素个数
//	int left = 0;//是第一个数的下标
//	int right = sz - 1;//是最后一个数下标
//
//	while (left <= right)
//	{//若数组没有想要的数，左右下标最后会互换，以此作为循环判断
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{//如果中间值下标大于所找值，说明值在左边
//			right = mid - 1;//所以缩短右下标距离
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//		if (left > right)//以免和"找到了"冲突打印
//		{
//			printf("找不到\n");
//		}
//	}
//	return 0;
//}



////练习④多个字符以#隐藏，从两端逐渐揭晓。
//int main()
//{
//	char arr1[] = { "welcome to bit!!!!!!" };
//	char arr2[] = { "####################" };//注意arr2与arr1数量不匹配会烫
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr[0] - 2);//淘汰
//	//因为算出来的是总数，下标是最大数减1，但隐藏了一个\0，所以总数减2才是最后一个字符的下标
//	int right = strlen(arr1) - 1;//strlen则不包括\0，减1即得最右下标
//	
//	while (left <= right)//擦肩而过就退出循环
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//每次打印后停1秒
//		system("cls");//执行系统命令的一个函数-cls，清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s", arr2);//最后会被清屏，所以补一个打印
//	return 0;
//}



////练习⑤模拟登录，输入三次密码，都错则退出。
//int main() 
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：\n");
//		scanf("%s", password);
//		if (strcmp(password,"123456") == 0)//==不能用于判断字符串相等，应该用库函数strcmp(,"")
//		{//strcmp前者＞后者，输出>0。前者=后者，输出0。前者<后者,输出<0
//			printf("登入成功\n");
//			break;
//		}
//		else
//			printf("密码错误\n");
//	}
//	if (3 == i)
//	{
//		printf("三次密码均错误请退出程序\n");
//	}
//	return 0;
//}