/* 쉽게 풀어쓴 C언어 express 295 */

// 중첩 for 문을 이용하여 * 기호를 사각형 모양으로 출력하는 프로그램
int main(void) {

int x, y;

for(y = 1; y <= 5; y++){
    for(x = 0; x < y; x++)
    printf("*");

    printf("\n") // 내부 반복문이 종료될 때마다 실행
}

return 0;

}
 