/* 쉽게 풀어쓴 C언어 express 214 */

#include <stdio.h>

int main(void) {

double f_temp;
double c_temp;

printf("화씨온도를 입력하시오: ");
scanf("%lf", &f_temp);
c_temp = 5/9 * (f_temp - 32);
printf("섭씨온도는 %f입니다\n", c_temp);


return 0;

}