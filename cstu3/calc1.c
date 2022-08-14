/* 쉽게 풀어쓴 C언어 express 242 */

#include <stdio.h>

int main(void) {

char op;
int x,y,result;

printf("수식을 입력하세요: ");
scanf("%d %c %d", &x, &op);

if( op == '+')
    result = x + y;
else if( op == '-')
    result = x - y;
else if( op == '*')
    result = x * y;
else if( op == '/')
    result = x / y;
else if( op == '%')
    result = x % y;
else
    printf("지원되지 않는 연산자 입니다.\n");


printf("&d %c %d = %d\n", x, op, y, result);        

return 0;

}