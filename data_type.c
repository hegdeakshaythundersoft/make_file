#include<stdio.h>
int main(){

	char c='a';
	signed char sc=128;// -128 will be eqivalent value as 7 bits used to keep value & 1 bit for sign//
	unsigned char uc=255;// 256 as all 8 bits hold value//
	
	int i=1;
	unsigned int ui=2147483648;//all 32 bits used to hold value //
	signed int si=4294967236;//si=-(2^63-1) as 1 bit for sign and other 31 bits for value 2^31//
	short sh=32768;//16 bits used for value//
	signed short ssh=32768;//-1 as 1 bit for sign 15 bits used for value//
	unsigned short ush=32768;//16 bits used for value//
	long ln=4294967236;//all 32 bits used for value//
	
	float f=2.3;//decimal value of 32 bits or 4 byte size//
	double d=2^63;//8 byte size large number//
	long double ld=2^63;//16 byte size large number//
/*
all the 4 data types in c are declared,defined and initialized in the above lines
character and integer can be signed/unsigned as they are declaration specifiers but double and float are by default signed
*/
	printf("Data type :\tcharacter\nSize:\t1 byte/8 bits\n");
	printf("char c=%c\t size:%lu\nsigned char sc=%d\tsize:%lu\nunsigned char uc=%d\tsize:%lu\n",c,sizeof(c),(int)sc,sizeof(sc),(int)uc,sizeof(uc));
	printf("\n\n");
	printf("Data type :\tinteger\nSize:\t4 bytes/32 bits\n");
	printf("int i=%d\t size:%lu\nsigned int si=%d\tsize:%lu\nunsigned int ui=%d\tsize:%lu\n",i,sizeof(i),si,sizeof(si),ui,sizeof(ui));
	printf("\n");
	printf("Declaration specifier :\tshort\nSize:\t2 bytes/16 bits\n");
	printf("short sh=%hd\t size:%lu\nsigned short ssh=%hd\tsize:%lu\nunsigned short ush=%hd\tsize:%lu\n",sh,sizeof(sh),ssh,sizeof(ssh),ush,sizeof(ush));
	printf("\n");
	printf("Declaration specifier :\tlong\nSize:\t8 bytes/64 bits\n");
	printf("long ln=%ld\t size:%lu\n",ln,sizeof(ln));
	printf("\n\n");
	printf("Data type :\tfloat\nSize:\t4 bytes/32 bits\n");
	printf("float f=%f\t size:%lu\n",f,sizeof(f));
	printf("\n\n");
	printf("Data type :\tdouble\nSize:\t8 bytes/64 bits\n");
	printf("double d=%lf\t size:%lu\n",d,sizeof(d));
	printf("\n");
	printf("Declaration specifier :\tlong double\nSize:\t16 bytes/128 bits\n");
	printf("long double ld=%Lf\t size:%lu\n",ld,sizeof(ld));






return 0;}
