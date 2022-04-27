/* 쉽게 풀어쓴 C언어 express 142 */

#include <stdio.h>
#define TAX_RATE 0.2 // #define을 이용한 기호상수 정의

int main(void) {

    const int MONTHS = 12;
    int m_salary, y_salary;

    printf("월급을 입력하시오 :");
    scanf("%d", &m_salary);

    y_salary = MONTHS * m_salary; // 순수입 계산
    printf("연봉은 %d입니다.\n", y_salary);
    printf("세금은 %d입니다.\n", y_salary * TAX_RATE);
    // MONTHS , TAX_RATE -> 기호 상수 사용

    return 0;

}