#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//����strlen strcmp��
#include<math.h>//����sqrt
#include <stdlib.h>//����rand() ����system()
#include <time.h>//����time()





////default�������ᱻִ��,�ͷ���ǰ���в�һ���Ľ��
//int main()
//{
//	int i = 1;
//	int n = 0;
//	switch (i)
//	{
//	case 1:
//		n = 1;
//	case 2:
//		n = 2;
//	case 3:
//		n = 3;
//	default:
//		n = 4;
//	}
//	printf("%d", n);
//	return 0;
//}



////�������������ֵ
//int main()
//{
//	char arr1[] = {1,2,7,3,5,8,9,2,6};//����������
//	int i = 0;
//	int n = arr1[0];
//	int sz = sizeof(arr1)/sizeof(arr1[0])-1;//sz������±�ֵ
//	for (i = 1; i<=sz; i++)
//	{
//		if(arr1[i] > n)
//		{
//			n = arr1[i];
//		}
//	}
//	printf("%d ", n);
//	return 0;
//}



////����������Ӵ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//������ո�
//	//�㷨Ҫ��a�����ֵ,bc����
//	if (a < b)//a>b�򲻹ܣ�С��b��Ҫ�滻����
//	{
//		int tmp = a;//��ʱ�ľֲ�����
//		a = b;
//		b = tmp;
//	}
//	if(a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}



////��ӡ1~100������3�ı�������
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



////�������������Լ��(δ��֤��ȷ��)
//int main()
//{
//	int a, b, i, n;
//	scanf("%d%d", &a, &b);//����������
//	if(a<b)
//	{
//		i = a;
//		n = b; //n���������
//
//	}
//	else
//	{
//		i = b;
//		n = a;
//	}
//	for (i; i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("���Լ����%d", i);
//			break;
//		}
//	}
//	return 0;
//}



////�������������Լ��(շת�����)
//int main()
//{
//	int m = 24;
//	int n = 18;
//	//scanf("%d%d", &m, &n);//���Զ�������
//	int r = 0;
//	while (m % n)//�ܹ�������˵���ǹ�Լ��������Ҫ��!=����жϣ���ΪĬ���жϾ���0�٣���0�档
//	{
//		r = m % n;//24ģ18��6������ֱ�ӷ���while(r = m % n)
//		m = n;//mȡ18
//		n = r;//nȡ6����շת���
//
//	}
//	printf("%d", n);
//	return 0;
//}



////��ӡ1000~2000������
////ע��������ܱ�4���������ܱ�100��������ܱ�400����
//int main()
//{
//	int a = 1000;
//	int b = 2000;
//	int i = 1000;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//		else if (i%100 ==0)
//		{
//			;
//		}
//		else if(i % 4 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



////��ӡ1000~2000������(�ٷ�)
//int main()
//{
//	int count = 0;//˳��ͳ������
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n%d ", count);
//	return 0;
//}//�߶˰�if(((year%4==0)&&(year%100!=0))||(year%400==0))




////��ӡ100~200֮���������Գ���(�ϲ�)
////����ֻ�ܱ�1����������
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)//���˵��2��n-1����������
//		{
//			printf("%d ", i);//��ӡ����
//		}
//	}
//	return 0;
//}



////��ӡ100~200֮���������Գ��Ż��㷨i=a*b
////������һ������a�������Ͳ�����������a��b������һ������ <= ��ƽ��i
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)//ֻҪ�жϵ�����i��û����������������Ҳһ��
//		{//sqrt��ƽ������ѧ�⺯��
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))//���˵��2��n-1����������
//		{
//			printf("%d ", i);//��ӡ����
//		}
//	}
//	return 0;
//}



////��ӡ100~200֮���������Գ����Ż��㷨
////��Ϊż���϶�������2�����Դ�101��ʼ����iÿ��+2
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)//ֻҪ�жϵ�����i��û����������������Ҳһ��
//		{//sqrt��ƽ������ѧ�⺯��
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))//���˵��2��n-1����������
//		{
//			printf("%d ", i);//��ӡ����
//		}
//	}
//	return 0;
//}



////1~100�����������ֶ��ٸ�9(99��2��9)
////���ʽ�����ǿ��޸ĵ���ֵ������ָ==����=
//int main()
//{
//	int i = 9;
//	int count = 0;
//	for (i = 9; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)//����if�ø�λ��ʮλ��9��ִ��
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n�ܹ�%d��9", count);
//	return 0;
//}



////�ܷ�����͡�����1/1-1/2+1/3-1/4+1/5����+1/99-1/100��ֵ
////����/��������һ���Ǹ��㣬Ҳ��1.0����ʽ��
////��ֵ����ֵ��Ҫfloat��double��ʽ���ҳ�ʼֵΪ0.0�ȡ���ӡ��Ҫ%f��%lf��ʽ
//int main()
//{
//	int i = 1;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i += 1)
//	{
//		sum = sum + flag * 1.0 / i;//���밴��ѧ�ĳ˳�����
//		flag = -flag;//�ֻ�+-�ķ���
//	}
//	printf("��͵�%lf\n", sum);
//	return 0;
//}



////����10�������е����ֵ
//int main()
//{
//	int arr[10] = { 1,2,3,27,5,6,16,8,9,10 };
//	int i = 0;
//	int max = arr[0];//ע��Ԥ�ȸ�arr[0],���бȽ�
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)//max��arr[0],���Դ�arr[1]��ʼ
//	{
//		if(arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("���ֵΪ%d\n", max);
//	return 0;
//}



////�޴�ӡ9*9�˷��ھ���(���з���)
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int n = 0;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = a; b <= 9; b++)//��b=a��ʼ����ȥ���ظ��ĳ˷�
//		{
//			n = a * b;
//			printf("%d*%d=%d ", a, b, n);
//			if (b == 9)
//			{
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}



////�޴�ӡ9*9�˷��ھ���(Ӧ���Ǳ�׼����)
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int n = 0;
//	for (i = 1; i <= 9; i++)//iȷ����ӡ9��
//	{
//		for (j = 1; j <= i; j++)//j��ӡ���е���Ϣ
//		{
//			n = i * j;
//			printf("%d*%d=%-2d ", i, j, n);//%2d��ӡ2λ������2λ���ÿո�
//		}//%-2d����-���������
//		printf("\n");//������һ��j��ӡ��һ��
//	}
//	return 0;
//}



////�߶��ֲ��ң������������в���ĳ������
////Ҫ���ҵ��˴�ӡ��Ӧ����[�±�]���Ҳ���������Ҳ�����
//int main()
//{
//	int arr[] = { 1,2,4,5,6,9,10,13,14,15 };//�����������
//	//�±����= { 0,1,2,3,4,5,6,7,8,9 }
//	int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ������
//	int i = 0;
//	int n = 0;//���ҵ���
//	printf("������Ҫ���ҵ�����");
//	scanf("%d", &n);
//	int left = 0;
//	int right = sz;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//���м������±�
//		if (arr[mid] == n)
//		{
//			printf("�ҵ����±��ǣ�%d", mid);
//			break;//�ҵ��˾ͼ�ʱ��ֹ�������"û�ҵ�"��ͻ��ӡ
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < n)
//			left = mid + 1;
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}



////��������Ϸ
////�ٵ��Ի�����һ��������ڲ´��С�¶Զ��������
////RAND_MAX//�Ҽ��鿴����0x7fff��0~32,767
//void menu()//�Զ��庯������ӡһ���˵�����
//{
//	printf("******************************\n");
//	printf("*****  1.play    0.exit  *****\n");
//	printf("******************************\n");
//}
//void game()
//{
//	int r = 0;//���������
//	int guess = 0;//�����û�������
//	r = rand() % 100 + 1;//������α���������ʵ�ǲ�ͬһ�����ֵ���������%100+1��ʹ�÷�Χ��1~100
//	while (1)//�ڲ����֡�while (1)���Ǻ�ִ�У�ֱ���¶�����break����
//	{
//		printf("������:>\n");
//		scanf("%d", &guess);
//		if (guess > r)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < r)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//	printf("%d\n", r);
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//srandֻ��Ҫ����һ�Σ�main��ͷ���У��Ϳ�����������������ں�����Ƶ�����÷��������
//	//srand�ṩ��rand�����ӡ�time��ָ��*����NULL�ɿ�ָ��
//	//time������long����unsigned intת��int������
//	int input = 0;
//	do
//	{
//		menu();//ֻ����ͨ�Զ��庯�����ѣ����Ǹ߶˻�
//		printf("��ѡ��>:");
//		scanf("%d", &input);//�û����룬%d��Ҫ���ո񣬺�printf��һ��
//		switch (input)
//		{
//		case 1:
//			game();//game�Զ��庯��
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);//ʵ����input!=0��ѭ�������ﰴ0��,��0��ԭ��ʡ����
//	return 0;
//}



////������������ɣ������档//δ���
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int r = 0;
//	int input = 1;
//	while (input == 1)
//	{
//		r = rand() % 100 + 1;
//		printf("�����Ϊ��%d\n", r);
//		printf("����һ��������1���س�\n\n");
//		scanf("%d", &input);
//	}
//	printf("�������˳�\n");
//	return 0;
//}



////goto����
//int main()
//{
//	printf("goto����1\n");
//	goto abc;
//	printf("goto����2\n");
//abc://goto�ı�ǩ���ⶨ�壬���Ͽ��£�ע����:ð��
//	printf("goto����3\n");
//	return 0;
//}



////goto֮�ػ�����shutdown��#include <stdlib.h>��ͷ
////shutdown -s -t 60��60���ڹػ���shutdown -aȡ���ػ���
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("ע�⣡���ĵ��Խ���1�����ڹػ�\n�����롰ȡ���ػ�����ȡ��\n");//��ɫ��ͬ���ֻ�ǲ�ͬ����ʾ
//	scanf("%s", &input);
//	if (strcmp(input, "ȡ���ػ�") == 0)
//	{
//		system("shutdown -a");
//		printf("ȡ���ػ��ɹ�");
//	}
//	else
//	{
//		printf("���%s\n",input);
//		goto again;
//	}
//	return 0;
//}//��ʵ�ϲ�����Ҫgoto