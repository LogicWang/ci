/*************************************************************************
    > File Name: ./line_count.c
    > Author: P.W
    > Mail: mangobada@163.com 
    > Created Time: 2017年01月09日 星期一 23时50分59秒
	> count lines in input
 ************************************************************************/

#include<stdio.h>
main() {
	int c, nl;
	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n", nl);
}
