/* 쉽게 풀어쓴 C언어 express 159 */


#include <stdio.h>

int main(main) {
    int id, pass;

    printf("아이디와 패스워드를 4개의 숫ㅏ로 입력하시오.:\n");
    printf("id ____\b\b\b\b");
    scanf("%d",&id);
    printf("pass ____ \b\b\b\b");
    scanf("%d", &pass);
    printf("\a 입력된 아이디는 \"%d \"이고 패스워드는 \"%d \"입니다\n", id, pass);
    return 0;

}