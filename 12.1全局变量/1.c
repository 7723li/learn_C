#include <stdio.h>

int f(void);
int* g();

int gAll=12;// global gAll(会自动附0);

int main(int argc, char const *argv[])
{
	printf("in %s gAll = %d\n", __func__,gAll);
	f();
	printf("again in %s gAll = %d\n", __func__,gAll);printf("\r\n");

	int* p=g();
	printf("*p = %d\n", *p);
	return 0;
}

int f(void){
	static int all = 1;// 静态变量实际上是全局变量
	printf("%p,%p\n", &gAll,&all);// 00402000,00402004
	printf("in %s gAll,all = %d,%d\n", __func__,gAll,all);
	gAll += 2;
	printf("again in %s gAll = %d\n", __func__,gAll);
	all += 1;
	// return gAll;
}

int* g(){
	static int k = 24;
	return &k;
}
