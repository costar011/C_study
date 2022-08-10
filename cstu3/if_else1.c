/* 쉽게 풀어쓴 C언어 express 234 */

#include <stdio.h>

int main(void) {

int number;

printf("정수를 입력하세요: ");
scanf("%d", &number);

if( number % 2 == 0)
    printf("입력된 정수는 짝수 입니다.");
else    
    printf("입력된 정수는 홀수 입니다.");

return 0;

}