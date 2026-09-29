//scanf의 보안 문제점을 경고하는 warning 메세지를 없애는 코드
#define _CRT_SECURE_NO_WARNINGS
//printf,scanf가 구현되어 있는 라이브러리를 포함시킴
#include <stdio.h>

//프로그램 시작점 main함수. return data type은 integer, input은 없음의 void
int main(void){

    //scanf로 입력받은 값을 저장할 4byte integer data type의 gram 변수 선언
    int gram;

    //scanf 함수로 gram에 입력값을 저장
    printf("Input gram : ");
    scanf("%d",&gram);

    //mg와 kg값을 저장할 변수 선언
    //mg는 int 값에 100을 곱한 값이므로 int data type에 저장할 수 있음
    int miligram;
    //kg은 int 값에 1000을 나눈 값이므로 소수점 아랫자리를 저장하기 위해
    //float data type을 사용
    float kilogram;

    //각 변수들에 알맞는 값을 저장
    //int*int 연산이기 때문에 int data type인 miligram에 잘 저장됨
    miligram = gram*100;
    //int / float 연산이기 때문에 gram값이 int에서 float으로 자동 변환되면서
    //float/float 연산이 실행되어 float data type kilogram에 저장됨.
    //만약 gram/1000로 코딩했다면 int/int이기 때문에 결과는
    //int data type으로 소수점 아래자리가 사라졌을 것임.
    kilogram = gram/1000.0;

    //계산 결과를 string으로 화면에 출력
    //%.3f는 소수점 아래 3자리까지 출력하겠다는 것을 나타냄.
    printf("%dmg = %dg = %.3fkg\n",miligram,gram,kilogram);

    //프로그램 명세 5)에 명시된 kg값을 대입할 short int 변수를 선언
    short short_int;
    //kilogram은 float이기 때문에 short int 값으로 자동으로 변환되기 위해서
    //소수점 아랫 값들이 모두 사라짐
    short_int = kilogram;

    //소수점 아랫값이 없어진 kilogram값을 저장하고 있는 short_int값을
    //printf 함수로 화면에 출력
    printf("Short int result = %d\n",short_int);

    //프로그램 명세 6)에 명시된 실수값으로 gram을 선언하는 경우를 보이기 위한 변수를 선언;
    float float_gram;

    //실수값으로 float_gram에 입력값을 저장
    printf("Input float_gram : ");
    scanf("%f",&float_gram);

    // float_gram은 float data type이므로 float*int형태의 계산은 float data type으로
    // 결과가 return 되기 때문에 float_miligram이라는 새로운
    // float data type 변수가 필요함
    float float_milligram = float_gram*100;
    // kilogram은 본래 부터 float data type으로 선언되었기 때문에
    //새로운 변수를 언선할 필요 없음
    kilogram = float_gram/1000;

    //mg,g,kg이 모두 float data type이기 때문에 %f로 화면에 출력
    printf("%.3fmg = %.3fg = %.3fkg\n",float_milligram,float_gram,kilogram);

    //main 함수의 output 값. 0는 정상적으로 실행이 끝났음을 의미함.
    return 0;
}