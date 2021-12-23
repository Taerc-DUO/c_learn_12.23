#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//用于strlen语句，该语句作用是计算字符串的长度
int main()
{
	char arr1[] = "abcd";
	char arr2[] = { 'a','b','c','d','\0' };
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	char arr4[] = { 'a','b','c','d' };
	int len1= strlen(arr1);
	int len2= strlen(arr2);
	int len4= strlen(arr4);//因为没有停止符打印出数字结果会是随机数
	printf("%d\n", len1);
	printf("%d\n", len2);
	printf("%d\n", len4);
	return 0;
}
