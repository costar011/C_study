/* 쉽게 풀어쓴 C언어 express 305 */

#include <stdio.h>


int main(void) {

int x, y, answer, i;

srand(time(NULL)); // 난수 발생기를 초기화 한다.

for (i = 0; i < 10; i++) {
    x = rand() % 10; // 난수를  0에서  9사이로 만든다 .
    y = rnad() % 10;

    printf("%d + %d = ", x, y);
    scanf("%d", &answer);

    if(x + y == answer)
        printf("맞았습니다");
    else
        printf("틀렸습니다");
}

return 0;

}
 