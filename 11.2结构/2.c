/*用->表示指针所指的结构变量中的成员*/
#include <stdio.h>
#include <malloc.h>
struct point{
	int x;/*类似Python类中的属性*/
	int y;
};

struct rectangle{
	struct point p1;
	struct point p2;
};/*嵌套的结构*/

struct point getStruct(void);/*类似Python类中的方法*/
struct point* getStruct1(struct point*);
void print(struct point p);
void output(const struct point* p);

int main(){
	struct point y ={0,0};

	y = getStruct();
	print(y);
	output(&y);

	printf("\r\n");

	print(*getStruct1(&y));/*传入结构本身*/
	output(&y);/*传入结构地址*/

	struct point* test = &y;/*指向结构的指针,结构变量指针test指向结构变量y的地址*/
	printf("same:%d,%d\n", test->x, (*test).x);
	
	char* str = "hello";
	printf("%c\n", str[0]);

	struct point y1[5]={
		{0,0},{1,1},{2,2},{3,3},{4,4}/*结构中的结构*/
	};
	struct rectangle *rp,r;
	r.p1.x = 100;r.p1.y = 101;

	// (rp->p2).x = 200;(rp->p2).y = 201;/*Error*/
	rp = (struct rectangle*)malloc(sizeof(struct rectangle));/*结构指针需先分配空间，才可以赋值*/
	printf("%d\n",sizeof(struct rectangle));
	rp->p2.x=200;rp->p2.y=200;
	free(rp);

	printf("%p,%p\n",r.p1.x,rp->p1.x);/*Error时00000064,909090C3*/
	printf("%d,%d\n", r.p1.x,r.p1.y);

	printf("%d,%d\n", (*rp).p2.x,rp->p2.y);
	
}

struct point getStruct(void){
	struct point p;/*重新定义一个同样结构类型的结构变量*/
	scanf("%d",&p.x);
	scanf("%d",&p.y);
	return p;/*返回结构变量*/
};

struct point* getStruct1(struct point* p){
	scanf("%d",&p->x);/*在结构变量的地址上更改结构变量的值*/
	scanf("%d",&p->y);
	return p;
}

void print(struct point p){
	printf("%d,%d\n", p.x,p.y);
}

void output(const struct point *p){
	printf("%d,%d\n", p->x,p->y);
}
