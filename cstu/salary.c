/* 쉽게 풀어쓴 C언어 express  117 p*/ 

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void) {

    int ysalary;
    int msalary;

    printf("연봉을 입력하시오.(단위: 만원)");
    scanf("%d", &ysalary);


    msalary = ysalary/12;

    printf("월수령액(단위: 만원)%d\n", msalary);
    return 0;
}