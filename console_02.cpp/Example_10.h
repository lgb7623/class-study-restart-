#pragma once

#include<iostream>

using namespace std;

#pragma region 배열
/*



▶배열이란? 
(과제! 무조건 배열을 쓴다!)


- 편리성 문법(선택적)

- 배열: 연속되는 / 나열된

- 동일한 자료형의 데이터는 N개 이상 선언해서 제어 및 관리가 가능한 기능을 의미한다.

- 배열을 이용하면 간단하게 여러데이터를 조작하는 것이 가능

▶ C와 C++ 언어의 배열 선언 방법
EX) 자료형 배열이름[배열크기];

int Values(5]; <- 인트형 데이터 5개를 보관할 수 있는 배열 선언
doble dbValues[5] <- 더블형 데이터 5개를 보관할 수 있는 배열 선언

- 배열의 크기는 기본적으로 리터널 상수만을 지원한다.
ㄴ 즉, 기본적으로 리터널 상수만을 지원하지만 컴파일러에 따라서 
심볼릭 상수 또는 변수를 이용해서 배열을 선언하는것이 가능하다.

- 배열의 크기는 컴파일 타임에 결정되기 때문에 변수의 값은 런타임에 할당이 되고 
  기본적으로 배열의 크기를 정의하는것은 불가능하다.

(정적배열= 컴파일타임에서 런타임으로 넘어갈때는 변하지 않는데 이를 정적배열이라고한다)



▶ c/c++언어의 배열 접근 방법

- 배열은 [](인덱스 연산자)와 인덱스 번호를 통해서 특정 데이터에 접근하는것이 가능하며
인덱스의 범위는 0 ~ 배열의 크기 - 1

EX)
anValues[0] = 10;
printf("값: %d\n".anValues[0])

★★★★★ 
배열을 이용할때 
잘못된 인덱스 번호를 통해서 데이터의 접근을 시도하면 버그 또는 프로그램이 종료되는 현상이 발생한다.


- 즉, 인덱스 번호의 범위에 항상 주의를 기울여야한다


*/
#pragma endregion

namespace EXAMPLE_1
{
	void Example();
}

