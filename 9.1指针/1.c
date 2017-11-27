#include <stdio.h>

int divide(int i,int j,int *s){
	int ret =0;
	printf("s=%d\n", *s);
	if (j==0){
		return ret;
	}
	else{
		ret =1;
		*s = i/j;/*更改内存中的值*/
	}
	return ret;
}

int swap(int* a, int *b){
	// 应用内存地址来交换地址对应的值
	int t;
	t = *a;*a = *b;*b = t;
}

int t(int *l,int length){/*数组变量是特殊的const指针*/
	int i;
	printf("\n");
	printf("l=%p\n", l);/*传进来的默认是数组的首项，即int *l=&l[0]参考main,0022FF00*/
	printf("*l=%d\n", *l);/*1,首地址对应的值*/
	for (i=0;i<length;i++){
		printf("%d ", l[i]);/*success,l还是数组类型*/
	}

}

int k(int *p){
	printf("\n");
	printf("i=k=%d\n", *p);/*10*/
}

int f(int *p){
	printf("\n");
	printf("p=%p\n", p);/*0022FF3C*/
	printf("&p=%p\n", &p);/*0022FFC0*/
	printf("*p=%d\n", *p);/*233*/
	*p = 10;/*更改内存中的值*/
}

int main(void){
	int i=233,j=26,s=0;
	int l[10] ={1,2,3,4,5,6,7,8,9,10};/*int * const l[]*/
	int* q = &i;

	printf("q=%p\n",q);/*0022FF3C*/
	printf("&i=%p\n", &i);/*0022FF#3C*/
	printf("&l=%p\n", &l);/*0022FF00，这样取地址默认为取数组的首项的地址*/
	printf("&l[0]=%p\n", &l[0]);/*0022FF00*/

	f(&i);
	k(&i);
	t(l,sizeof(l)/sizeof(l[0]));

	swap(&i,&j);printf("\ni=%d j=%d\n",*(&i),j );/*i等于*(&i)*/
	if(divide(i,j,&s)){
		printf("%d/%d=%d\n",i,j,s);
	}

	return 0;
}
