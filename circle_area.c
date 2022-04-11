/* 쉽게 풀어쓴 C언어 express  130 */ 

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void) {

    double radius;
    double area;

    printf("원의 면적을 입력하시오. :");
    scanf("%lf", &radius);

    area = 3.141592 * radius * radius;
    printf("원의 면적: %f \n",area);


    return 0;
}