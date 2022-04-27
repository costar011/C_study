/* 쉽게 풀어쓴 C언어 express */

/* 정수 간의 가감승제를 계산하는 프로그램*/

#include <stdio.h>

int main(void)
{
    int x;                      // 1번쨰 정수를 저장할 변수
    int y;                      // 2번쨰 정수를 저장할 변수
    int sum,diff,mul,div         // 두 정수 간의 연산의 결과를 저장하는 변수

    x = 20;     // 변수 x에 2 저장.
    y = 10;     // 변수 y에 10 저장.

    sum = x + y;
    diff = x - y;
    mul = x * y;
    div = x / y;

    printf("두 수의 합: %d", sum);
    printf("두 수의 차: %d", diff);
    printf("두 수의 곱: %d", mul);
    printf("두 수의 몫: %d", div);



    return 0;
}