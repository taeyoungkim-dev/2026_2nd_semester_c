#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>

//input :int base, output : void 인 함수 선언
void exponent_from_2_to_10(int base){

    //expoenet와 root를 선언.
    //만약 main에 선언되어 있다면 파라미터로 함수로 다시 넘겨야함.
    int exponent; // 지수의 분모 선언
    int root; // base^(1/exponent) 값
    for(exponent = 2;exponent<11;exponent++)
    {
        root = pow(base,1.0/exponent); // root에 base^(1/exponent)을 할당.
                                        //1을 1.0로 표현해야 float/int 형이 되기 때문에 결과로 float값이 나온다
        printf("%d의 %d 제곱근 = %d 이다. \n",base,exponent,root);
    }
}
void main(void)
{
    int base;

    printf("밑수를 정수로 입력하세요 : ");
    scanf("%d",&base);
    //만들어 둔 함수 호출
    exponent_from_2_to_10(base);
}
