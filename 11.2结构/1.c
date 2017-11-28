#include <stdio.h>

struct date{
		int year;
		int month;
		int day;
}tomorrow,day;/*声明结构并定义两个结构变量*/

struct {
	int x;
	int y;
}p1,p2;/*只需要两个结构*/

int main(){
	/*定义结构变量的四种方法*/
	struct date today;/*声明结构的形式,名未today的date结构变量*/
	today.month = 07;today.day = 31;today.year = 2014;

	struct date yesterday={2014,07};/*2014-7-0*/

	tomorrow = (struct date){2014,8,01};

	day = today;day.year = 2017;

	printf("%d-%d-%d\n", 
		today.year, today.month, today.day);
	printf("%d-%d-%d\n", 
		yesterday.year, yesterday.month, yesterday.day);
	printf("%d-%d-%d\n", 
		tomorrow.year, tomorrow.month, tomorrow.day);
	printf("%d-%d-%d\n", 
		day.year, day.month, day.day);

	printf("\r\n");

	struct date* p = &today;
	printf("%p\n", p);

	return 0;
}
