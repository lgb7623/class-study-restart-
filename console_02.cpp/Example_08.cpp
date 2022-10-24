#include<iostream>

using namespace std;




#pragma region 함수 + 변/상수
/*



▶ 변수와 상수 영역이란?

- 변/ 상수가 프로그램에 걸쳐서 영향을 미칠 수 있는 범위를 의미한다.
ㄴ 변/상수의 종류에 따라서 해당 변/상수에 접근 할 수 있는 범위가 달라진다.
ㄴ 바꿔말해, 서로 다른 영역에서만 유효한 동일한 이름을 지니는 변/상수가 존재할 경우
각각 변/ 상수는 서로 별개라는 의미를 뜻한다.

- c/c++ 언어는 {} 의 조합을 통해서 특정 영억의 시작과 끝을 나타내는것이 가능하다.

▶ c/c++언어의 변/ 상수 종류

- 로컬(지역)
ㄴ 특정 영역에서만 접근이 가능한 변/상수(EX: 멤버, 지역.. 등등)

- 글로벌(전역)
ㄴ프로그램 전체에서 접근이 가능한 변/상수
(보통 플레이어 골드 처럼 전역에 사용되는것, 관리자 클래스)
static, extern + f.w 필요

- 정적로컬(static필요)
ㄴ 특정 영역에서만 접근이 가능하지만 지역 변수와 달리 해당변수의 값이 항상 유지되는
변/상수( 중괄호를 나와도 값이 유지)

- 정적글로벌
ㄴ 전역 변수와 달리 해당 변/상수가 선언된 파일에서만 접근이 가능한 변/상수

*/
#pragma endregion


// 함수 선언

void IncreaseValue(int Value);

void DecreaseValue(int Value);

//전역 공간
// ㄴ 전역변수에 선언된 스테틱
//	 선언된 파일 내에서 참조허용
static int g_Value = 0;
const int g_constantValue = 0;


void main()
{

	int Value = 0;
	
	cout << "정수입력:"; 

	cin >> Value;
	cout << '\n';
	cout << "== 값을 증가시킨후 ==" << endl;
	
	// 10
	IncreaseValue(Value);
	// 10
IncreaseValue(Value);

//  20
	cout <<"전역 변수의 값:" <<g_Value << endl << endl;
	
	
	cout << "== 값을 감소시킨후 ==" << endl;
	
	//
	DecreaseValue(Value);
	
	//
	DecreaseValue(Value);

	// 0 
	cout << "전역 변수의 값:" << g_Value << endl << endl;

	/*
	
	▶ {}
	-C/C== 언어는 특정 영역안에 새로운 영역을 만드는 기능을 제공한다.
	즉, 영역을 중첩해서 만드는 것이 가능하다.

	또한, C/C++ 언어는 중복되지 않는다면 동일한 이름을 지니는 변/상수를
	만드는 것이 가능하기 때문에 특정 영역과 해당 역역의 새로운 지역 영역에서 
	동일한 이름의 변수를 만들었다고 해도 이는 컴파일 엥러가 발생하지 않는다
	ㄴ 문법적으로 허용/ 해당기능을 제공하고 있기 때문에

	- 단 지역영역에서 새로운 변수를 만들었다 하더라도 해당 변수의 이름과 동일한
	이름을 지니는 변수가 외부영역에서 선언되어있으면 특정 지역을 지정해서 해당 변수의
	값을 변경하는것은 불가능하다

	※ 변/ 상수의 접근 우선 순위는 가장 가까운 영역으로 범위가 제한된다
	
	
	
	*/



	{// <- 새로운 영역시작

		int Value = 0;

		int g_constantValue = 0;

		Value = 100;

		g_constantValue = 200;
	}//<- 새로운 영역 끝남


		cout << "== 새로운 지역이 종료된 이후 ==" << endl;
		
		//
		cout << "현재 지역변수:" << Value << endl;

		//
		cout << "전역변수:" << g_constantValue << endl;




	}//<- 새로운 영역 끝남







void IncreaseValue(int Value)
{

	int LocalValue = 0;

	g_Value += Value;
	LocalValue += Value;
	cout << " increasevalue 지역 변수" << LocalValue << endl;
}
	


void DecreaseValue(int Value)
{


	static int LocalValue = 0;
	g_Value -= Value;
	LocalValue -= Value;
	cout << " Dcreasevalue 지역 변수" << LocalValue << endl;

}

/*

정적 변/상수는 특정에서만 접근이 가능한 지역변수의 특성과 프로그램이 종료 될때까지 사라지지 않는 
전역 변수의 특성을 모두 가지고 있다

EX: 지역변수 <=> 전역변수
그렇기 때문에 정적 변/상수를 선언하는 위 코드는 해당 영역이 실행 되는 첫 순간에만 유효하다는것을 
알 수 있다 (Dcreasevalue 함수에서는 초기화가 한번만 이뤄진다.)


*/
