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
	//	printf("%c\n",ch[i] );//这里如果字符类型写错也可以运行，且不会报错，但结果只会显示100
	//	i++;
	//}
	printf("计算数组内数据的个数");
	int arr2 [20]={0};
	int b = sizeof(arr2) / sizeof(arr2[0]);
	printf("arr2内元素个数:%d\n", b);
	printf("---------------------\n");
	int c = 0;
	printf("%d\n", ~c);
	int d = 2147483647;//二进制是01111111 11111111 11111111 11111111
	printf("%d\n", ~d);
	int e = ~d;
	int f = 0 - 1;
	printf("%d\n", f);

 	return 0;
}