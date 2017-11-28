#include <stdio.h>
enum colors{red,yellow,green,NumColors};

int main(int arg,char const *l[]){
	int num = -1;
	char color[10];

	printf("what's your favorite color?");
	scanf("%10s",color);

	enum colors colorName = red;
	printf("your favorite color is at num %d\n",colorName);

	return 0;
}
