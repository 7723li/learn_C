#include <stdio.h>

int main(){
	/*sizeof(char)=1,sizeof(int)=4*/
	char a[]={0,1,2,3,4,5,6,7,8,9};
	char* p = a;char* p1 = &a[5];
	printf("&p=%p\n",&p);/*0022FF2C*/
	printf("p=%p,p1=%p\n",p,p1);/*0022FF30,0022FF35*/
	printf("*p=%d\n",*p);/*0*/
	printf("p+1=%p\n",p+1);/*0022FF31*/
	printf("*(p+1)=%d\n",*(p+1) );/*1*/
	printf("p1-p=%d\n", p1-p);/*5*/
	/*两地址相减除以sizeof，即两元素之间存在多少个同类型的元素*/
	printf("\r\n");
	/*指针+1实际上是加sizeof(类型),
	即向内存地址右移一位的值*/
	// *(p+n) <-->p[n],*(p++)==*p++<-->p[下一位]
	
	int b[]={0,1,2,3,4,5,6,7,8,9},c=10;
	int* q = b;int *q1 = &b[5];
	int* t = &c;/*数组与整型的不同*/
	printf("q=%p,q1=%p,t=%p\n",q,q1,t);/*0022FEF0,0022FF04,0022FEEC*/
	printf("q+1=%p\n",q+1);/*0022FEF4*/
	printf("*(q+1)=%d\n",*(q+1));/*1*/
	printf("q1-q=%d\n", q1-q);/*5*/

	int* tt = &c;
	printf("%p\n", tt);

	return 0;
}
