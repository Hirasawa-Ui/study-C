#define _NO_SAFETY_WORNINGS 

#include <stdio.h>
#include <string.h>


//Max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 1;
//	int max = 0;
//	/*if (num1 > num2)
//		printf("�ϴ�ֵ��num1");
//	else
//		printf("�ϴ�ֵ��num2");
//	return 0;*/
//	max = Max(num1, num2);
//	printf("%d\n", max);
//		return 0;
//}


//~��һ�����Ķ����ư�λȡ��
//int main()
//{
//	int a = 0;
//	int c = 1;
//	int d = -1;
//	int e = ~c;
//	int f = ~d;
//	int b = ~a;
//	printf("%d\n", ~a);
//	printf("%d\n", b);
//	printf("%d\n", e);
//	printf("%d\n", f);
//	ԭ�롢���롢���� ԭ�����Ϊ���䣬����λȡ���õ�����    �����1�õ�����
//	�������ڴ��д洢ʱ���洢���Ƕ����ƵĲ���   �����Ƶ����λ��������
//	00000000000000000000000000
//	11111111111111111111111111
//	
//	return 0;
//}

//--  ++
//int main()
//{
//	int a = 10;
//	int b = a++;//����++����ʹ�ã���++
//	int c = ++a;
//	printf("a = %d,b =%d,c =%d\n", a, b,c);
//	return 0;
//}

//*��ӷ��ʲ�����

//�����ͣ�ǿ������ת��
//int main()
//{
//	int a = (int)3.14;///double -->int
//		return 0;
//}

//�߼�������
//&&�߼���
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("c = %d\n", c);
//	return 0;
//}
////�߼���||
//int main()
//{
//	int a = 0;
//	int b = 6;
//	int c = a || b;
//	printf("c= %d\n ",c);
//	return 0

//����������   exp1?exp2:exp3
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	printf("max = %d\n", max);
//	return 0;
//}

//���ű��ʽ

//�±�����[]����������()���ṹ��Ա
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4];
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	return 0;
//}
//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//����---ԭ�룬���룬������ͬ
//����
//ԭ��                     ����                      ����
//ֱ�Ӱ�������           ԭ��ķ���λ����           �����һ
//д������������         ����λȡ��   
//-2
//1000 0000 0000 0000 0000 0000 0000 0010  - ԭ��
//1111 1111 1111 1111 1111 1111 1111 1101  - ����
//1111 1111 1111 1111 1111 1111 1111 1110  - ����

//�����ؼ���
int main()
{
	int a = 10;//�ֲ����� - �Զ����� - auto������
	//break �˳�ѭ��   externyinru �ⲿ���� register�Ĵ���
}