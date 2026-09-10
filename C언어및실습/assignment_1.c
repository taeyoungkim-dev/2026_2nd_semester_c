//printf를 위한 standard input output 라이브러리를 추가
#include <stdio.h>
//프로그램의 시작점인 main함수.
//int는 output value가 integer이라는 것을 뜻함.
//void는 main의 input으로 아무런 input을 받지 않는다는 것을 뜻함.
int main(void){
    //printf 함수로 터미널 창에 문자열을 출력
    printf("Hi there! This is my first C program.\n\r");
    printf("Tae-young Kim (Number 2021041005, Dept. of Software, Chungbuk National University) studies the C Language.\n\r");
    //main 함수의 output 값. 0은 잘 실행되었다는 관례적 값
    return(0);
}