#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<stdbool.h>
// 99부터 1까지 출력
//1부터 100까지 출력
// 짝수만 출력

using namespace std;


void main()
{//1
	cout << "for 문을 이용하여 99부터 1까지 짝수 출력\n" << endl;
	int numq;

	for (numq = 98; numq > 1; numq -= 2)
	{

		cout << numq << endl;
	}

	//2
	cout << "for 문을 이용하여 1부터 100까지 짝수 출력\n" << endl;
	int numw;

	for (numw = 2; numw < 101; numw += 2)
	{

		cout << numw << endl;
	}
	//3
	int nume = 98;
	cout << "while 문을 이용하여 99부터 1까지 짝수 출력\n" << endl;

	while (nume > 1) {
		cout << nume << endl;
		nume -= 2;


	}
	//4
	int numr = 2;
	cout << "while 문을 이용하여 1부터 100까지 짝수 출력\n" << endl;

	while (numr < 101) {
		cout << numr << endl;
		numr += 2;


	}


	/*

			- 두개의 정수를 받아서 두수의 덧셈과 뺄셈의결과를 출력하는 프로그램을 작성한다.


			-3개의 정수(num1, num2, num3)를 받아서 다음 연산의 결과를 출력하는 프로그램 작성

			(num1 + num2) * (num3 + num1) % num1 = ?


			-입력받은 두 정수를 나누었을때 얻게 되는 몫과 나머지를 출력하는 프로그램을 작성한다.

			EX) 7과 2가 입력되면 몫으로 3 / 나머지는 1이 출력되면 된다.

		*/

		// 두개의 정수를 받아 두수의 덧셈과 뺄셈의 결과를 출력하는 프로그램

	cout << "\n";
	cout << "\n";
	cout << "더하기 계산기 빼기 계산기입니다";

	int nmut = 0;
	int numy = 0;
	cout << "\n";
	cout << "\n";
	cout << "\n";

	cout << "숫자1" << "\n";
	cin >> nmut;

	cout << "\n";


	cout << "숫 2" << "\n";
	cin >> numy;
	cout << "\n";

	cout << "더하기 결과" << endl;
	cout << nmut + numy << endl;
	cout << "\n";
	cout << "빼기결과" << endl;
	cout << nmut - numy << endl;




	//3개의 정수(num1, num2, num3)를 받아서 다음 연산의 결과를 출력하는 프로그램 작성
//(num1 + num2) * (num3 + num1) % num1 = ?



	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	printf("\n");

	printf("두번째 계산기 입니다");
	printf("정수를 순서대로 입력해주세요");

	printf("\n");

	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	scanf_s("%d", &num3);

	printf("\n");

	int num4 = (num1 + num2) * (num3 + num1) % num1;

	printf("\n");

	printf("%d", num4);

	//-입력받은 두 정수를 나누었을때 얻게 되는 몫과 나머지를 출력하는 프로그램을 작성한다.

//X) 7과 2가 입력되면 몫으로 3 / 나머지는 1이 출력되면 된다.

	cout << "\n";
	cout << "\n";
	cout << "몫 나머지 계산기 입니다" << "\n";

	int nmu5 = 0;
	int num6 = 0;
	cout << "\n";
	cout << "\n";
	cout << "\n";

	cout << "숫자1" << "\n";
	cin >> nmu5;

	cout << "\n";


	cout << "숫 2" << "\n";
	cin >> num6;
	cout << "\n";

	cout << "몫" << endl;
	cout << nmu5 / num6 << endl;
	cout << "\n";
	cout << "나머지" << endl;
	cout << nmu5 % num6 << endl;
	/*
	과제3.반복문 숙달

		- 정수 하나를 입력 받아 - 5 씩 반복적으로 연산되는 식을 만든다.


		- 종료조건: -15를 넘어가면 탈출

		- 조건 : 입력받은 값은 - 10 ~10 사이의 숫자여야하고 이외의 값 입력시 그냥 종료

		※ 조건식과 논리 연산자를 잘 보고 조건식을 만들어 WHILE문이 돌아가게끔 만든다.
*/

	int nmu7 = 0;

	cout << "\n";
	cout << "\n";
	cout << "-5 계산기입니다" << "\n";
	cout << "\n";
	cout << "숫자를 빼고싶은 정수를 입력해 주세요";
	cin >> nmu7;
	while (nmu7 > -11 && nmu7 < 11)
	{
		while (nmu7 > -16)
		{
			cout << nmu7 << endl;
			nmu7 -= 5;
		}
	}






}

