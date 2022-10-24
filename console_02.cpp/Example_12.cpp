#include"Example_12.h"


#define EXAMPLE_TYPE_PRINT           1
#define EXAMPLE_TYPE_TERNARY_OPEATOR   2
#define EXAMPLE_TYPE_STRING            3




#define EXAMPLE_TYPE     EXAMPLE_TYPE_STRING 



namespace EXAMPLE_1
{
	void Example()
	{


#if EXAMPLE_TYPE  == EXAMPLE_TYPE_PRINT   

		cout << "테스트 공간" << endl;


#elif EXAMPLE_TYPE == EXAMPLE_TYPE_TERNARY_OPEATOR


		cout << "삼항연산자" << endl;

		int numA, numB;
		cout << "정수 입력:";
		cin >> numA;
		numB = (numA > 0) ? numA : numA * (-1);

		cout << "입력한 수의 결과값:" << numB << endl;

		printf("\n");


		int numberA;
		int numberB = 100;
		int result;

		cout << "정수입력:";
		cin >> numberA;

		result = numberA < 10 ? numberA : numberB; //소괄호는 안쳐도 되나 길어질경우 우선연산을 줘야 하므로 쳐줘야함

		cout << "삼항 연산자 결과값:" << result << endl;



#else 

		// 문자(열)

	// 문자 표현은 -> ''
		// 문자열 표현은 ->""

		char moonja = 'A';
		int numA = 20;
		float numB = 3.2f;
		bool numC = true;

		cout << "문자" << moonja << endl;
			
		cout << sizeof(moonja) << " :바이트" << endl;
		cout << sizeof(numA) << " :바이트" << endl;
		cout << sizeof(numB) << " :바이트" << endl;
		cout << sizeof(numC) << " :바이트" << endl;




		/*
		
		C/C++은 타입에 매우 엄격한 언어
        ㄴ 오류를 방지하기 위함

		-C /C++에서 오류를 방지하기 위해 기본적으로 사용할 수 있는 매크로가 바로 NULL

		
		★ 문자는 NULL 문자가 추가 안된다.
		문자는 끝이 정해져 있으므로 \NULL삽입 X
		문자열은 끝점 \NULL삽입됨



		▶ NULL(iostream에있음)

	iostream 헤더에 정의되어있다.
	-NULL은 0 주소를 의미하며 그렇기에 후에 배울 포인터 변수를 초기화 할때 사용할 수 있다.

	EX:
	char* p= NULL == char * p =0;
	int n = NULL; != int n =0;

	※ 전자 같은 경우에는 p변수의 주소값에 0을 넣는 것이고
	후자는 정수 0을 n에 넣는다는 의미가 있다.	
		
		
		*/
		printf("\n");


		char strA = 'A';
			cout << "strA =" << strA << endl;

		
		
		// 문자열
	//	ㄴ c/0c++ 언어는 ""조합을 통해서 문자 "열"을 표현하는것이 가능하며
		//ㄴ 이때 char 배열을 사용한다.
		//ㄴ 또한 문자열 상수를 통해 초기화를 할 경우 널 문자를 명시적으로 기입하지 않아도 된다.


		char strB[4] = "abc";
			cout << "strB =" << strB << endl;
		// ㄴ 배열값은 1byte가 더들어간다.
		//EX:
		//char str[100] = {,,,,,}
		//ㄴ 위 100의 길이를 가진 str[]


			char strC[20] = "i like game.!";

				cout << strC << endl;

				strC[10] = '\0';
				
				cout << strC << endl;

				strC[2] = '\0';

				cout << strC << endl;


#endif
	}
}



