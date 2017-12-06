#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE *fp = fopen("1.in","x");
	if(fp){
		int num;
		fscanf(fp,"%d",&num);
		printf("%d\n", num);
		fclose(fp);
	}else{
		printf("can not open file");
	}

	return 0;
}
