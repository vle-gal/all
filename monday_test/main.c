#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void test2(char *str, char *src)
{
	int i;

	i = 0;
	// printf("-%c\n", src[i]);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
}

// void test

void test1(char *str_a)
{

	char str_b[10];
	test2(str_b, str_a);
	// str_b[0] = str_a[0];
	// str_b[1] = str_a[1];
	// str_b[2] = str_a[2];
	printf("+%s, %s\n", str_a, str_b);
	str_a[0] = '4';
}

int main(void)
{
	char **str3[10];
	char *str2[10];
	char str_a[10];
	t_struct  para;
	// para = NULL;
	// char str_b[10];

	// str_a[0] = '4';
	// str_a[1] = '2';
	// para.i = 0;
	// para.i = 1;
	// printf("%d\n", para.i);
	// str_a[2] = '\0';
	test2(str_a, "test");
	str2[0] = str_a;
	// str_b[0] = 'f';
	// str_b[1] = 'u';
	// str_b[2] = '\0';
	test2(str2[0], str_a);
	test1(str_a);
	printf("%s\n", str_a);
	printf("|%s\n", str2[0]);
	test2(str3[0][0], str2[0]);
	printf("|%s\n", str3[0][0]);
	// str2[0] = str_a;
	// printf("%s\n", str2[0]);
	// str2[1] = str_b;
	// str2[2][0] = '\0';
	// str3[0] = str2;
	// str3[1][0][0] = '\0';
	// printf("%s\n", str3[0][0]);
	// printf("%s\n", str3[0][1]);


}
