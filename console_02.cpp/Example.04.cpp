#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<stdbool.h>

using namespace std;


#pragma region
/*

▶ 조건문이란?


- 프로그램이 실행되는 동안 정해져 있는 경우에 수에 맞춰서 서로 다른 결과를 도출하기 위한 
문법을 뜻한다.

- 조건문을 이용하면 다양한 결과를 출력하는 프로그램을 작성하는 것이 가능

▷ C/ C++
ㄴ 1. if ~ else 조건문
ㄴ 2. swhich ~ case 조건문

▷ 1. if ~ else 조건문 

- 조건적 실행 (조건에 따라 실행 유무)

- 조건을 만족하는 if문을 발견하면 나머지 if문을 건너뛴다.

- if와 else가 만나서 이루는 문장의 수는 둘이 아니라 하나이다.

- if ~ else 문에서 조건의 만족여부 검사는 위에서 아래로 절차지향적으로 지향된다

- 조건이 만족되어 해당 블록을 실행하고 나면 마지막 else 까지도 건너뛴다

- 조건이 만족하지 않으면 마지막 else 문을 실행한다.

EX:
if(조건식)
{
 조건식이 참이면 실행될 코드
}

else if (조건식
{

조건식이 참이면 실행될 코드

}
 
 else 
 {
 
 위 조건들이 만족되지 않으면 실행될 코드

 }



 ▷ 2. switch 문 

 - 스위치문을 사용하는 경우는 일일이 조건별로 셋팅을 해주기가 용이하기 때문이다.
 ㄴ 이는 게임에서 상태 변화/ 조건이 많은 경우에 사용을 하면 좋은 효율을 낼수 있다.


- 그리고 if문과 매우흡사하다는 특징이 있으며 swich문으로 작성되는 로직은 if문으로
전부 교체가 가능하다. (단, 코드량이 엄청나게 길어질수는 있다)


EX: swhich(인자 값)
swhich(Date type)
{
case 1:
default:
break;

}
- 인자 값에는 int형과 char형이 올수 있다.
- 하지만 보통 int형을 많이 쓴다.
- switch문은 인자 값에 따라서 실행할 영역을 결정한다
ㄴ 인자값이 1이면 case1이 실행되고
ㄴ 인자값이 2면 case2가 실행되는 구조

-switch ~ case 조건문의 default 키워드는 if ~else 조건문의 else에 해당하는 역할을 수행하는 문법이다.

-switch ~ case 조건문은 if ~ else 조건문과는 달리 범위에 해당하는 조건을 줄 수 없을 뿐더러
조건문으로 사용될 수 있는 자료형은 정수형만을 취급한다.
ㄴ 정수 이외의 값을 조건으로 줄 경우 올바른 결과를 출력할 수 없다.

▷ c/ c++ 언어 제어문의 종류

1. return
ㄴ 조건문일때는 다시 돌려 보낸다./ 함수에서는 값을 반환하고 초기화 한다.

2. continue
ㄴ 조건문 일때는 연산을 하지 않고 뛰어 넘는다./ while문에서는 바로 이전 문항으로


3. break
ㄴ 만나면 멈춤다. /while문 같은 경우에는 while문을 빠져 나간다.

4. goto
ㄴ 보통 "점프문"이라고 불리며 goto에 라벨을 지정하면 중간에 있는 코드를 무시하고 해당 라벨로 즉시 이동한다.

goto는 실제로는 잘안쓰는데
잘안쓰는 이유: 유지보수 가독성을 해침
다만 특정상황(중첩 반목문에서 바로 나와야할때) but 쓰다보면 오류남 보통 많이 안쓰는걸 권장 1번이나 2번정도는 권장


※ break 문은 반복문을 탈출하는 용도로 사용이 되는데 break문의 존재 유무로 결과가 완전 달라진다.

















*/





void main()



{
	/*
	int nOperator;

	cout << "내가 입력한 숫자 = ";
cin >> nOperator;

	//만약
	if (nOperator == 0)
	{
		cout << "게임 1" << endl;
	}
	//또는
	else if (nOperator == 1)
	{
		cout << "게임 2" << endl;

	}
	//나머지
	else
	{
		cout << "그외 나머지 게임 " << endl;
	}

	cout << "\n";
*/
	// 한문장

	

	/*
	//만약
	if (nOperator == 0)
	{
		cout << "게임 1" << endl;
	}
	
	 if (nOperator == 1)
	{
		cout << "게임 2" << endl;

	}
	//나머지
	else
	{
		cout << "그외 나머지 게임 " << endl;
	}

	cout << "\n";

	//두문장임




	*/


	//위 예시처럼 IF문만 사용한다면 최초 시작되는 IF문의 참 거짓에 상관없이 컴파일러는
	// 다음 문단의 IF문을 검사한다. (로직이 복잡해 질수록 매우 효율이 떨어진다.)
	// 면접에 자주나온다!!



	int inputNumber;
	
	cout << "0번, 1번, 2번중 하나를 선택하시오" << endl;
	cout << "inputNumber =";
	cin >> inputNumber;

	switch (inputNumber)
	{

	case 0:
		cout << "o번 입력시 출력" << endl;
		break;
	case 1:
		cout << "1번 입력시 출력" << endl;
		break;
	case 2:
		cout << "2번 입력시 출력" << endl;
		break;
	default:
		cout << "그외 입력시 출력" << endl;
		
		break;

	}

	cout << "\n";

	/*
	
	▶ c/c++ 언어의 증/감 연산자 종류


	- 전위 증/감 연산자
	  vs

	- 후위 증/감 연산자

	전위 증/감 연산자는 해당 변수의 값을 증/감 시킨 후 연산에 활용
	후위 증/감 감소연산자는 연산에 활용이 된 후 해당 변수의 값이 변경된다.


	
	
	
	
	
	
	
	*/

	int nvalue = 10;

	cout << "증/감 연산 결과 출력 =" << endl;

	cout << "전위 증가 연산" << ++nvalue <<endl;

	cout << "전위 감가 연산 =" << --nvalue << endl;

	cout << "후위 증가 연산 =" << nvalue++ <<endl;

	cout << "후위 감사 연산=" << nvalue--<< endl;
	
	cout << "nvalue의 값: " << nvalue << endl;

	cout << endl;

	/*
	int nValueA, nValueB, nValueC, nValueD;


		int 
		nValueA, nValueB, nValueC, nValueD = 10;


	if ((nValueA == nValueB++) && (nValueC++ < nValueD))
	{
		if( nValueA == 11)

		cout << "증/감 연산 결과 출력 =" << endl;
		// 10
			cout <<  nValueA << endl;
			// 11
			cout <<  nValueB << endl;
			// 11
			cout << nValueC << endl;
			// 11
			cout <<  nValueD << endl;
			 
	}
	cout << "\n";


	▶ goto문
	- 근래 추세에는 사용을 잘 안한다.
	ㄴ 이유는 가독성을 매우떨어트릴 여지가 많으며 "스파게티" 코드를 완성시키는데 일조하기 때문
	ㄴ 매우 유용한 상황도 있지만 사용하기 전에 정말 필요할까? 라는 생각을 먼저 해보자

	EX:
	goto 레이블;
	레이블:


	*/

	// goto
	for (int i = 2; i < 10; i += 1)
	{
		for (int j = 1; j < 10; j += 1)

		{
			if (i % 2 == 0)
			{

				goto EXIT_1;
			}

			if (i % 5 == 0)
			{
				goto EXIT_2;
			}


			cout << i << "x" << j << "=" << i * j << endl << endl;




		EXIT_1:
			cout << " i 단을 출력한 이후 실행 : " << i << endl << endl;
		}
	EXIT_2 : 
		cout << " 반복문 탈출" << endl;



	}

	cout <<"2의 배수 출력"<< endl;

	for (int i = 2; i < 100; i++)
	{

		cout << "출력값:" << i++ << endl;

	}
	
	cout << "\n";



	cout << "2의 배수 출력" << endl;

	int i = 2;

	

	for (i = 2;; i++)
	{
		if (i == 100){
		cout << "출력값:" << i++ << endl;

		
		
				break;
			}
			

		}
	
	// ?


	

	cout << "\n";

}