#define _hope_no_warnings

#include <stdio.h>

//����������

//int main()
//{
//	////����2���ֵĺ�
//	//int num1 = 0;
//	//int num2 = 0;
//	//int sum = 0;
//	////��������-ʹ�����뺯��scanf
//	//scanf("%d",&num1); //ȡ��ַ���� &
//	//sum = num1 + num2;
//	//printf("sum=%d\n", sum);
//	//	return 0;
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//		scanf_s("%d%d",&num1,&num2);
//		sum = num1 + num2;
//		printf("sum= %d\n",sum);
//		return 0;
//}

//�������������������
//�����򣬳�����Ƶĸ��ͨ����˵��һ�γ�����������õ������ֲ���������Ч��
//�޶�������ֵĿ����ԵĴ��뷶Χ����������ֵ����������������������þ�����������������


//es1
//int main()
//{
//	int num = 0;
//	printf("num = %d\n", num);
//		return 0;//����num��������{}��
//}

//es2F
//int main()
//{
//	{
//		int num = 0; 
//	}
//	printf("num = %d\n", num);
//	return 0;//����num����������{}��
//}

//es3
//int main()
//{
//	{
//		int num = 0; 
//		printf("num = %d\n", num);
//	}
//	return 0;//����num����������{}��
//}

//es4
//int main()
//{
//	int num = 0;
//	{
//		printf("num = %d\n", num);
//	}
//	return 0;//����num����������{}��
//}

//ȫ�ֱ����Ķ�����
//int global = 2021;
//void test()
//{
//	printf("test()--%d\n",global);
//}
//
//int main()
//{
//	test();
//	printf("%d\n", global);
//	return 0;
//}

//es1F ��ͬԴ�ļ����ñ���
//int main()
//{
//	//δ������ʶ��
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

//es2  ȫ�ֱ���������������������
//int main()
//{
//	//δ������ʶ��
//	extern int g_val;//����extern�ⲿ����
//	printf("g_val = %d\n", g_val);
//	return 0;
//}


//��������
//int a = 30;
//int main()
//{
//	int a = 20;
//	{
//		int a = 10;
//		printf("a = %d\n", a);
//	}
//	printf("a = %d\n", a);
//	return 0;//�ֲ��������������ڽ����������������ڿ�ʼ�����������������ڽ���
//	             //ȫ�ֱ��������������ǣ������������������
//}
//ȫ�ֱ�����������
int a = 30;
int main()
{
	int a = 20;
	{
		int a = 10;
		printf("a = %d\n", a);
	}
	printf("a = %d\n", a);
	return 0;//�ֲ��������������ڽ����������������ڿ�ʼ�����������������ڽ���
				 //ȫ�ֱ��������������ǣ������������������
}