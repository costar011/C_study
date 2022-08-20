/* 쉽게 풀어쓴 C언어 express 251 */

#include <stdio.h>

int main(void) {

int x,y,result;

printf("수식을 입력하시오(예 : 2 + 5):\n");
printf(">>>");
scanf("%d %c %d", &x, &op, &y);

switch(op) {

    case '+':
        result = x + y;

}

return 0;

}