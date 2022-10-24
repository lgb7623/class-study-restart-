#pragma once
#include <iostream>
#include<string>
#include"Example_13.h"


using namespace std;
#pragma region 사용자 정의 자료형
/*


	▶ 사용자 정의 자료형이란?


	- 기존의 자료형을 기반으로 새로운 자료형의 조합을 만드는 기능
    ㄴ 사용자 정의 자료형을 활용하면 특정 데이터의 집합을 표현하는것이 가능하다.

	- 사용자 정의 자료형은 중복로직 제거에 탁월하다.

	▷ C/C++ 언어의 사용자 정의 자료형의 종료

	- 열거형 -> 심볼릭 상수를 정의하는 자료형
	- 구조체 -> 특정 데이터의 집합을 정의하는 자료형(변수의 자료형의 크기마다 메모리 공간안에서 자유롭게 할당)
	- 공용체 -> 특정 데이터의 집합을 정의하는 자료형(하나의 메모리 공간을 여러개의 변수가 공유)(덮어쓰기)(게임프로그래밍에서는 잘안쓴다 너무 넣어야할 데이터가 많음)
	- 클래스 -> OOP에서 특정 객체를 생성하고 관리하는 자료형
	(OOP 정도만 찾아보고 + 객체 지향의 5대특징(5대 설계원칙 아님)
	※ C: 구조체 / C++; 클래스 (구조체 확장)
   
   클래스(1) -> 구조체(2) -> 열거형(3) -> 유니온(4) 순서로 많이 쓰임


   ▷ C/C++ 언어의 열거형 선언 방법

   enum EUnitType
   {

   UNIT_TYPE_A,
   UNIT_TYPE_B,
   UNIT_TYPE_C,

   };(중괄호 하고 나서 세미 콜론 되있으면 사용자정의 자료형인지 유추)


   ▷ C/C++ 언어의 구조체 선언 방법

   - 하나 이상의 변수를 묶어서 새로운 자료형을 정의하는 도구
   - C++에는 클래스가 도입되었지만 C언어와의 호환성 때문에 구조체를 그대로 사용 할 수 있다.
   - C++ 구조체는 C언어의 구조체에 기능을 확장하여 기존의 클래스와 동일한 구조와 기능을 가진다.


   struct STUnitDate
   {
   int m_nID;
   int m_nLevel;

   };


   ▷ C/C++ 언어의 공용체 선언 방법
   union STuniData
	{
   int m_nID;
   int m_nLevel;

   };


   ▶ 구조체 vs 공용체

   - 구조체는 구조체를 구성하는 각각의 필드가 서로 별개의 메모리를 사용하는 반면
   공용체는 하나의 메모를 가지고 각각의 필드가 서로 공유하는 구조를 지닌다.

   ※ 이러한 특징때문에 공용체에서는 각 필드의 값이 할당 될 경우 마지막으로 할당한
   필드의 값만 유효하다.


   (준수모드 끄면나옴)
   auto resultA = [](int numA, int numB) {return numA+ numB} (10, 10) +=> (람다)
   {

   }
















*/

namespace EXAMPLE
{

	void Example();

}


#pragma endrgion












