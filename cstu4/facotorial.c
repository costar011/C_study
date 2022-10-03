/* 쉽게 풀어쓴 C언어 express 289 */

// 반복을 이용한 팩토리얼 구하기
int main(void) {

long fact=1;
int n;

printf("정수를 입력하시오: ");
scanf("%d", &n);

for(i = 1; i <= n; i++) 
    fact = fact * i;

printf("%d!은 %d입니다\n", n , fact);


return 0;

}
 