#include <stdio.h>

void print(){
	// %[flags][width][.prec][hlL]type
	
	/*flags*/
	printf("%9d\n", 123);
	printf("%-9d\n", 123);// 左对齐
	printf("%+9d\n", 123);// 前面要有+号或减号
	printf("%09d\n",123);// 0填充

	/*width 或 prec*/
	printf("%*d\n", 6, 123);// 下一个参数是字符数(共六位字节,前三位是空格)
	printf("%9.2f\n", 123.0);

	/*hlL*/
	printf("%hhd\n", 12345);

	int num;
	printf("%dty%n\n", (char)12345, &num);
	printf("%d\n", num);
}

int input(){
	int num;
	scanf("%*d,%d",&num);
	printf("%d\n", num);
	scanf("%*[~]");
}

int main(){
	// print();
	// input();
	int num;
	int i1=scanf("%i",&num);
	int i2=printf("%d\n", num);
	printf("%d:%d\n", i1,i2);
	return 0;
}
