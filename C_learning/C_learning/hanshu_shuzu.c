#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//int i = 0;
	//int arr1[10] = { 100,101,102,103,104,105,106,107,108 };
	//char ch[5] = { 'a','b','c','d' };
	//while (i < 10)
	//{
	//	printf("%d\n", arr1[i]);
	//	printf("%c\n",ch[i] );//��������ַ�����д��Ҳ�������У��Ҳ��ᱨ�������ֻ����ʾ100
	//	i++;
	//}
	printf("�������������ݵĸ���");
	int arr2 [20]={0};
	int b = sizeof(arr2) / sizeof(arr2[0]);
	printf("arr2��Ԫ�ظ���:%d\n", b);
	printf("---------------------\n");
	int c = 0;
	printf("%d\n", ~c);
	int d = 2147483647;//��������01111111 11111111 11111111 11111111
	printf("%d\n", ~d);
	int e = ~d;
	int f = 0 - 1;
	printf("%d\n", f);

 	return 0;
}