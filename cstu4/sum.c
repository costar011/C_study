/* 쉽게 풀어쓴 C언어 express 269 */


#include <stdio.h>

int main(void) {

int i,n,sum;

printf("정수를 입력하시오.");
scanf("%d", &n);

while(i <= n) {
    sum += i;
    i = i + 2;

}

return 0;

}