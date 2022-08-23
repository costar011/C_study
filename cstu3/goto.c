/* 쉽게 풀어쓴 C언어 express 253 */


// 구구단 출력 시스템
#include <stdio.h>

int main(void) {

int i = 1;

// loop라는 이름의 레이블을 현 위치에 정의한다.
loop:
    printf("%d * %d = %d\n", 3, i, 3*i);
    i++;
    if(i == 10) goto end; // i가 10이 되면 레이블 end로 점프한다.
    goto loop; // 레이블 loop로 점프한다.

end:
    return 0;

}