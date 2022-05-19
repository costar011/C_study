/* 쉽게 풀어쓴 C언어 express 161 */

#include <stdio.h>

int main() {

   int x,y,z,sum;

   sum = 0;
   printf("3개의 정수를 입력하시오 (x,y,z): ");
   scanf("%d %d %d", &x &y &z);

   sum += x;
   sum += y;
   sum += z;

   printf("3개의 정수의 합은 %d\n", sum);


    return 0;

}