/* 쉽게 풀어쓴 C언어 express 288 */


// 반복을 이용한 세제곱 값 구하기
int main(void) {

int n;

printf("정수를 입력하시요. :");
scanf("%d", &n);

printf("================\n");
printf(" i     i의 세제곱\n");
printf("================\n");


for(i = 1; i <= n; i++) 
    
    printf("%5d %5d\n", i, i*i*i);


return 0;

}
