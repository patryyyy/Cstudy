#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr[10]));
	//int a = 10;
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(int));
	//return 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	return 0;
}




/*
int main() {
	//int a = 10;
	//int b = 20;
	//a + b;
	int a = -2;
	printf("%d\n", a);
	printf("%d\n", !a);
	return 0;
}
*/


/*
int main() {
	int a = 10;
	a = 20;
	a = a + 10;
	a += 10;
	a *= 10;
}
*/

/*
int main(){
	int a = 3;
	int b = 5;
	int c = a ^ b;
	printf("%d\n", c);
	return 0;
}
*/


/*
int main() {
	int a = 1;
	int b = a << 1;
	printf("%d\n", b);
	printf("%d\n", a);
	return 0;
}
*/


/*
int main() {
	int a = 5 % 2;
	printf("%d\n", a);
	return 0;
}
*/

/*
int main() {
	int arr[10] = {1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10) {
		printf("%d\n", arr[i]);
		i++;
	}
}
*/



/*
Add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}


int main() {
	int num1 = 10;
	int num2 = 20;
	int sum = 0;
	sum = Add(num1, num2);
	printf("%d", sum);
	return 0;
}
*/




/*
int main() {
	int person = 0;
	printf("你TM劈我瓜是吧？\n");

	while (person<=20000) {
		printf("撒%d人了\n",person);
		person++;
	}
	if (person >= 20000) {
		printf("哎，华强\n");
	}
	return 0;
}
*/



/*
int main() {
	char input;
	printf("Oh Yeah~\n[y/N]:");
	scanf("%c", &input);
	if (input == 'y') {
		printf("Don't Touch Me There");
	}
	else {
		printf("Don't Stop");
	}
	return 0;
}
*/


//int main() {
//
//	//int a = 10;
//
//	return 0;
//}





/*
int main() {
    printf("%c\n", '\x61');
	//printf("%c\n", '\32');
	//printf("%d\n", strlen("c:\test\32\test.c"));
	return 0;
}
*/




/*
int main() {
	//printf("D:\\VS 2019代码\\Cstudy\\test_7_19\\test_7_19\\test.c");
	printf("%s\n","\"\"");
	return 0;
}
*/


/*
int main() {
	printf("abc\n");
	return 0;
}
*/



/*
int main() {
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0'};
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}
*/





/*
int main() {
	char arr1[] = "abc";//数组
	char arr2[] = { 'a','b','c','\0'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);

	return 0;
}
*/


/*
int main() {
	"Patrick";
	"Hello,World!";
	"";//空字符串
	return 0;
}
*/

/*
enum Color {
	RED,
	GREEN,
	BLUE
};
int main() {
	enum Color color = BLUE;
	color = GREEN;
	//BLUE = 6;
	return 0;
}
*/

/*
//枚举常量
enum Sex {
	BOY,
	GIRL,
	SECRET
};

int main() {
	//enum Sex s = BOY;
	printf("%d\n", BOY);
	printf("%d\n", GIRL);
	printf("%d\n", SECRET);
	return 0;
}
*/


/*
#define MAX 10
int main() {
	int arr[MAX] = { 0 };
	printf("%d\n", MAX);
	return 0;
}
*/

/*
int main() {
	//const int n = 10;
	int arr[10] = { 0 };
	//n = 20;
	return 0;
}
*/


/*
int main() {
	//const - 常属性
	//const修饰的常变量
	const int num = 9;
	printf("%d\n", num);
	//num = 8;
	printf("%d\n", num);
	printf("%s", URL);
	return 0;
}
*/


/*
int main() {
	//两数相加
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	int sum = num1 + num2;
	printf("sum = %d", sum);
	return 0;
}
*/