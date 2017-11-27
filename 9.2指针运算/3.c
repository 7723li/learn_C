/* 函数间传递指针*/
/*如果程序中要用到动态分配的内存，并且
会在函数之间传递，不要让函数申请内存
后返回给调用者*/
/*让调用者自己申请，传地址进函数，函数再返回这个地址出来*/
#include <stdio.h>
#include <stdlib.h>

int* init(int a[],int length);
int* print(int a[],int length);

int main(){
	const int MAX_SIZE = 1000;
	int size;
	do{
		printf("input a number(0,1000)");
		scanf("%d",&size);
	}while(size<0 || size>MAX_SIZE);

	int* a = (int*)malloc(size*sizeof(int));
	print(init(a,size),size);
	free(a);/*在同一个地方malloc和free*/

	return 0;
}

int* init(int a[],int length){
	int i;
	for (i=0;i<length;i++){
		a[i] = i;
	}
	return a;
}

int* print(int a[],int length){
	int i;
	for(i=0;i<length;i++){
		printf("%d\t",a[i]);
	}
	printf("\r\n");
	return a;
}
