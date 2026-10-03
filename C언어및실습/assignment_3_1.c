//printf를 사용하기 위한 stdio.h 라이브러리 불러오기
#include <stdio.h>

//전역변수 x_var과 y_var을 선언
//y_var에는 1이라는 값을 할당
//x_var는 전역변수이기 때문에 자동으로 값 0이 할당됨
int x_var, y_var = 1;

//main함수 시작점. input이 void이고 output이 void라는 함수 선언
void main(void)
{
    //변수 x_var와 y_var가 다를 때
    if(x_var != y_var)
        //NOT SAME이라는 문자열을 출력함
        //printf 함수는 파라미터로 문자열 data type을 받음.
        //그러나 수정 전 코드는 문자열이 아닌 NOT SAME이라는 변수를 파라미터로 넘김
        //따라서 컴파일 과정에서 선언되지 않은 NOT SAME이라는 변수 때문에 에러가 발생함
        //NOT SAME을 "NOT SAME" 으로 변경하여 문자열 data type으로 만들면 잘 동작함
        //그리고 다음 값이 있으니 줄바꿈 \n 추가
        //수정 전 코드 : printf(NOT SAME);
        printf("NOT SAME\n");

    //연산자 우선 순위에 따라 y_var * 3이 먼저 실행되고
    //그 값을 x_var에 할당
    //따라서 x_var값은 1*3
    //c언어는 0이 아닌 int를 True로 취급하기 때문에 if(True)로 진입하게 됨
    if(x_var = y_var * 3)
        //위의 if문과 마찬가지로 printf 함수는 파라미터로 문자열 data type을
        //넘겨줘야 하기 때문에 ""로 감싸서 문자열로 만듦
        //수정 전 코드 : printf(TRUE OF FALSE);
        printf("TRUE OR FALSE");
}