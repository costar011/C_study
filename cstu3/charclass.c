/* 쉽게 풀어쓴 C언어 express 240 */

#include <stdio.h>

int main(void) {

char ch;

printf("문자를 입력하세요: ");
scanf("%c", &ch);

if( ch >= 'A' && ch <= 'Z')
    printf("%c는 대문자 입니다.\n", ch);
else if(ch >= 'a' && ch <= 'z')    
    printf("%c는 소문자 입니다.\n", ch);
else if(ch >= '0' && ch <= '9')    
    printf("%c는 숫자 입니다.\n", ch);

return 0;

}