// 계산기 예제
#include<stdio.h>
 
int main( void ){
	int num1 = 0;
	int num2 = 0;
	int value = 0;
	char a = 0;
 
	printf( "수식을 입력하시오 : " );
	scanf( "%f %c %f" );
 
	switch(0){  
	case '+': 
		value = num1 + num2;
		printf( "%d %c %d = %d", num1, a, num2, value );
	case '-':
		value = num1 - num2;
		printf( "%d %c %d = %d", num1, a, num2, value );
	case '*':  
		value = num1 * num2;
		printf( "%d %c %d = %d", num1, a, num2, value );
	case '/':  
		printf( "%d/%d = %lf", num1, num2, (double)num1/num2 );
	default:
		printf( "계산불가능" );
	}
 
	return 0;
}
//학번: 20179999
//이름: 전유현

//학번: 20170000
//이름: 홍길동
