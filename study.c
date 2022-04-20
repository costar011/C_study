/*  고정소수점 부동소수점   */

/*

- 고정소수점 -

특정 비트를 기준으로 한쪽 비트를 실수의 정수 영역을 저장하도록 하고,
반대쪽 비트는 실수의 소수점 영역을 저장하도록 하는 방법

두 개의 정수를 저장하는 만큼, 데이터의 범위가 굉장히 한정적
16비트에서 표현 가능한 데이터는 65,536개
정수 영역은 저장하는 값이 양수인지 음수인지 판별하기 위한 sign 비트를 가지고 있어야 한다

무엇이 되었던 어느 한쪽은 32,768개의 정수 중 하나만 담을 수 있게 된다
더 큰 데이터를 담으려면 많은 메모리를 가지고 있어야한다

- 부동소수점 -

고정 소수점의 이러한 문제로 인해, 부동 소수점이라는 방식이 도입됐다
값 자체를 저장하는 것이 아니라, 값을 도출할 수 있는 수식에 대한 정보를 저장하는 방식

십진 실수를 이진수로 변환한 뒤 과학 표기법으로 만들게 되면 남은 정수 부분은 무조건 1인 것이 자명한다 
그렇다면 우리는 굳이 정수 부분을 넣을 필요가 없다

소수와 자릿수 부분만 저장하면 되겠네요. 소수 부분은  mantissa(fraction) 부분에, 자릿수는 exponent에 저장한다


**/



#include <stdio.h>

typedef union{
    float origin;
    struct {
        unsigned int mantissa:23;
        unsigned int exponent:8;
        unsigned int sign:1;
    }d;
    
}data;

int main()
{
    data v;
    v.origin = 33.75f;
    
    printf("%u ", v.d.sign);
    for(int i = 7; i >=0; --i){
        printf("%u", (v.d.exponent & (1 << i)) != 0);
    }
    printf(" ");
    for(int i = 22; i >=0; --i){
        printf("%u", (v.d.mantissa & (1 << i)) != 0);
    }
    printf("\n");
    

    return 0;
}