#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <math.h> 

void main(void)
{
    int base;
    int exponent;
    int root;

    printf("밑수를 정수로 입력하세요 : ");
    scanf("%d",&base);

    exponent = 2;//exponent = 2는 한번만 실행되어야 하기 때문에 while문에서 뺀다.
    while(exponent<11){//조건은 exponent가 11 미만일 때
        root = pow(base,1.0/exponent); //for문의 식을 그대로 옮김
        printf("%d의 %d 제곱근 = %d 이다. \n",base,exponent,root);
        exponent++;//for문 한번이 끝나면 반복되어야 할 exponent++;를 옮긴다.
    }
}
