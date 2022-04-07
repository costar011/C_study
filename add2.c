/* 쉽게 풀어쓴 C언어 express */

/*
    116P 

    사용자로부터 입력받은 2개의 정수의 합을 계산하여 출력 

*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    int x;
    int y;
    int sum;

    printf("첫 번쨰 숫자를 입력하시오.");
    scanf("%d",&x);


    printf("ㄷㅜ 번쨰 숫자를 입력하시오.");
    scanf("%d",&y);

    sum = x + y;
    
    printf("두 수의 합 : %d\n", sum);

  

    return 0;
} 