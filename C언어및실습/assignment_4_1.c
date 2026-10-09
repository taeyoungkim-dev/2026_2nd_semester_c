#define _CRT_SECURE_NO_WARNINGS // 컴파일 할 때 과거 표준 C 라이브러리 함수 사용 보안 경고를 무시하도록 설정
#include <stdio.h> //printf와 scanf_s를 사용하기 위한 라이브러리 추가
#include <math.h> // pow를 사용하기 위한 라이브러리 추가

void main(void)//입력,출력 void인 main 함수 선언
{
    int base; // 밑수
    int exponent; // 지수의 분모 선언
    int root; // base^(1/exponent) 값

    printf("밑수를 정수로 입력하세요 : ");
    //scanf_s('d',base); 버퍼 오버플로우를 발생시키지 않기 위한 scanf 보안 버전
                        // 문자열을 input 받을 시 반드시 버퍼의 크기를 명시해야함
                        // Microsoft MSVC 컴파일러에 구현되어 있음
                        // 따라서 gcc나 clang 컴파일러는 못씀
    scanf("%d",&base); 

    // expoenet가 2부터 10까지 총 9번 반복
    for(exponent = 2;exponent<11;exponent++)
    {
        root = pow(base,1.0/exponent); // root에 base^(1/exponent)을 할당.
                                        //1을 1.0로 표현해야 float/int 형이 되기 때문에 결과로 float값이 나온다
        printf("%d의 %d 제곱근 = %d 이다. \n",base,exponent,root);
    }
}
