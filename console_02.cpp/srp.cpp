#include<time.h>
#include<iostream>
#include<windows.h>

using namespace std;

/*
과제1.가위 바위 보 게임

- if 문을 이용해 만든다. ok

ㄴ switch문은 사용하지 않는다.

- 게임의 진행 횟수는 총 5판 5

ㄴ 이후는 게임 종료

- 필수: 치트키
*/

// 랜덤 시드 초기화


void main()
{

	int numc = 0;
	while (numc < 5)
	{


		srand(time(NULL));



		int com;
		int my;

		com = rand() % 3 + 1; // 123

		int num1 = 1;
		int num2 = 2;
		int num3 = 3;



		cout << " (치트) pc가 낼 숫자:" << com << endl;
		cout << "가위, 바위, 보 중 하나를 택하세요" << endl;
		cout << "가위(1), 바위(2), 보(3) 입니다 숫자를 입력해주세요" << endl;

		cin >> my;


		if (com == my)//비김
		{
			cout << " pc의 선택 (가위(1) 바위(2) 보(3):" << com << endl;
			cout << "비겼습니다." << endl;
			Sleep(1000);
		}
		else if (my < num1 || my > num3)
		{
			cout << "번호를 1~3 까지 입력하세요" << endl;

		}
		else if (com == num1)//비기지 않았을 경우
		{
			if (my == num2)
			{
				cout << " pc의 선택 (가위(1) 바위(2) 보(3):" << com << endl;
				cout << "이겼습니다!" << endl;
				Sleep(1000);
			}

			else if (my == num3)
			{
				cout << " pc의 선택 (가위(1) 바위(2) 보(3):" << com << endl;
				cout << "졌습니다" << endl;
				Sleep(1000);
			}

		}

		else if (com == num2)
		{
			if (my == num1)
			{
				cout << " pc의 선택 (가위(1) 바위(2) 보(3):" << com << endl;
				cout << "졌습니다" << endl;
				Sleep(1000);
			}
			else if (my == num3)
			{
				cout << " pc의 선택 (가위(1) 바위(2) 보(3):" << com << endl;
				cout << "이겼습니다" << endl;
				Sleep(1000);
			}

		}

		else if (com == num3)
		{
			if (my == num2)
			{
				cout << " pc의 선택 (가위(1) 바위(2) 보(3):" << com << endl;
				cout << "졌습니다" << endl;
				Sleep(1000);
			}
			else if (my == num1)
			{
				cout << " pc의 선택 (가위(1) 바위(2) 보(3):" << com << endl;
				cout << "이겼습니다" << endl;
				Sleep(1000);
			}


		}


		numc++;
	}










	/*
	 과제2. 일수 출력기


	 - if문과 switch 문 중에 본인이 판단해 효율적인것을 선택해 만든다.

	 -시작하면 사용자의 입력을 받고 입력한 숫자에 따라??일 인지 출력

	 EX : 4입력시 4월은 30일 입니다. → 다시 입력 커맨드 활성화

	 - 1월부터 12월까지 확인이 가능해야하고 이외의 숫자는 예외처리

	 - 총 5번을 입력하면 프로그램은 종료된다.

	}
	*/

	int numF = 0;
	while (numF < 5)
	{

		int num10;

		cout << "월별 일수 계산기입니다" << endl;
		cout << "찾고자 하는 월 =" << endl;
		cin >> num10;



		switch (num10)
		{

		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			cout << num10 << "월은 31일 입니다." << endl;
			cout << "\n";
			break;
		case 2:
			cout << num10 << "월은 28일 입니다." << endl;
			cout << "\n";
			break;
		case 4: case 6: case 9: case 11:
			cout << num10 << "월은 30일 입니다." << endl;
			cout << "\n";
			break;

		default:
			cout << "1~ 12까지만 적어주세요" << endl;
			cout << "\n";
			break;

		}
		numF++;

	}


	/*
	 과제3.

 for문
 *
 **
 ***
 ****
 *****

 for문
 *****
 ****
 ***
 **
 *

 for문+ if문
 *
 **
 ***
 ****
 *****

  for문+ if문
 *****
 ****
 ***
 **
 *

	*/

	// for문으로 찍기

	cout << "for문으로 찍기" << endl;

	int starA = 0;
	int starB = 0;

	for (starA = 1; starA < 6; starA++) //1 2 3 4 5
	{


		for (starB = 0; starB != starA; starB++)
		{
			cout << "*";



		}
		cout << endl;
	}


	cout << "for문으로 찍기" << endl;

	for (starA = 1; starA < 6; starA++) // 12345
	{


		for (starB = 6; starB != starA; starB--) 
		{

			cout << "*";



		}
		cout << endl;
	}


	cout << "for + if 별찍기" << endl;


	for (starA = 1; starA < 6; starA++)
		if (starA == 1)

		{
			cout << "*" << endl;

		}
		else if (starA == 2)
		{
			cout << "**" << endl;
		}
		else if (starA == 3)
		{
			cout << "***" << endl;
		}
		else if (starA == 4)
		{
			cout << "**** " << endl;
		}
		else
		{
			cout << "*****" << endl;
		}

	cout << "for + if 별찍기" << endl;


	for (starA = 5; starA > 0; starA--)
		if (starA == 1)

		{
			cout << "*" << endl;

		}
		else if (starA == 2)
		{
			cout << "**" << endl;
		}
		else if (starA == 3)
		{
			cout << "***" << endl;
		}
		else if (starA == 4)
		{
			cout << "**** " << endl;
		}
		else
		{
			cout << "*****" << endl;
		}


}


