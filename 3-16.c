#include <stdio.h>

void main()
{
	int a, b;
	int num10,num16,num8;

	printf("�Է����� ���� <1>10 <2>16 <3>8 : ");
	scanf("%d", &a);

	printf("\n �� �Է� : ");

	if(a==1){
		scanf("%d", &b);
		printf("10���� ==> %d \n ", b);
		printf("16���� ==> %d \n", b);
		printf("8���� ==> %d \n", b);
	}
	else if(a==2){
		scanf("%x", &b);
		printf("10���� ==> %d \n ", b);
		printf("16���� ==> %d \n", b);
		printf("8���� ==> %d \n", b);
	}
	else if(a==3){
		scanf("%o", &b);
		printf("10���� ==> %d \n", b);
		printf("16���� ==> %d \n", b);
		printf("8���� ==> %d \n", b);
	}
}	
