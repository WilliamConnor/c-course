#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////�����֧��if
//int main()
//{
//	int a = 7;//�ж�aֵ�Ĵ�С
//	if (a > 10)
//		printf("a>10");
//	else if (a > 5)
//		printf("5<a<10");
//	else 
//		printf("a<=5");
//	return 0;
//}



////����Ϊ����&&��if�е��÷�����{}�����ʾ��
//int main()
//{
//	int age = 27;//�ı�����ageֵ�õ���ͬ���
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)
//	{//����飬��{}�����������ܱ�֤if��else������
//		printf("����\n");
//		printf("�ú�ѧϰ\n");
//	}
//	else if (age >= 28 && age < 48)
//		printf("׳��\n");
//	else 
//		printf("����\n");
//	return 0;
//}



////���1-100֮�������
////(�ӿ��㷨i+=2)
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (1 == i % 2)
//			printf("%d ", i);
//		i++;	
//	}
//	return 0;
//}



////switch��䣬ע�ض��֧
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch������ͱ��ʽ��ֵΪ���ͽ�case��
//	{
//	case 1:
//		printf("����һ\n");
//		break;//breakֱ�����������case
//	case 2://�������������case��֮���case����ִ��
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break; 
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//	}
//	return 0;
//}




////switch��䣬��ȫ��break����
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:	
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("������1~7֮�������\n");
//		break;
//	}
//	return 0;
//}



////switchǶ�ײ���(������ϰ)
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)//����switchǶ�ף�ע��{}
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);//��m=5,n=3
//	return 0;
//}



////ѭ�����while��ӡ1~10����break����ѭ���ķ���
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//		{
//			break;//����ѭ��
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0; 
//}



////continue���ط�while����
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//		{
//			continue;//�ص�while,��ѭ��
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}



////getchar��ȡ�û������ַ���putchar��ӡ�ַ�
//int main()
//{
//	int ch = getchar();//�û������ַ�
//	putchar(ch);//��ͬ��printf
//	printf("%c", ch);
//	return 0;
//}