#include<iostream>
//STL(string): 메모리 블록이나 문자열을 다룰 수 있는 함수(기능)들을 포함하고 있다.
#include<string>
using namespace std;
//char를 한번씩 사용해보자




# pragma region 함수




/*

▶ 함수 

- 음료수 자판기
ㄴ 음료수 자판기는 음료수를 배출하는 기게

▷ 함수를 사용하는 이유
- 중복로직 제거
- 관리 용이함
- 가독성 향상
- 편리성

- 함수를 선언하는 방법

반환 자료형 함수이름 (입력자료형(인자(수))
} <- 함수 시작

-> 함수 내용

{<- 함수 끝


함수 이름: 말 그대로 함수의 이름(함수를 실행(호출))
인자(수): 함수가 해야 할 일의 세부사항을 지정하며 함수의 작업거리라고 할 수 있다

반환 자료형: 함수가 리턴(반환) 하는 값의 데이더 형이며 함수의
작업결과물 

함수 내용 {} 안에 함수의 실제 코드가 존재한다.

※ 함수의 이름은 "기본적"으로 유일해야한다.
ㄴ 동일한 이름의 함수를 N개이상 선언하는것은 불가능 하다.

▷ void형 함수란?
- 리턴 할 값이 없는 함수
- 함수의 입력 또는 출력이 없을 경우 void 키워드를 통해서 해당 입/출력이 
없다라는 것을 명시해 준다.


우리가 알게 모르게 사용한 함수들

rand(): 랜덤값을 뽑는 함수
Sleep : 1초간 멈추게 만드는 함수

※ 함수 선언은 기본적으로 메인 함수 윗쪽에 한다.


▷ c/c++ 언어의 함수 선언이 필요한 이유
- c/c++ 언어의 컴파일러는 기본적으로 파일의 내용을 위에서 아래로 해석한다.
이때, 컴파일러가 이미 지나친 라인에서 포함되지 않은 함수를 호출할 경우
컴파일러가 이에 대한 내용을 당연히 모르기 때문에 에러가 발생한다.

그렇기 때문에 함수의 선언을 통해서 컴파일러에게 해당 함수가 파일 어딘가에 존재한다는 여부를 반드시 알려줘야 한다

여기서 볼 수 있는 c/c++ 컴파일러의 특징은 함수의 선언과 정의가 반드시 동일한 파일에 존재하지 않아도 괸다는것을 알 수 있다

★ 함수의 선언은 중복으로 명시하는 것이 가능하지만 함수의 정의는 반드시 유일해야한다.



일반 함수명은 대문자로 시작하고 단어 시작마다 대문자를 사용한다.
ㄴ 파스칼 케이스

(후에 배울 클래스는 카멜식을 사용함)



*/


# pragma endregion

// 에메랄드색 문자는 c++관련색
// 함수선언
void OutputValueA();

void OutputValueB(int numA);
void OutputValueC(int numA, int numB);

//문자열
void OutputString(string str);
string GetStringfunc(string strA, string strB);
int CheckingString(string strA, string strB);

//반환값이 있어야하는 함수(int)
// ㄴ 사칙연산
int GetAddValue(int numA, int numB);
// 빼기
int GetSubValue(int numA, int numB);
//곱하기
int GetMultipleValue(int numA, int numB);
//나눗셈
float GetDividleValue(int numA, int numB);

namespace NS_FUCN_A
{
	void Sample()
	{

cout << " 내가바로 네임스페이스 A함수" << endl;

 }

}


namespace NS_FUCN_B
{
	void Sample()
	{

		cout << " 내가바로 네임스페이스 B함수" << endl;

	}

}

void main()
{


	NS_FUCN_A::Sample();
	NS_FUCN_B::Sample();

	//
	OutputValueA();

	//
	OutputValueB(5);
	
	//
	OutputValueC(1, 9);
	
	//
	OutputString("과제가 너무 재밌다.");

	int nResultA = GetAddValue(18, 25);

	OutputValueB(nResultA);

	string sResultB = GetStringfunc("과제가", "쉽다.");

		OutputString(sResultB);

		nResultA = CheckingString("취업을 하고 싶다.", "취업을 하고 싶다");
		//
		OutputValueB(nResultA);

		cout << "\n";



		int numL = 0;
		int numR = 0;
			cout << "정수 (2개) 입력:" << endl;
			cin >> numL >> numR;
			printf("%d + %d = %d\n", numL, numR, GetAddValue(numL, numR));
			printf("%d - %d = %d\n", numL, numR, GetSubValue(numL, numR));
			printf("%d * %d = %d\n", numL, numR, GetMultipleValue(numL, numR));
			printf("%d / %d= %f\n", numL, numR, GetDividleValue(numL, numR));
}
/*
- 이처럼 함수는 다양한 유형을 가질수 있다.

▷ C/ C++ 언어의 함수 유형
- 입력 0, 출력 0
- 입력 0, 출력 X
- 입력 X, 출력 0
- 입력 X , 출력 X



EX:
void showinfo(int nAge, char*psName); <- 입력 o , 출력 x
int GetRandomValue(void);             <- 입력 x , 출력 o
void SomeFunction(void);              <- 입력 x , 출력 x

*/




/*
적절한 입력 데이터와 출력 데이터가 있으면 해당 구문을 함수라고 지칭할 수 있디.
또한, c/c++ 언어는 함수 단위로 실행하기 때문에 컴퓨터의 명령문을 작성하기 위해서는
반드시 해당 구문을 함수 안에 작성해 줘야 한다.

*/
void OutputValueA() 
{

	cout << "내가 바로 함수다" << endl;
}

// 인트형을 먹지만 반환하지는 않는다 
void OutputValueB(int numA)
{
	cout << numA << endl;
}

void OutputValueC(int numA, int numB)
{
	cout << numA <<  numB <<   endl;
}

void OutputString(string str)
{
	cout << str << endl;
}

string GetStringfunc(string strA, string strB)
{
	/*
	함수는 return 키워드를 통해서 함수의 종료 또는 결과 값을 반환하는것이 가능하며 
	함수의 결고 값은 입력과는 달리 하나의 결과만을 반환할수 있다(but c++17에서는 여러개 반환 가능)
	*/

	// append(): n문자열 뒤에 n2 문자열을 붙여 넣는다.
	//return strA.append(strB);// 원래는 어팬드 필요 
	
	//뚝배기 코드
	return strA + strB;
}

int CheckingString(string strA, string strB)
{
	// 같으면 1 
	//다르면 0
	return strA == strB;


}

int GetAddValue(int numA, int numB)
{
	return numA + numB;
}

int GetSubValue(int numA, int numB)
{
	return numA - numB;
}

int GetMultipleValue(int numA, int numB)
{
	return numA * numB;
}

float GetDividleValue(int numA, int numB)// float 으로 안한이유 int가 먼저기 때문 float 과 섞이면 불편 반환이 flaot이라 float 강제형변환 ㄱ
{
	return numA / (float) numB;
}
