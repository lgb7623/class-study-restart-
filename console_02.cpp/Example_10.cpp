#include "Example_10.h"


// 코드를 관리하기 위한 전처리문
#define EXAMPLE_TYPE_PRINT          1


// 배열 타입(1차원, 2차원, 다차원 등등...)
// C++(다차원) C#(2차원)<- 2차원까지 지원하는것 정방행렬

#define EXAMPLE_TYPE_SIMPLE         1
#define EXAMPLE_TYPE_MULTI_DIMENSION 2


// 제어를 위한 구문
#define EXAMPLE_TYPE    EXAMPLE_TYPE_PRINT 

#define ARRAY_TYPE      EXAMPLE_TYPE_SIMPLE  




namespace EXAMPLE_1
{
#define ARRAY_SIZE  5
	void Example()
	{

#if EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT


		cout << "효율적인 프로젝트 관리" << endl;
		cout << "효율적인 프로젝트 관리" << endl;
		cout << "효율적인 프로젝트 관리" << endl;
		cout << "효율적인 프로젝트 관리" << endl;
		cout << "효율적인 프로젝트 관리" << endl;


		cout << "\n";

		int numA = 0;
		int numB = 1;
		int numC = 2;
		int numD = 3;
		int numE = 4;
		int numF = 5;

		cout << numA << endl;
		cout << numB << endl;
		cout << numC << endl;
		cout << numD << endl;
		cout << numE << endl;
		cout << numF << endl;

		cout << "\n";


		// 1차원 배열
		// int: 배열을 이루는 요소 자료형/ num: 배열의 이름/ [6] 배월의 길이

		int num[6];

		cout << num[0] << endl;
		cout << num[1] << endl;
		cout << num[2] << endl;
		cout << num[3] << endl;
		cout << num[4] << endl;
		cout << num[5] << endl;

		cout << "\n";

		//배열 또한 선언과 동시에 초기화가 가능하다.
		static int anNums[6] = { 0, 1, 2, 3, 4, 5 };
		

		for (int T=0; T <6; T++)
		{

			cout << "배열의 값:" << anNums[T] << endl;

		}

		cout << "\n";

#if ARRAY_TYPE == EXAMPLE_TYPE_SIMPLE  

		/*
		-sizeof 연산자는 지정된 자료형 또는 변/상수의 바이트 크기를 계산하는 역할을 한다.

		- 또한, sizeof 연산자를 배열에 활용 할 경우 배열 전체의 크기를(바이트) 계산하는 것이 가능하다.
		
		EX:
		int anValues[5]
		
		sizeof(anValues) <- 배열 전체 크기(배열 크기 * 배열 요소 크기)(20)
		sizeof(anValues[0]) <- 배열 요소 크기 (int형 크기에 해당하는 4 출력)
		


		▷ C/C++ 언어 배열의 다양한 초기화 방법
		int anValuesA[10]=(0);
		int anValuesB[]={1,2,3, ...}

		배열의 크기는 명시적으로 배열을 선언할때 정해주는것이 가능하지만 배열의 초기화를 이용하면 배열의 크기를 직접
		명시하지 않더라도 컴파일러에 의해서 초기화에 들어간 값의 갯수만큼 배열의 크기가 정해진다.
		*/


		int anValuesA[ARRAY_SIZE] =
		{ 1,2,3,4,5, };

		int anValuesB[] =
		{1,2,3,4,5};

//		배열의 사이즈를 담을 변수

		const int sizeA = sizeof(anValuesA) / sizeof(anValuesA[0]);
		const int sizeB = sizeof(anValuesB) / sizeof(anValuesB[0]);

		cout << "==배열 요소 출력 ==";


			printf("%d,%d,%d,%d,%d\n",anValuesA[0], anValuesA[1], anValuesA[2], anValuesA[3], anValuesA[4]);
			cout << "\n";

			for (int i = 0; i < sizeA; i++)
			{
				printf("%d%c", anValuesA[i], (i <= sizeA - 2) ? ',' : ' ');
			}
				cout << "\n";

			
			// 조건식 기준 ? t:f

		for (int i = 0; i < sizeB; i++)
		{
			printf("%d%c", anValuesB[i], (i <= sizeB - 2) ? ',' : ' ');

			cout << "\n"

		}


		/*
		// 잘기억하자
		// 배열의 인덱스가 적다면 인덱스 번호를 이용해서 직접 데이터를 출력하는것이 가능하지만
		//배열의 크기가 커지면 커질수록 매우 불편해 진다.
		*/



#else 


		/*
		▶ C/C++ 언어의 다차원 배열 선언 방법
		int anMatrix[5][5];             2차원
		int anDimensionMatrix[5][5][5]; 3차원(다차원)

		sizeof(anMartrix);     -        -> 100출력 (5* (배열요소크기:5*4)
		sizeof(int anDimensionMatrix);  -> 500 출력 5*(5* (배열요소크기:5*4))

		*/
		


#endif //ARRAY_TYPE == EXAMPLE_TYPE_SIMPLE 

#else

#endif // EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT


	}
}
