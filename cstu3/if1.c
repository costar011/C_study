/* 쉽게 풀어쓴 C언어 express 228 */

#include <stdio.h>

int main(void) {

int number;

printf("정수를 입력하세요: ");
scanf("%d", &number);

if( number > 0)
    printf("양수입니다.");

printf("입력된 값은 %d입니다 \n", number);
return 0;

}