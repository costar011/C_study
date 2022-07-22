/* 쉽게 풀어쓴 C언어 express 191 */


#include <stdio.h>

int main(void) {

    int x,y;

    printf("두개의 정수를 입력하시오 :");
    scanf("%d%d", &x, &y);


    printf("%d && %d의 결과값: %d\n", x , y, x && y);
    printf("%d || %d의 결과값: %d\n", x, y, x || y);
    printf("!%d의 결과값: %d\n", x, !y);

    return 0;

}