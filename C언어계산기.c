// 계산기 예제
#include<stdio.h>
 
int main( void ){
	int num1 = 0;
	int num2 = 0;
	int value = 0;
	char a = 0;
 
	printf( "수식을 입력하시오 : " );
	scanf( "%d %c %d",&num1,&a,&num2);
 
	switch(a){  
	case '+': 
		value = num1 + num2;
		printf( "%d %c %d = %d", num1, a, num2, value );
		break;
	case '-':
		value = num1 - num2;
		printf( "%d %c %d = %d", num1, a, num2, value );
		break;
	case '*':  
		value = num1 * num2;
		printf( "%d %c %d = %d", num1, a, num2, value );
		break;
	case '/':  
		printf( "%d/%d = %lf", num1, num2, (double)num1/num2 );
	    break;
	default:
		printf( "계산불가능" );
		break;

	}
 
	return 0;
}
//학번: 20179999
//이름: 전유현

//학번: 20161085
//이름: 전세희
