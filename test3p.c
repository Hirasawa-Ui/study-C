#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//ѭ�����
//int main()
//{
//	int line = 0;
//	printf("��Ϊ����Ա\n");
//	while (line < 20000)
//	{
//		printf("дһ�д���;%d\n",line);
//			line++;
//	}
//	if(line>=20000)
//	printf("�����ҵ�����Ա����\n");
//	return 0;
//}

//����
//add(int x, int y)//�Զ��庯��
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = add(num1, num2);
//	printf("sum =%d\n", sum);
//	sum = add(a, b);
//	printf("sum =%d\n", sum);
//	sum = add(2, 3);
//	printf("sum =%d\n", sum);
//
//	return 0;
//}

//����
//int main()
//{
//	int a1[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ�����10���������ֵ�����
//	//printf("%d\n", a1[4]);//�±�ķ�ʽ����Ԫ��
//	int t = 0;
//	while (t < 10)
//	{
//		printf("%d\n", a1[t]);
//		t++;
//	}
//	return 0;
//}

//������
//����������+ - * / %
//int main()
//{
//	int a = 5/2;
//	int b = 5 % 2;//ȡģ������
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//��λ������ �ƶ����Ƕ�����λ
//int main()
//{
//	int a = 1;
//	int b = 0;
//	b = a << 4;//����4λ
//	printf("%d\n", b);
//	return 0;
//}

//λ������   &  ^ |    ����������λ  &��λ��  ^��λ���    |��λ�� 
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	int c = a & b;//0 1 1 & 1 0 1  =0  0  1
//	int d = a | b;// 0 1 1 | 1 0 1 = 1  1  1
//	int e = a ^ b;//���������  ��ͬλ0  ����Ϊ1
//	b = a << 4;//����4λ
//	printf("%d\n", b);	
//			printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//	return 0;
//}


//��ֵ������ =  += -=   *=   /=  &=   |=   ^=   >>=    <<=