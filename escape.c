/*158쪽 */

#include <stdio.h>


int main(void) {

	int id, pass;

	printf("아이디와 패스워드를 4개의 숫자로 입력하세요. \n");
	printf("id: ____ \b\b\b");
	scanf("%d", &id);
	printf("pass: ____ \b\b\b");
	scanf("%d", &pass);

	printf("\a 입력된 아이디는 \" %d" "이고 패스워드는 \ " "%d" "입니다.", id, pass);
	return 0; // main() 함수 결과 값 확인
}


