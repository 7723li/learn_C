// 字符串是一个特殊的数组
// 务必参考1.jpg
#include <stdio.h>
#include <strings.h>

// 构造一个字符串 -->数组(可修改)
// 处理一个字符串 -->指针(只读)
int main(){
	// C的字符串是以字符数组的形态存在，必须以'\0'结尾，否则仅为数组
	// 编译器生成如此数组{'H','e','l','l','o','\0'};
	char* str = "Hello";
	char* str1 = "Hello";
	char str2[] = "Hello";
	int i = 10;

	// str[0] = 'B';/*Error*/
	printf("%p\n",str);/*00403000*/
	printf("%p\n", str1);/*00403000*/
	printf("%c,%p\n", str2[0],str2);/*H,0022FF20*/
	printf("%p\n", &i);/*0022FF1C*/

	str2[0] = 'B';
	printf("%c\n", str2[0]);/*B*/

	char word[8];char word2[8];
	printf("%p,%p\n",word,word2 );/*0022FF10,0022FF08*/
	scanf("%7s",word);/*hello world*/
	scanf("%7s",word2);
	printf("%s##\n",word);/*hello##*/
	printf("%s##\n",word2);

	char** a;/*a是一个指针，指向另一个(如b)指针，b指针指向一个地址(一个字符(串))*/
	char a1[][10]={"hello"};/*a是一个可包含n个 十个字节长度的字符串 的二维数组*/
	char* a2[] = {};/*a[0] = char*/

	return 0;
}
