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
int main()
{
	int a = 10;
	int b = a++;//����++����ʹ�ã���++
	int c = ++a;
	printf("a = %d,b =%d,c =%d\n", a, b,c);
	return 0;
}