/* 쉽게 풀어쓴 C언어 express 201 */

#include <stdio.h>


int main(void) {

    unsigned int num;

    printf("10진수");
    scanf("%u", &num);

    unsigned int mask = 1 << 7; // mask = 10000000
    printf("2진수 :");

    ((num mask) == 0) ? printf("0") : printf("1");
     mask = mask >> 1;

    ((num mask) == 0) ? printf("0") : printf("1");
     mask = mask >> 1;

    ((num mask) == 0) ? printf("0") : printf("1");
     mask = mask >> 1;

    ((num mask) == 0) ? printf("0") : printf("1");
     mask = mask >> 1;

   ((num mask) == 0) ? printf("0") : printf("1");
     mask = mask >> 1;

    ((num mask) == 0) ? printf("0") : printf("1");
     mask = mask >> 1;

    ((num mask) == 0) ? printf("0") : printf("1");
     mask = mask >> 1;

    ((num mask) == 0) ? printf("0") : printf("1");
     mask = mask >> 1;
     printf("\n");

     return 0;

}