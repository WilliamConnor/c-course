#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////��ҵ����10
////��init����ȫ��Ϊ0		�ڴ�ӡ����ÿ��Ԫ��
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



////��reverse������������(�Գƽ���˼��)
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left < right)//�±�˼��
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//void Print(int arr[], int sz)//��ӡ
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
//	Reverse(arr, sz);//����
//	Print(arr, sz);//��ӡ
//	return 0;
//}



////��ҵ����11	����A������B���ݽ���������һ����
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
//	return 0;//�ü��ӿ����
//}



////��5��short *p = (short*)arr;ǿ������ת��
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



////��6��char* p = (char*)&a;��ֻ�޸�һ�ֽڢ��ڴ浹�Ŵ���
//int main()
//{
//	int a = 0x11223344;
//	char* p = (char*)&a;
//	*p = 0;//�޸�ĩλһ���ֽڣ���11223300
//	printf("%x\n", a);//x��16���ƴ�ӡ
//	return 0;
//}



////��7���ȫ�ֱ�������ʼ����Ĭ��Ϊ0���ֲ�������Ϊ�����
////��sizeof������ռ�ڴ��С�����޷�����
////���з����� �� �޷������Ƚϣ���ǿ��ת��Ϊ�޷�������-1��ת������һ���������
//int i;//ȫ�ֱ�������ʼ����Ĭ��Ϊ0��
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
//	return 0;//���Ϊ>
//}



////��8��a++,++a��ʹ��
//// ����,�����ȼ���ͣ������������ڶ��ţ�����=��ֵ������()����
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;//���㸳ֵ���������ȼ���ͣ��ټ���ʣ�µĶ���
//	b += a++ + c;//a++��Ȼ��Ч��a�Լ�1
//	printf("%d %d %d\n", a, b, c);//9 23 8
//	return 0;
//}



////��12�� �Զ��庯�����ز�����������1�ĸ��� % 2�ٳ���2
////����(unsigned int n )���Խ�����ǿ��ת��Ϊ�޷�������ʹ�ø���ģ2����2���㷨��Ȼ��Ч��
//int count_bit_one(unsigned int n)//unsignedʹ�ø���Ҳ����������
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)//-1ģ2��-1
//		{
//			count++;
//		}
//		n = n / 2;//-1����2��0��ֱ�ӷ��ؽ��Ϊ0���Ǵ�����
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);//���������λΪ1�ĸ���(ָ�ڴ�Ĳ���)
//	printf("%d\n", count);
//	return 0;
//}



////������>>�ķ�������λ��&
////������n=n&(n-1)ÿ��ִ�ж���ȥ��������һ��1��
//int count_bit_one(int n)//��ȷ�����Ч������unsigned int
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//ʵ����ÿ��ִ�У���ȥ�������Ʋ�������1�������ұߵ�1
//		count++; //��ִ�м��ξ����ڴ油���м���1��
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);//���������λΪ1�ĸ���(ָ�ڴ�Ĳ���)
//	printf("%d\n", count);
//	return 0;
//}



//��10�� ��������a��b�Ķ������в�ͬλ�ĸ���
//����������12��ķ������ֱ��ж�ĳһλ�Ƿ�Ϊ1�����ж��Ƿ���ȡ�
//��������a��b��򣬵õ��Ľ�����ж��м���1�����Ϊ1�������졣
//int get_diff_bit(int a, int b)
//{
//	int n = a ^ b;//���^֮�󣬵õ�����Ķ�����λΪ1
//	int count = 0;//�˴���ʼ����12��ⷨ��
//		while (n)
//		{
//			n = n & (n - 1);//ʵ����ÿ��ִ�У���ȥ�������Ʋ�������1�������ұߵ�1
//			count++; //��ִ�м��ξ����ڴ油���м���1��
//		}
//		return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);//���ض�����(����)�в���ĸ���
//	printf("%d\n", count);
//	return 0;
//}



////��11�� �ֱ��ӡ�����Ƶ�����λ��ż��λ
//void print(int n)
//{
//	int i = 0;
//	printf("����λ��\n");
//	for (i = 30; i >= 0; i -= 2)//��ӡ˳���ӡ������ʼλ����1�������桢ż�ֱ���>>30��31��ʼ��i+=2
//	{
//		printf("%d ", (n >> i) & 1);//1����0001��1��1��λ�����1������0
//	}
//	printf("\n");
//	//��ʼ��ӡż��λ
//	printf("ż��λ��\n");
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
//	print(n);//�ֱ��ӡ����ż��λ���Զ��庯��
//	return 0;
//}



////14���ӡ���飬��ʹ���±꣬ʹ��ָ��
//void print_arr(int *p, int sz)//ע�⴫�ε�������������ָ��*p
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));//ָ��+i�������*
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);//ָ���ӡ���飬�����±�
//	return 0;
//}



////��ҵ6 n*n�˷��ھ���
//void print_table(int n)
//{
//	int i, j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d*%d=%-3d ", i, j, i * j);//ʵ����λ���������ӡ
//		}//%-2d��%2d����ռ��2�񣬵�����2��ʱ���ֱ������Ҷ���
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



////������ģ��strlen���ǵݹ鷨��ָ��ѭ��������д��Ч��
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
//			i = -1;//������\0Ҳ�����������i=-1����ȡ��ѭ��
//		}
//	}
//		return count;
//}
//int main()
//{
//	char arr[] = "12345";
//	int count = my_strlen(arr);//ģ��strlen
//	printf("%d\n", count);
//	return 0;
//}



////ģ��strlen���ǵݹ鷨��ָ��ѭ��������Ч��
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
//	int count = my_strlen(arr);//ģ��strlen
//	printf("%d\n", count);
//	return 0;
//}



////�����ַ������õݹ飬��ʹ���ַ����⺯����
//int my_strlen(char *p)//ģ��strlen
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
//void reverse_string(char arr[])//Ҳ���β�char* arr��char *arr
//{
//	char temp = arr[0];//���ݴ����ַ�
//	int len = my_strlen(arr);//����ַ�������
//	arr[0] = arr[len - 1];//�������ַ����ĩ�ַ�
//	arr[len - 1] = '\0';//���õ����ڶ��ַ���\0������ӵݹ�
//	if (my_strlen(arr + 1) >= 2)//����ַ�����2���������ݹ�
//	{
//		reverse_string(arr + 1);//�ӵڶ��ַ��ٿ�ʼ�ݹ�
//	}
//	arr[len - 1] = temp;//����ĩ�ַ�������ַ�
//}
//
//int main()
//{
//	char arr[] = "1234567";
//	reverse_string(arr);//�����ַ���
//	printf("%s\n", arr);
//	return 0;
//}



////һ���Ǹ����������������������֮�͡�DigitSum()
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + (n % 10);//�ǵ�ǰ���һλ+֮ǰ���ֵĵݹ�
//	}
//	return n;
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d", ret);//���ӣ�1729����1+7+2+9 = 19
//	return 0;
//}



////n��k�η����ݹ鷨ʵ�֡�
//double Pow(int n, int k)//n��k�η����ݹ鷨ʵ�֡�
//{
//	if (k < 0)//���η����
//	{
//		return (1.0 / (Pow(n, -k)));//תΪ1������������ע�⸡����
//	}
//	else if (k > 0)
//	{
//		return n * Pow(n, k - 1);//n*n*n����ֱ��kΪ0��
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
//	double ret = Pow(n, k);//n��k�η����ݹ鷨ʵ�֡�
//	printf("%lf", ret);
//	return 0;
//}