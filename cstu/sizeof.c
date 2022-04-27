/* 쉽게 풀어쓴 C언어 express  132 */ 

#include <stdio.h>

int main(void) {

    int x;
    printf("변수 x의 크기: %d\n",sizeof(x));

    printf("char 크기: %d\n",sizeof(char));
    printf("int 크기: %d\n",sizeof(int));
    printf("short 크기: %d\n",sizeof(short));
    printf("long 크기: %d\n",sizeof(long));
    printf("long long 크기: %d\n",sizeof(long long));
    printf("float 크기: %d\n",sizeof(float));
    printf("double 크기: %d\n",sizeof(double));

    return 0;
}