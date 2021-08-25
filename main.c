#include<stdio.h>
#include"op.h"
int main(){

	int a,b;
	printf("Enter the values a & b\n");
	scanf("%d %d",&a,&b);
	printf("%d %d\n",sum(a,b),sub(a,b));
	return 0;

}
