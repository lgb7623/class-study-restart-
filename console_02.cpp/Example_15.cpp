#include<iostream>


using namespace std;


#pragma region 포인터
/*


▶ 포인터란?


- 어떠한 값을 저장하는게 아닌 어떠한 값의 주소(Address)를 저장하는 것
- 메모리의 주소를 의미하며 c/c++ 언어는 포인터를 통해서 데이터 (변수)에 간접적으로 접근하는것이 가능하다.ㅣ
- 포인터를 활용하면 서로 다른 영역에 있는 변수라 하더라도 값을 변경하는 것이 가능

※ 심플하게 기억할 3가지
ㄴ 어떠한 값의 주소: 해당 값이 저장된 컴퓨터 메모리상의 주소
ㄴ ★  * : 해당 메모리에 있는 데이터 값을 가져오는 기능을 한다.
ㄴ&: 주소값을 반환하는 연산자

※ 포인터: 가르키는 놈, 주소를 담는 그릇 
ㄴ 3가지: *, ->, 주소 


※ 기본적으로 프로그래머는 안전성을 위해서 마음대로 메모리상의 어떤 위치든 접근하는것을 허용하지 않는다. (불가능)

※ 변수의 할당을 통해 메모리의 사용 권한이 주어진 위치만 포인터를 통해서 조작하는것이 가능하다.

▷ c/c++언어 포인터에 자료형이 필요한 경우

- 포인터는 단순히 메모리의 주소에 불가하기 때문에 해당 정보만을 가지고는 
메모리의 얼마만큼의 크기로 값을 저장하거나 읽어들일지 판단하는것이 불가하다.

- 그렇기 때문에 포인터의 자료형을 통해서 저장 및 읽어들일 메모리의 크기를 명시해 줘야 한다. 고로 포인터와 해당 포인터에 저장할 변수의 자료형은 
일처해야한다.

- 단 메모리의 주소만을 보관하고 싶다면 특정 자료형을 명시하는 것이 아니라 void* 형으로 선언하는 것이 가능하다
ㄴ 해당 포인터를 보이드 포인터라고 부르며 보이드 포인터는 어떠한 자료형의 메모리 주소도 보관하는 것이 가능하다.


EX: 
int nValue = 0;
float fValue = 0.0f;
double dbValue = 0.0;

int *pnValue = &nValue;
float *pfValue = &fValue
double &pdbValue = &fValue

※ 포인터는 메모리의 주소를 보관하는 역활을 하기 때문에 포인터의 크기는 모두 동일하다


▷ 함수의 종류
Call by nalue
ㄴ 값의 전달(Date)
ㄴ int Add(int a, int b)

Call by Reference
ㄴ주소값의 전달(Address)
 ㄴ int Add(int*a, int* b)




*/
#pragma endregion 


void LinePrint()
{

	cout << "===========================" << endl;
}


void main()
{

	cout << "포인터" << endl;
	LinePrint();

	/*
	
	-C/C++ 언어의 포인터 선언 방법
	int nValue = 0;    <- 메모리의 특정 영역에 4바이트 공간 할당
	int *pnpointer = &Value <- nValue 할당 된 메모리 공간의 첫 주소 할당
	*/
	
	int valueA = 10;
	int* pValueA = &valueA; // (자료형 옆에 * 는 포인터 선언)
	int** ppValueA = &valueA;
	// 주소값
	cout << ppValueA << endl;
	// 10
	cout << *(*ppValueA) << endl; //(변수이름 옆에 *는 참조)// 참조는 안에 들어간 값을 보겟다는 뜻
	// 주소값
	cout << "valueA의 주소:" << &valueA  << endl;
	
	// 변수
   cout << valueA; << endl; 
	
	cout << pvalueA; << endl; // 벨류a 주소
	
	cout << *pvalueA; << endl;// 참조이니 안에있는걸보겠다 안에있는건  10 <- 10을 봄


	LinePrint();

	int valueB = 3;
	// 요주의 선언과 동시에 할당해야함

	int* pValueB;

	cout << valueB << endl;
	cout << &valueB << endl;
	pValueB = &valueB

	cout << pValueB << endl;
	
	cout << *pValueB << endl;
	cout << &pValueB << endl;
/*

- 포인터를 초기화 하지 않고 값을 바꾸면.....


EX: 
int* pVauleC;
pVauleC = 100;

pVauleC를  초기화 하지 않았다면 pVauleC는 쓰레기 값을 가지고 있는데 이 값은 어디에서 쓰이고 있는 값일수도 있다.

- 빈 자리였다면 다행이지만 아니였다면 쓰이는 값이 변경되는 것이므로 치명적 오류 발생
- 그래서 포인터가 가르키고 있는 값을 변경할때는 반드시 확인하고 예외처리 이후 변경을 시도한다.

*/
	int* pValueC = NULL;
	
	//NULL, nullptr의 의미는 현재 포인터가 아무런 메모리 위치도 가르키고 있지 않다는 뜻을 지니고 있다(즉, 포인터를 초기화 하는데 주로 활용된다.
	/*
	
	-NULL은 엄밀히 말하면 포인터가 아니라 매크로에서 정의된 상수 0
	※NULL 동작 방식
	  ㄴ C++에서는  NULL = 0  c++에서는 nullptr
	  ㄴ C에서는 void*로 치환해서 사용한다 c쪽언어는 NULL
	
	
	※ 결론 : NULL은 진짜 널을 가리키는 포인터가 아니라 숫자 0을 의미한다.
	
	
	
	*/
	pValueC = &valueB
		if (pValueC != nullptr)
		{
			*pValueC = 30; // (참조로 들어가서 안의 값을 바꿈)

		}

	LinePrint();
	cout << " 다중포인터" << endl;
	int valueC = 5;
	int* pValueD = &valueC;
	int** ppValueB = &pvalueD;
	int*** pppValueA = &ppvalueB;


	cout << ValueC << endl;
	cout << pValueD<< endl;
	cout << ppValueB << endl;
	cout << &valueC << endl;
	cout << pvalueD << endl;
	cout << ppvalueB << endl;
	cout << &ValueC << endl;
	cout << &pValueD << endl;
	cout << &ppValueB << endl;
	cout << *pvalueD << endl;
	cout << *ppvalueB << endl;
	cout << **ppvalueB << endl;
}