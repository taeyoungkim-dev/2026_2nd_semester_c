//printf 사용에 필요한 라이브러리 include가 주석처리 되어 있음
//주석 풀어주기
#include <stdio.h>

//main함수 시작점. input이 void이고 output이 void라는 함수 선언
void main(void)
{
    // first, second 변수 선언
    // second 변수에만 값 1 할당
    // first는 지역변수이기 때문에 원래 메모리가 가지고 있던
    // 쓰레기 값이 들어가 있음
    int first, second = 1;
    // third 변수 선언
    // third는 지역 변수이기 때문에 원래 메모리가 가지고 있던
    // 쓰레기 값이 들어가 있음
    int third;

    // 오탈자 수정
    // [firt,firs]->second, [sec,secnd]->second, thir->third
    // second의 값은 1이기 때문에 second < 0의 값은 0이 되고
    // third에는 0이 들어갈 것이다. 따라서 첫번째 if문은 실행되지 않는다.
    if(third = second < 0) first = 3;
    //첫번째 if문이 동작하지 않았기 때문에 else들을 고려해야한다.
    //second에 0을 할당한다. if(0)꼴이기 때문에 if문은 실행되지 않는다.
    else if(second = 0) first = 5;
    //따라서 마지막 else문이 실행될 것이고 first에 7이라는 값이 할당 될 것이다.
    else first = 7;

    // c언어에서 작은 따옴표 ''는 문자 char을 나타낸다.
    // 우리는 3가지 변수를 모두 출력해야 하기 때문에
    // 문자열을 나타내는 ""을 사용하여야 한다.
    // 또한 ""안의 %d는 하나의 인자 값만을 받을 수 있기 때문에
    // 인자수에 맞춰 3개를 사용해야 한다,.
    // [7,0,0] 이라는 결과가 출력될 것이다.
    printf("%d, %d, %d \n", first, second, third);
}