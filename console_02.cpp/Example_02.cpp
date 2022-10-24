#include<iostream>
#include<time.h>

//using 지시자 : 지정한 네임스페이스의 모든 명칭을 이 선언이 있는 영역으로 가져와
//소속 지정없이 명칭을 바로 사용 가능

using namespace std;
// ㄴ c++ 표준에서 정의하고 있는 많은것들이 std에 속해 있음
// using 선언자
using std::cin;
using std::cout;
using std::endl;


namespace A
{
	namespace B
	{
		namespace C
		{
			int platerGold;
		}
	}
}

// 응용
namespace ABC = A::B::C;


void main()
{
	A::B::C::platerGold;

	ABC::platerGold;
	int TestNumA = true;
	int TestNumB = false;
	int TestResult = TestNumA + TestNumB;

	//?
	cout << "boolean:" << TestResult << endl;

	cout << endl;

	// 변수 초기화 방법
	// ㄴ 변수의 초기화는 다양한 방법이 있지만 일반적으로 사용되는 방법은
	// 아래와 같다

	// int형 변수를 선언
	int Num0;

	// 선언 이후 값 변경(할당)
	Num0 = 10;

	// 변수는 선언과 동시에 초기화도 가능하지만 값을 넣지 않는것 또한 가능하다.
	int Num1 = 3;
	int Num2 = 6;
	int Total;

	int Num3;
	int Num4;
	int Num5;

	int Num6, Num7, Num8;

	Num6 = Num7 = Num8 = 100;


	// sizeof 키워드를 이용하면 변수 또는 자료형의 크기를 계산하는 것이 가능하다.
	cout << "정수 1사이즈:" << sizeof(1) << endl;
	cout << "정수 2사이즈:" << sizeof(2) << endl;
	cout << "true 사이즈:" << sizeof(true) << endl;
	cout << "false 사이즈:" << sizeof(false) << endl;

	cout << endl;


	// 이제 자료형을 알았으니 좀 더 많은것을 할 수 있다.
/*
	int nValue = 0;

	cout << "숫자를 입력하세요" << endl;
	// c++ 스타일

	cin >> nValue;

	cout << "내가 입력한 숫자: " << nValue << endl;
	cout << endl;

	// c 스타일
	printf("정수입력: ");
	scanf_s("%d", &nValue);


	cout << endl;

	// ================================================================================================================
	// 다양한 정수 타입
	
	short ValueA = 10;
	int ValueB = 20;
	long ValueC = 30;
	long long ValueD = 40;
	float ValueE = 50;

	//C 언어 타입
	printf("C언어 short : %d, %d\n", ValueA, sizeof(ValueA));
	printf("C언어 int : %d, %d\n", ValueB, sizeof(ValueB));
	printf("C언어 long : %ld, %d\n", ValueC, sizeof(ValueC));
	printf("C언어 long long : %lld, %d\n", ValueD, sizeof(ValueD));
	printf("C언어 float : %f, %d\n", ValueE, sizeof(ValueE));

	//C++ 언어 타입
	cout << "C++ short:" << ValueA << "," << "사이즈:" << sizeof(ValueA) << endl;
	cout << "C++ int:" << ValueB << "," << "사이즈:" << sizeof(ValueB) << endl;
	cout << "C++ long:" << ValueC << "," << "사이즈:" << sizeof(ValueC) << endl;
	cout << "C++ long long:" << ValueD << "," << "사이즈:" << sizeof(ValueD) << endl;
	cout << "C++ float:" << ValueE << "," << "사이즈:" << sizeof(ValueE) << endl;
	//c 언어 타입
	
	

	//C++ 언어 타입
	

	cout << endl;
	//

	// ================================================================================================================
	/*
	▶ 변수 표기법에 대해

	1. 헝가리안 표기법

	- 절차지향적인 방식으로 코딩을 할때 이 변수가 어떤 변수인지 알기 위해 서로 약속을 하듯이
	변수 앞에 그 변수가 어떤 형태인지를 나타내는 약자를 붙인다

	EX)
	int Num          <=>        nNum
	float ValueA     <=>        fValueA
	double ValueB    <=>        dValueB
	char letter      <=>        chletter

	- 현재는 네이티브 코딩에서 거의 사용하지 않는다.
	ㄴ 왜냐하면 객체지향 방식을 훨씬 더 많이 사용하기 때문에
	   ㄴ 하지만 엔진에서는 다시 사용이 되고 있는 추세이기 때문에 숙지해야 한다.
	   
	※ 표기법은 내가 사용을 안한다고 하더라도 표기법의 규칙 정도는 반드시 알아둬야 한다.
	ㄴ 협업 → 같이 하는 일



	2. 카멜식 표기법

	- 객체지향적인 방식의 코딩으로 전환이 되면서 가독성을 위해 한 단어의 앞글자만 대문자로 표기하는 표기법

	ex)
	int playerSelectNumber;


	3. 파스칼 케이스 표기법

	- 기본 형태는 카멜식과 동일하다.
	
	ex)
	int PlayerSelectNumber;


	4. 스네이크 표기법
	- 단어를 언더바 기준으로 끊어서 표기하는 방법

	ex)
	int Player_Select_Number;


	※ 기본 표기법외에 추세에 맞는 표기법은 수업에 따라 계속 설명 하겠음


	▶ 변수 이름의 특징
	- 기본적으로 변수의 이름은 알파벳, 숫자, _로 구성이 된다.
	- C언어는 대소문자를 구분하며, Num과 num은 다른 변수 이름이다.

	ㄴ 1. 변수의 이름은 숫자로 시작할 수 없다.
    ㄴ 2. 키워드 역시 변수 이름으로 사용할 수 없다.
	ㄴ 3. 이름사이에 공백이 삽입될 수 없다.

	int num100; o
	int num101; o
	int _num102; (언더바는 허용) o
	int 6Num; x
	int Num look; x
	int bool x
	
	*/



	// ▶ 랜덤 시드
	// ㄴ 난수
	// rand(): 랜덤 함수 → 랜덤한 숫자를 반환 시킨다.
//랜덤 시드 초기화
srand(time(NULL));


	int numR;

	numR = rand() % 5; // 0, 1, 2, 3, 4
	cout << "무작위 수 반환: " << numR << endl;

	// 무기의 데미지를 20~25까지 제한해 보자.

	int weaponA = 0;

	weaponA = rand() % 6 + 20;



	//
	//
	//

	cout << "무기의 데미지 값:" << weaponA << endl;

	

}



#pragma region 자료형 + 변수 선언
/*

▶ 자료형
- 변수의 종류를 의미하며 기초 자료형(Data Type)이라고 생각하면 된다.

▷ C/C++ 언어에서 지원하는 자료형 종류

- 정수형
ㄴ소수점이 없는 수를 표현하기 위한 자료형

- 실수형
ㄴ소수점이 있는 수를 표현하기 위한 자료형

- 문자형
ㄴ문자를 표현하기 위한 자료형

- 논리형
ㄴ참, 거짓을 판별하는 자료형

▷ C/C++ 언어 정수형 자료형의 종류
-short 
ㄴ 2바이트 크기를 지니는 자료형

-int
ㄴ 4바이트 크기를 지니는 자료형

-long
ㄴ 4~8바이트 크기를 지니는 자료형

-long long
ㄴ 8바이트 크기를 지니는 자료형

▷ C/C++ 언어 실수형 자료형의 종류

- float
ㄴ 4바이트 크기를 지니는 자료형

- double
ㄴ 8바이트 크기를 지니는 자료형

▷ C/C++ 언어 문자형 자료형의 종류

-char
ㄴ 1바이트 크기를 지니는 자료형

▷ C/C++ 언어 논리형 자료형의 종류

★ 구세주! 
- bool 

- 1바이트 크기를 가지며 0(거짓) 1(참)을 나타내는 자료형
ㄴ c 언어는 논리형에 해당하는 참 또는 것짓이라는 자료형이 별도로 존재하지 않기 때문에 일반적으로 정수 0(거짓), 0을 제외한 정수는 참으로 인지한다.

※c언어는 표준 90년대 후반에 만들어진 표준c99에서 bool 타입이 추가됐다.
ㄴ 사용하기 위해선 헤더파일 필요(stdbool.h)

- 또한 c++언어는 참 또는 거짓을 나타내는 키워드 true/false를 통해서 참 또는 거짓을 표현하는 것이 가능하다.

-c/c++ 자료형은 기본적으로 음수(signed)를 표현하는것이 가능하지만 경우에 따라서 음수를 표현하지 않는 대신에 양수를 좀 더 크게 표현하는 방법이 있다.
ㄴ 즉, unsigned 키워드를 이용하면 음수를 표현하지 않고 양수만을 표현하는것이 가능하다

- bool 자료형은 정수가 와야 할 위치에 오게 되면 각각 1과 0으로 반환이 될뿐 정수 0과 1을 의미하는게 아니다.

▶ 자료형의 크기
1. 정수형 자료형

자료형 타입      크기               범위
int            4byte    약 -21억 ~ 21까지의 수를 담는다 (x64는  900경)
unsigned int   4byte    0  ~ 약 43억까지의 수를 담는다. 
long           4byte    약 21억 ~ 21까지의 수를 담는다.
unsigned long  4byte    0  ~ 약 43억까지의 수를 담는다.
short          2byte    약 -32767 ~32767까지의 수를 담는다.(rand)
unsigned short 2byte    약 0 ~ 65535까지의 수를 담는다.


2. 실수형 자료형

자료형 타입     크기                 범위
float         4byte     소수점 6~7자리(c++)까지의 실수를 담는다.
double        8byte     소수점 15자리(c++) 까지의 실수를 담는다.


3. 문자형 자료형

자료형 타입     크기                 범위
char           1byte   정수를 담는다.(문자)
unsigned char  1byte   양의 정수를 담는다.(문자)    


4. 논리형 자료형

자료형 타입     크기                 범위
bool           1byte   0(거짓), 1(참)


※ 기본적으로 알아야됨 

=======================================================================================

▶ 변수선언

변수 선언이란?
ㄴ 값을 저장할 수 있는 메모리공간에 이름을 정의하는걸 뜻한다.


기본 형태: 변수 형태(종류) 변수명
ㄴ ex: int platerGold; 


변수란?
ㄴ 변할 수 있는 숫자나 데이터를 의미한다
ㄴ 컴퓨터로 하여금 값을 저장할 수 있는 메모리 공간에 붙는 이름
ㄴ 변수를 이용하면 특정 값을 저장한 이후 해당 값을 이용한 여러가지 연산을 처리하는 것이 가능하다.

EX)
int Num = 20:

- 변수의 선언으로 인해서 Num이라는 이름으로 메모리 공간이 할당
- int Num= 20; 은 단순히 Num에 20을 저장하는게 아니라 Num이 의미하는 메모리 공간에 20을 넣으라는 의미이다.






*/
#pragma endregion