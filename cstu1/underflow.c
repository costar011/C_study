/* 쉽게 풀어쓴 C언어 express 152 */

#include <stdio.h>

int main(void) {

    float x = 1.23456e-38;
    float y = 1.23456e-40;
    float z = 1.23456e-46;

    printf("float의 크기=%d\n", sizeof("float"));
    printf("double의 크기=%d\n",sizeof("double"));

    printf("x = %e\n",x);
    printf("y = %e\n",y);
    printf("z = %e\n",z);

}