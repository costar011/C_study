/* 쉽게 풀어쓴 C언어 express  135 */ 

// 정수 자료형을 사용하는 프로그램

#include <stdio.h>

int main(void) {

    short year = 0;
    int sale = 0;
    long total_sale = 0;
    long long large_value; // 64비트 정수형

    year = 10;
    sale = 200000000;
    total_sale = year * sale;

    printf("total_sale = %d\n", total_sale);
    return 0;
}