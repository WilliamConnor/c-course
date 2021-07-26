#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////①算数操作符 + -*/ %
////②移位操作符<<和>>，二进制整体移动。
////整数的二进制表示：原码、反码、补码。
////反码是原码除首位以外全反。补码是反码 + 1，为内存储存。
////③位操作符   按位与&   按位或|   按位异或^ 。按二进制位，只能用于整数。
////练习1：不用临时变量交换ab的值
////  ①加减法_有溢出缺陷：a=a+b;  b=a-b;  a=a-b。
////  ②异或法_无溢出：a=a^b  b=a^b  a=a^b
////练习2：求任意整数在内存中二进制的1个数。
////方法一：num % 2，积累count到最后。缺点是不能计算负数。
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)//直到num判断到最后一位，也即为0
//	{
//		if (num % 2 == 1)//每次判断末位，%2如果有余，说明最后一位是1
//			count++;
//		num = num / 2;//除2在二进制里也就是退一位
//	}
//	printf("%d\n", count);
//	return 0;
//}
// 
// 
////方法二：利用按位异或于1判断最右一位数是1还是0，
////再 >> 右移一位二进制再判断，直至判断完所有位。
//int main()
//{
//	int num, i = 0;
//	int count = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}



////方法三：按位与&的妙用
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("%d\n", count);
//	return 0;
//}