/* 쉽게 풀어쓴 C언어 express 269 */


#include <stdio.h>

int main(void) {

int i,n,sum;

printf("정수를 입력하시오.");
scanf("%d", &n);

while(i <= n) {
    sum += i;
    i = i + 2;      // i += 2;로 하여도 된다.

}

printf("1부터 %d까지의 짝수합은 %d입니다.\n");
return 0;

}
