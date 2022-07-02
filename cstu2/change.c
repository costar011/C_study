/* 쉽게 풀어쓴 C언어 express 180 */

#include <stdio.h>

int main(void) {

    int user, change = 0;
    int price, c5000, c1000, c500, c100;

    printf("물건 값을 입력하시오.");
    scanf("%d", &price);

    printf("사용자가 낸 돈: ");
    scanf("%d", &user);

    change = uesr - price;

    c5000 = change / 5000;
    change = change % 5000;

    c100 = change / 1000;
    change = change % 1000;

    c500 = change / 500;
    change = change % 500;

    c100 = change / 100;
    change = change % 100;

    printf("오천원권: ");
    printf("");
    printf("");
    printf("");
    
    return 0;

}