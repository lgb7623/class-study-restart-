#include<iostream>
#include<time.h>
#include<windows.h>


/*과제1.가위바위보

- switch문을 이용해 만든다. ok

- 치트 기능 ok
과 배팅 기능 추가
ㄴ 초기 소지금 10, 000원 부터

- 최소 배팅은 1, 000원 부터

ㄴ5판을 하거나 내가 가진 돈을 전부 잃으면 게임을 종료한다

- 이기면 판돈에 X5배를 얻고 지면 판돈에 X7배를 잃는다

- 비길 경우 판돈에 X3를 얻는다.
*/


using namespace std;




void main()
{


	int Playermoney = 10000;


	int NumD = 0;



	while (NumD < 5 && Playermoney > 1)
	{

		int Player;
		int Com;


		srand(time(NULL));

		Com = rand() % 3 + 1;

		int numA = 1;
		int numB = 2;
		int numC = 3;

		int Money = 0;

		cout << "\n";
		cout << " (치트) pc가 낼 숫자:" << Com << endl;
		cout << "가위, 바위, 보 중 하나를 택하세요" << endl;
		cout << "가위(1), 바위(2), 보(3) 입니다 숫자를 입력해주세요" << endl;
		cin >> Player;
		cout << "배팅할 금액을 정해주세요 (최소배팅액 1000원(숫자만 입력))" << endl;
		cin >> Money;

		if (Money < 1000)
		{

			cout << "1000원 이상의 금액을 배팅해주세요" << endl;
			cout << "\n";

		}

		else if (Player < 4 && Player > 0)
		{

			switch (Com -= Player)
			{


			case 0:
				Sleep(1000);
				cout << "\n";
				cout << " 비겼습니다";
				cout << "\n";
				Playermoney += Money * 3;
				cout << Money * 3 << "원 을 가져갑니다";
				cout << "\n";

				break;


			case 1: case -2:

				Sleep(1000);
				cout << "\n";
				cout << " 졌습니다";
				cout << "\n";
				Playermoney -= Money * 7;
				cout << Money * 7 << "원 을 잃었습니다";
				cout << "\n";


				break;

			case -1: case 2:

				Sleep(1000);
				cout << "\n";
				cout << " 이겼습니다";
				cout << "\n";
				Playermoney += Money * 7;
				cout << Money * 7 << "원 을 가져갑니다";
				cout << "\n";


				break;

			}
		}
		else
		{

			cout << "정해진 숫자 1~3을 내주세요" << endl;
			cout << "\n";

		}
		cout << "현재 금액은" << Playermoney << "원입니다" << endl;
		NumD++;

	}


	/* 과제 2. 복습

	-지금까지 배운 내용을 복습한다.

	- 어떻게 복습을 했는지 구현화 시켜온다.

	-
	printf, sacnf_s 사용이 아예 생소하므로 전체적으로 살펴보면서
	수업당시 입출력됐던 일부 부분들을 printf, sacnf_s로 변환,

	*/





	printf("지옥에 온걸 환영해\n");
	printf("문자 출력: 쌍따옴표 안에 작성하면 된다\n");
	printf("숫자 출력: 12345 그냥 숫자 적으면 된다.\n");
	printf("★\n");
	printf("◈\n");



	int TestNumA = true;
	int TestNumB = false;
	int TestResult = TestNumA + TestNumB;

	printf("boolean : %d\n", TestResult);
	printf("정수 1사이즈 : %d\n", sizeof(1));
	printf("정수 2사이즈 : %d\n", sizeof(2));
	printf("true 사이즈: %d\n", sizeof(true));
	printf("true 사이즈: %d\n", sizeof(false));

	short ValueA = 10;
	int ValueB = 20;
	long ValueC = 30;
	long long ValueD = 40;
	float ValueE = 50;


	printf("c언어 short : %d, %d\n", ValueA, sizeof(ValueA));
	printf("c언어 int : %d, %d\n", ValueB, sizeof(ValueB));
	printf("c언어 long: %ld, %d\n,", ValueC, sizeof(ValueC));
	printf("c언어 long long : %lld, %d\n", ValueD, sizeof(ValueD));
	printf("c언어 flaot : %f, %d\n", ValueE, sizeof(ValueE));

	//long은 l이 붙고 long long은 ll floaot은 d가 f로 대체

	srand(time(NULL));


	int numR;

	numR = rand() % 5; // 


	printf("무작위 수 반환 %d\n", numR);

	int numberA = 0;
	numberA = 2;
	numberA++;
	numberA = 6;
	numberA++;
	numberA = +5;
	numberA--;
	numberA -= 2;
	numberA *= 3;
	numberA /= 2;

	printf("numberA의 값: %d\n", numberA);

	int i;
	for (i = 0; i < 10; i++)
	{

		printf("[%d]번째공부하고 인내하면 너도 개발자\n", i);
	}

	int j = 1;
	for (int i = 0; i < 5; i++)
	{
		printf("전위 증가 %d\n", ++j);
		printf("후위 증가 %d\n", j++);
	}


	int nOperator;

	printf("내가입력한 숫자:");

	scanf_s("%d", &nOperator);

	if (nOperator == 0)
	{

		printf("게임 1\n");
	}

	else if (nOperator == 1)
	{
		printf("게임 2\n");
	}



	else
	{
		printf("그외 나머지 게임\n");
	}



	int inputNumber;

	printf("0번, 1번, 2번중 하나를 선택하시오");
	printf("inputNumber=");
	scanf_s("%d", &inputNumber);

	/*
	switch (inputNumber)
	{

	case 0:
		printf("0번 입력시 출력");
		break;
	case 1:
		printf("1번 입력시 출력");
		break;
	case 2:
		printf("2번 입력시 출력");
		break;
	default:
		printf("그외 입력시 출력");

		break;
		*/
		// Example 05




	srand(time(NULL));

	int comNuber;
	int myNumber;

	comNuber = rand() % 100 + 1;

	printf("치트: %d \n", comNuber);

	while (true)
	{
		printf("0~100까지 숫자를 선택하자\n");
		scanf_s("%d", &myNumber);
		Sleep(1000);


		if (myNumber == comNuber)

		{
			printf("======찾았다======\n");
			Sleep(3000);
			system("cls");
			break;
		}

		else if (myNumber > comNuber)
		{
			printf("더 작은수를 생각해 보자\n");
		}
		else
		{
			printf("더 큰 수를 생각해 보자\n");
		}



	}
}

	




























