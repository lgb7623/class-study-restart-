#include<iostream>
#include<Windows.h>
#include<time.h>
#include<string>

using namespace std;






struct lott // 로또 클래스
{
	int numA[45]; // 컴퓨터가 뽑을 숫자 
	int numR;
	int numR2;
	int numR3;

	int imsi[6];
};

struct sumA // 더하기
{
	int numA;
	int numB;
	int min;
	int sum = 0;

};




void main()
{
	srand(time(NULL));

	lott com;
	lott player;


	com.numA[45];

	for (int i = 0; i < 44;) // 인덱스값= 값.
	{
		com.numA[i] = i + 1;
		i += 1;
	}


	for (int i = 0; i < 1000; i++)
	{
		com.numR = rand() % 44;
		com.numR2 = rand() % 44;

		com.numR3 = com.numA[com.numR];
		com.numA[com.numR] = com.numA[com.numR2];
		com.numA[com.numR2] = com.numR3;
	}

	for (int i = 0; i < 6; i++) { cout << "(치트)" << (i + 1) << "번째 번호 : " << com.numA[i] << endl; }

	cout << "(치트)보너스 번호 : " << com.numA[6] << endl;
	//번호 출력

	cout << "로또 번호를 입력하세요 1 ~ 46" << endl;


	for (int i = 0; i < 6; i++) { cin >> player.imsi[i]; }


	//6=1등 2등 5+보너스 3등 5개 4등 4개 5등 3개
	int count = 0;
	int b = 0;

	for (int i = 0; i < 6; i++)//판정
	{
		for (int j = 0; j < 6; j++)
		{
			if (player.imsi[i] == com.numA[j]) { count++; }
		}

		if (player.imsi[i] == com.numA[6]) { b++; }//보너스


	}

	//몇등인지

	for (int i = 0; i < 6; i++) { cout << (i + 1) << "번째 당첨 번호 : " << com.numA[i] << endl; }

	cout << "보너스 당첨 번호 : " << com.numA[6] << endl;


	if ((count == 6) && (b == 0))
	{
		cout << "1등당첨" << endl;
	}
	else if ((count == 5) && (b == 1)) { cout << "2등당첨" << endl; }
	else if ((count == 5) && (b == 0)) { cout << "3등당첨" << endl; }
	else if ((count == 4) && (b == 0)) { cout << "4등당첨" << endl; }
	else if ((count == 3) && (b == 0)) { cout << "5등당첨" << endl; }




	//============================================================//
	sumA sumB;

	cout << "두정수를 입력하세요" << endl;

	for (int i = 0; i < 10 && sumB.sum <= 100; i++)// 10번돈다
	{
		cin >> sumB.numA;
		cin >> sumB.numB;
		if (sumB.numA < sumB.numB)// a가 b보다 작으면
		{
			for (int min = sumB.numA + 1; min < sumB.numB; min++) //a+1 ~ b-1 까지 수를 더한다
			{
				if (sumB.sum <= 100) { sumB.sum += min; }


				else if (sumB.sum >= 100) { cout << "숫자의 합이 100을 초과하였습니다" << endl; }
			}

		}

		else { cout << "첫번째 숫자가 두번째 숫자보다 크면 안됩니다" << endl; }

		cout << "숫자의 합은" << sumB.sum << endl;

	}
}







