//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//////�Զ��庯���ĵ��ã���AddΪ��
////int Add(int x, int y)
////{
////	int z = x+y;
////	return z;
////}
////int main()
////{
////	int a = 1;
////	int b = 2;
////	int sum = 0;
////	int c = 100;
////	int d = 200;
////	sum = Add(a, b);
////	printf("%d\n", sum);
////	sum = Add(c, d);
////	printf("%d\n", sum);
////	return 0;
////}
//
//
//////����arr[]������
////int main()
////{
////	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
////	printf("%d\n", arr[4]);//�±�4ָ�����������Ϊ��0��ʼ
////	int i = 0;
////	while (i < 10)
////	{
////		printf("%d ", arr[i]);
////		i++;
////	}	
////	printf("���һ�����ǣ�%d\n", arr[9]);
////	return 0;
////}
//
//////������
//////������������ȡģ������
////int main()
////{
////	int a = 5 / 2;
////	int b = 5 % 2;//ȡģ��������
////	printf("%d\n", a);
////	printf("%d\n", b);
////	return 0;
////}
//
//
//////��λ�������������ƣ�,��ԭ��bit�������ƣ�
////int main()
////{
////	int a = 1;
////	int b = a << 1;
////	printf("%d\n", b);
////	int c = a << 2;
////	printf("%d\n", c);
////	int d = a << 3;
////	printf("%d\n", c);
////	return 0;
////}
//
//
//////λ������(������)& | ^
//////��λ��&��ָԴ�붼Ϊ����棬0�Ǽ٣���0����
////int main()
////{
////	int a = 3;//    011
////	int b = 5;//    101
////	int c = a & b;//001
////	printf("%d\n", c);
////	return 0;
////}
////
//////��λ��|��ָԴ����һ�������
////int main()
////{
////	int a = 3;//    011
////	int b = 5;//    101
////	int c = a | b;//111
////	printf("%d\n", c);
////	return 0;
////}
////
//////��λ���^��ָԴ����ͬΪ�棬��ͬΪ��
////int main()
////{
////	int a = 3;//    011
////	int b = 5;//    101
////	int c = a ^ b;//110
////	printf("%d\n", c);
////	return 0;
////}
//
//
//////��Ŀ������
//////!a ��0Ϊ1����0��Ϊ0
////int main()
////{
////	int a = 10;
////	printf("��0��!a��%d\n", !a);
////	int c = 276;
////	printf("��0��!a��%d\n", !c);
////	int b = 0;
////	printf("0��!a��%d\n", !b);
//////sizeof ����a,b,c�ȱ�����ʡ������
//////int long�Ȳ���ʡ��
////	printf("a�Ĵ�С��%d\n", sizeof(a));
////	printf("short�Ĵ�С��%d\n", sizeof(short));
////	printf("a�Ĵ�С��%d\n", sizeof a);
////	//printf("%d\n", sizeof short);//�Ǵ���д��
////	int arr[10] = { 0 };
////	printf("10��������Ĵ�С��%d\n", sizeof (arr));
////	//����10������ÿ��int��4�ֽ�
////	//�����Ǽ�������Ԫ�ظ����ķ���
////	int  sz = 0;
////	sz = sizeof(arr) / sizeof(int);
////	printf("����Ԫ�صĸ���Ϊ��%d\n", sz);
////	return 0;
////}
