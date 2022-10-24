#include<iostream>

//#include"./Homewrok/"// 한번찾아보면 좋음 계층구조 만드는거랑~~ 등등
using namespace std;

#pragma region
/*


▶ 전처리기
- 실행 파일을 생성하는 과정에서 컴파일하기 직전, 소스 파일 내에서 존재하는 선행 처리 지시문을 
처리하는 작업을 의미한다.

- 전처리기가 실행이 되면 각 코드 파일에서 지시자를 찾는다.
ㄴ 지시자는 #으로 시작해서 줄 바꿈(개행)으로 끝나는 코드

※ 선행 처리를 위한 명령에는 맨앞에 # 기호가 붙는다는 공통점이 있다.

▷ c/c++ 코드를 실행하는 과정

- 전처리기 -> 컴파일(러) -> 어셈블리(러) -> 링크(커)


전처리기(prepreocessor)
ㄴ 헤더 파일 삽입, 코드의 주석제거, 문법 검토, 매크로등을 지원

컴파일러
ㄴ 어셈블리 파일로 변환

어셈블러
ㄴ 어셈블리 코드를 기계어(0 or 1)변환하여 오브젝트 파일로 생성한다.

링커
ㄴ 각각의 오브젝트 파일들을 묶어서 실행 코드 파일로 변환



위의 내용이 아직 이해가 안된다면
ㄴ가장 쉽게 
- 소스 코드 -> 바이너리 -> 실행파일



▶선행처리를 위한 명령

- 전처리문= 전처리기 연산자


▷ 파일 처리를 위한 전처리기문

1. #include
ㄴ #include< 파일 이름> -> 미리 정의된 includ 폴더에서 파일을 찾는다
ㄴ #include"파일이름(.h)" 
-> 현재 소스코드가 저장되어 있는 폴더에서 먼저 
   찾고 파일이 없다면 미리 정의된 include 
   폴더에서 파일을 찾는다.




   2. 형태 정의를 위한 전처리기문

   a. #define
   ㄴ #define 키워드는 매크로 상수 또는 매크로 함수를 정의하는 역할을 한다.

   b. #undef
   ㄴ 매크로 지정 해제

   3. 조건부 컴파일을 위한 전처리기

   a. #if, #ifdef, #ifndef, #else, #elif, #endif

  ㄴ #ifdef: 식별자가 정의되어 있으면 참
  ㄴ #ifndef: 식별자가 정의되어 있지 않으면 참
  ㄴ #endif: #ifndef or #ifdef or #else에 대한 전처리기 부분을 종료한다.

  # 코드 설계에서 잘 적용하면 경우에 따라 매우 큰 실행속도에 이득을 얻을수가 있다


  4. prama

  - 컴파일러의 기능을 확장시킬 수 있게 나온 문법이며 어떤 행위를 정해주기 위해 사용한다.
  - 추가된 문법이기 때문에 컴파일러의 버전에 따라 동작이 안될 수도 있으며
  사용하는 OS에 따라서도 동작 방식 and 지원하는 기능이 다르다.

  #pragma once: 링크 할때 헤더 파일이 한번만 포함되게 한다.
                헤더파일 중복방지
  
  #pragma region 이름
  - 코드 작성
  ㄴ 코드를 개요, 축소가 가능하게 묶는다.

  #pragma endregion

  #pragma message("")
  ㄴ 컴파일시에 출력창에 메세지 출력
  ㄴ 간단한 협업시에 다른 개발자에게 경고/ 알아야할 정보를 넘겨줄때 사용한다.




  ▶ 매크로 상수 주의점


  1. #define 문은 코드를 생성하는 명령이 아니며 매크로의 이름도 일종의 명칭이기 때문에 명칭 규칙에 맞게 작성해야 한다.
  2. 매크로의 이름에는 공백이 들어갈수 없지만 실제 값은 공백을 받을 수 있다.
  ex) #define MESSAGE "똑바로 하자"

  3. 문자열 상수내에 있는 매크로나 다른명칭의 일부로 포함된 경우는 치환되지 않는다
EX) # define num5의 경우 num을 찾아 5로 치환

4. 매크로는 기본적으로 중첩이 가능
ex) #define a 3
ㄴ #define b (a *3)


5 값을 가지고 있지 않는 빈 매크로 또한 정의가 가능하다
ex: #define A
ㄴ 이 매크로는 현재 값을 가지고 있지 않으며 상수자체로만 존재할 뿐이다.


6. 매크로 상수는 단순히 컴파일 전에 코드를 튜닝하기 위한 전처리기에 의해서
처리되는 상수이기 때문에 컴파일러 입장에서는 리터널 상수와 동일시된다
ㄴ 컴파일러는 매크로 상수의 존재를 알지 못한다.



















   b.








*/

#pragma endregion

//매크로를 정의할때는 기본적으로 모두 대문자로 표기하며 스네이크 표기법을 사용한다.
// 매크로는 ;을 붙이지 않는다

#define EXAMPLE_1 1
#define EXAMPLE_2 1

#undef EXAMPLE_2

#define EXAMPLE_2 2


#define TRUE 1
#define FALSE 0


// 매크로 함수 (\ 넣으면 단일줄을 연장가능(줄마다 역슬러시 걸음)많아봐야 10줄)
#define ADD(a)  ((a)*(a))


void GetMultipleValue(int numA);


void main()
{
   
    cout << ADD(5) << endl;
    GetMultipleValue(5);

#ifdef EXAMPLE_1
    cout << "ifdef: EXAMPLE_1출력" << endl;// 읽음

#endif //

#if(EXAMPLE_2 ==1)
    cout << "if: EXAMPLE_2출력" << endl;// 연해진건 컴파일이 읽지도 않음

#elif EXAMPLE_3
    cout << "elif: EXAMPLE_3출력" << endl;

#elif(EXAMPLE_2 ==2)
    cout << "elif: EXAMPLE_2출력" << endl;

#endif// 끝점을 먼저보기




}

void GetMultipleValue(int numA)
{
cout << numA * numA << endl;
}