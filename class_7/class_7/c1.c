#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//strlen
#include<windows.h>//Sleep
#include<stdlib.h>//ϵͳ����cls


////getchar��putchar,ctrl+zΪEOF
////EOF��ֵʵ������ - 1
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}



////scanf+getchar��ϵ�bug(�س�\n�Ķ�ȡ)
//int main()
//{
//	int re = 0;
//	int ch = 0;
//	char password[20] = {0};//[]��������ʽ�Ķ�Ϊ���飬����arr[]�����������
//	printf("����������:>");
//	scanf("%s", password);//scanfȡ�����룬������һ��\n
//	printf("�Ƿ�ȷ������(Y/N)");
//	while ((ch = getchar()) != '\n');//����һ��getchar�����뻺������\nȡ�ߣ����ﲻ��Ҫ��ֵ������
//	{
//		;//����䣬��Ϊ��getcharÿ���жϱ����Ѿ��Ƴ�һ���ַ�
//	}
//	re = getchar();//getchar��ȡ��scanf���µĻس�����ʵΪ\n��ֵ10
//	if (ret == 'Y')
//		printf("���봢��ɹ�");
//	else if (ret == 'N')
//		printf("��������");
//	else
//		printf("��������,������");
//	return 0;
//}



////ֻ��ӡ1~9���ַ�(��������)��0~9��Χ����bug��δ�����
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch> '9')
//			continue;
//		putchar(ch);
//		printf("\n");//��һ�ж���
//	}
//	return 0;
//}



////forѭ�� for(��ʼ��;�����ж�;����)
////�Զ���ӡ1~10���� for��continue֮����Ȼ������while�򿴴���λ��
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10;i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}



////for��ӡ����
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



////for����1 ��ѭ��
//int main()
//{
//	for (;;)
//	{
//		printf("1");
//	}
//	
//	return 0;
//}



////for����2 �����ѭ��
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{//&&ͬ�����  ++i��i++��ͬ
//		printf("a ");
//	}
//	return 0;
//}



////��ע�⡿�ٴ�����С�ĸ�ֵ=�����==
//int main()
//{
//	int i, j;
//	for (i = 0, j = 0; j = 0; ++i, j++)
//	{//������j��ֵ��0�����ж���ȡ�0Ϊ�٣���ѭ��ִ��0��
//		j++;
//	}
//	return;
//}



////do while ѭ����ӡ1~10
//int main()
//{
//	int i = 0;
//	do
//	{
//		i++;
//		printf("%d ", i);
//	} 	
//	while (i < 10);//ע��ֺ�;
//	return 0;
//}



////����n�Ľ׳ˢ�
////ע��int�������ޣ�n����ᵼ����������Ϊ0
//int main()
//{
//	int n, i, c;//i��ѭ��������c������n�Ľײ�
//	do//do while�����ų������е����룬��n<=1
//	{
//		printf("������Ҫ��׳˵�n:\n");
//		scanf("%d", &n);
//		if (n > 0)
//			c = 1;
//		else
//		{
//			c = 0;
//			printf("����������������룡\n");
//		}
//	} 	while (c != 1);//do while����
//	c = n;
//	for (i = n-1; i != 1; i--)
//	{
//		if (1 == n)//�жϵ��������if�ж�ִ��һ�ε�bug
//		{
//			printf("1�Ľ׳�Ϊ1\n");
//			i = 1;
//			break;
//		}
//		c = c * i;
//	}
//	printf("%d�Ľ׳�Ϊ%d\n", n, c);
//	return 0;
//}



////����n�Ľ׳ˢ�(�򻯰�)(����1���������������޷�Ӧ)
//int main()
//{
//	int n, i, c;
//		printf("������Ҫ��׳˵�n:\n");
//		scanf("%d", &n);
//	c = n;
//	for (i = n - 1; i != 1; i--)
//	{
//		c = c * i;
//	}
//	printf("%d�Ľ׳�Ϊ%d\n", n, c);
//	return 0;
//}



////����n�Ľ׳ˢ�(��1��ʼѭ������n��)
//int main()
//{
//	int n, i, c;//c������ײ�
//	printf("������Ҫ��׳˵�n:\n");
//	scanf("%d", &n);
//	for (i = 1, c = 1; i <= n; i++)
//	{
//		c *= i;
//	}
//	printf("%d�Ľ׳�Ϊ%d\n", n, c);
//	return 0;
//}



////����n!�ĺ͢�
//int main()
//{
//	int n, i, c, sum;//c������n!,sum������n!
//	printf("������Ҫ��׳˵�n:\n");
//	scanf("%d", &n);
//	for (i = 1, c = 1,sum = 0; i <= n; i++)
//	{
//		c *= i;
//		sum += c;
//	}
//	printf("%d�Ľ׳�Ϊ%d\n", n, c);
//	printf("%d!�ĺ�Ϊ%d\n", n, sum);
//	return 0;
//}



////����n!�ĺ͢�  ���ڲ�Ҫ��ײ�����,�ʼ�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int c = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{//n<=3��3���Ըĳ�Ҫ�жϵ�n!
//		c = c * n;
//		sum = sum + c;
//	}
//	n--;//ѭ���������һ��n���Լ�
//	printf("%d!�ĺ�Ϊ%d\n", n, sum);
//	return 0;
//}



////��ȡ��������ָ������(�����������������飬Ч�ʲ���)
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//kΪҪѰ�ҵ���
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if(k==arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n",i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}



////��ȡ��������ָ�����ڶ��ַ�˼��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10,11 };//����Ԫ�ؿɸ�
//	int k = 7;//Ҫ���ҵ�Ԫ�أ��ɸ�
//	int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�ظ���
//	int left = 0;//�ǵ�һ�������±�
//	int right = sz - 1;//�����һ�����±�
//
//	while (left <= right)
//	{//������û����Ҫ�����������±����ụ�����Դ���Ϊѭ���ж�
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{//����м�ֵ�±��������ֵ��˵��ֵ�����
//			right = mid - 1;//�����������±����
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//		if (left > right)//�����"�ҵ���"��ͻ��ӡ
//		{
//			printf("�Ҳ���\n");
//		}
//	}
//	return 0;
//}



////��ϰ�ܶ���ַ���#���أ��������𽥽�����
//int main()
//{
//	char arr1[] = { "welcome to bit!!!!!!" };
//	char arr2[] = { "####################" };//ע��arr2��arr1������ƥ�����
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr[0] - 2);//��̭
//	//��Ϊ����������������±����������1����������һ��\0������������2�������һ���ַ����±�
//	int right = strlen(arr1) - 1;//strlen�򲻰���\0����1���������±�
//	
//	while (left <= right)//����������˳�ѭ��
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//ÿ�δ�ӡ��ͣ1��
//		system("cls");//ִ��ϵͳ�����һ������-cls�������Ļ
//		left++;
//		right--;
//	}
//	printf("%s", arr2);//���ᱻ���������Բ�һ����ӡ
//	return 0;
//}



////��ϰ��ģ���¼�������������룬�������˳���
//int main() 
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺\n");
//		scanf("%s", password);
//		if (strcmp(password,"123456") == 0)//==���������ж��ַ�����ȣ�Ӧ���ÿ⺯��strcmp(,"")
//		{//strcmpǰ�ߣ����ߣ����>0��ǰ��=���ߣ����0��ǰ��<����,���<0
//			printf("����ɹ�\n");
//			break;
//		}
//		else
//			printf("�������\n");
//	}
//	if (3 == i)
//	{
//		printf("����������������˳�����\n");
//	}
//	return 0;
//}