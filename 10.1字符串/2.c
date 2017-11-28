/*避免了使用大幅度的switch*/
#include <stdio.h>

int print(char const *l[]){
	int month;
	do{
		printf("input the month:");
		scanf("%d", &month);
	}while(month<0 || month >12 );
	printf("%s\n", l[month-1]);
}

int main(){
	char* a[]={
		"January","Febery","March",
		"Apile","May","June",
		"July","August","September",
		"October","November","December"
	};/*和char* a[]一样为只读*/
	print(a);

	char* a1="1dflkgh;dsfhg;lsdfg'lsdjfho";
	printf("%p\n", a1);

	return 0;
}

