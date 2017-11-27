#include <stdio.h>
#include <stdlib.h>

int main(void){
	int number,i;
	printf("input number:");
	scanf("%d",&number);

	/*C99之前*/
	/*动态分配:向系统申请number*sizeof(int)字节的内存*/
	/*malloc返回一个(void*)类型指针,需强制转换指针类型*/
	int* a;
	a = (int*)malloc(number*sizeof(int));
	/*void* b;
	b = malloc(100*1024*1024);
	b++;
	free(b);*/
	for(i=0;i<number;i++){
		// scanf("%d",&a[i]);
		a[i] = i;
	}
	printf("%d,%p\n", *a,a);/*如传进函数的数组，是以内存地址的方式存在*/
	printf("%d,%d\n", sizeof(a)/sizeof(a[0]),5);
	a++;
	free(a);/*归还分配到的内存*/
	printf("%d,%p\n", *a,a);
	printf("\r\n");

	/*C99之后*/
	int list[number];/*创建一个拥有number个int类型数据的数组*/
	int* l=list;/*数组可看作特殊的指针，地址不需加&*/
	for(i=0;i<number;i++){
		// scanf("%d",l);
		*l = i;
		l++;
	}
	printf("%d,%d\n", sizeof(list)/sizeof(list[0]),5);

	return 0;
}

