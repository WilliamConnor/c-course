#include<stdio.h>
#pragma warning(disable:4996)//���ں���scanf�Ĳ���ȫ�Ա���

int c = 10;
int main()
{
	//char��int�Ĵ�ӡ����
	//char ch = 'A';
	//printf("%c\n", ch);
	//int age = 20;
	//printf("%d\n", age);
	
	//float f = 6.0;//��ӡ����
	//printf("%f\n", f);
	
	//double d = 3.14159;//��ӡ˫���ȸ���
	//printf("%lf\n", d);

	//����ռ���ڴ��С
	//printf("%d\n", sizeof(char));
	//printf("%d\n", sizeof(short));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(long));
	//printf("%d\n", sizeof(long long));
	//printf("%d\n", sizeof(float));
	//printf("%d\n", sizeof(double));

	//��������ص�ָ��
	//short age = 20;
	//float weight = 95.6;
	//��ʽ��βf���ڷ�ֹ��double��float�ض�
	//printf("%f\n",weight);
	//printf("%d\n", age);

	//�ֲ�������ȫ�ֱ���
	//int c = 2;
	//printf("%d\n", c);

	////������ӣ���scanf
	//int a1 = 0;
	//int a2 = 0;
	//scanf("%d%d", &a1, &a2);//���뺯����scanf�ᱨ��
	////����1��ԭ��scanf��Ϊscanf_s���ڷ�ֹ���������ܲ�������VS����
	////����2����ǰ�����#pragma warning(disable:4996)
	////&��ȡ��ַ����,��ǰ�пո�ֵ����a1,a2
	//int sum = 0;
	//sum = a1 + a2;
	//printf("sum = %d\n", sum);

	////�ֲ�����(��������)����Ӧ{}�ڵ�{}Ҳ��Ч
	//int b1 = 2;
	//printf("%d\n", b1);
	//{
	//	printf("%d\n", b1);
	//}

	////ȫ�ֱ���extern��������
	//extern int e;
	//printf("%d\n", e);
	return 0;
}