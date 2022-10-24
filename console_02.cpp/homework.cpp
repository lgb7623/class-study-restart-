#include"homework.h"

#define HOMEWORK_TYPE_PRINT 1




#define HOMEWORK_TYPE_SIMPLE 1





#define HOMEWORK_TYPE  HOMEWORK_TYPE_PRINT
#define ARRAY_TYPE    HOMEWORK_TYPE_SIMPLE 


#pragma region 과제. 1
/*
과제1. 게임 평가 평균값 구하기

항목은 6개 (배열[6]{})

게임 평가: 캐릭터, 배경, 퀘스트, 아이템, 과금, 레이드(기타등등)




-조건 1차원 배열로 값을 정한뒤 평균값을 구해서 출력

ㄴ 값 입력 X

*/
#pragma endregion



namespace HOMEWORK
{
	void HOMEWORK()
	{


#if HOMEWORK_TYPE == HOMEWORK_TYPE_PRINT


		int num1;

		float numP = 0;
		float numR = 0;
		float numU = 0;
		float numY = 0;
		float numQ = 0;
		float numM = 0;
		float numL = 0;


		// 게임성
		int numA[6]{ 60, 70, 80, 55, 45, 60 };

		// 컨텐츠
		int numB[6]{ 45, 65, 70, 60, 65, 55 };

		// 스토리
		int numC[6]{ 75, 60, 60, 30, 55, 85 };

		// 그래픽
		int numD[6]{ 55, 60, 60, 30, 55, 85 };

		// 사운드
		int numE[6]{ 20, 40, 45, 50, 60, 70 };

		// 밸런스
		int numG[6]{ 32, 50, 74, 33, 21, 33 };



		for (num1 = 0; num1 <= 5; num1++)
		{


			cout << "게임성 평가:" << numA[num1] << endl;


			numP += numA[num1];

		}


		numP /= num1; //평균값 나누기6

		cout << "게임성 평가 평균값:" << numP << endl;

		cout << endl;


		for (num1 = 0; num1 <= 5; num1++)
		{


			cout << "컨텐츠 평가:" << numB[num1] << endl;


			numR += numB[num1];

		}

		numR /= num1; //평균값 나누기6

		cout << "컨텐츠 평가 평균값:" << numR << endl;

		cout << endl;


		for (num1 = 0; num1 <= 5; num1++)
		{


			cout << "스토리 평가:" << numC[num1] << endl;


			numU += numC[num1];

		}


		numU /= num1; //평균값 나누기6

		cout << "스토리 평가 평균값:" << numU << endl;

		cout << endl;

		for (num1 = 0; num1 <= 5; num1++)
		{


			cout << "그래픽 평가:" << numD[num1] << endl;


			numY += numD[num1];

		}


		numY /= num1; //평균값 나누기6

		cout << "그래픽 평가 평균값:" << numY << endl;

		cout << endl;


		for (num1 = 0; num1 <= 5; num1++)
		{


			cout << "사운드 평가:" << numE[num1] << endl;


			numQ += numE[num1];

		}


		numQ /= num1; //평균값 나누기6

		cout << "사운드 평가 평균값:" << numQ << endl;

		cout << endl;


		for (num1 = 0; num1 <= 5; num1++)
		{


			cout << "사운드 평가:" << numG[num1] << endl;


			numM += numG[num1];

		}


		numM /= num1; //평균값 나누기6

		cout << "사운드 평가 평균값:" << numM << endl;

		cout << endl;

		float numH[6]{ numP,numR,numU,numY,numQ,numM };

		for (num1 = 0; num1 <= 5; num1++)
		{


			cout << "항목별 평균치:" << numH[num1] << endl;


			numL += numH[num1];

		}


		numL /= num1; //평균값 나누기6

		cout << "총 평균치:" << numL << endl;

		cout << endl;


#pragma region 과제. 2
		/*
		과제2. 숫자 야구

- 0 ~ 9까지의 숫자 중 컴퓨터가 임의로 3개를 뽑는다.


- 컴퓨터가 뽑은 숫자를 플레이어가 임의의 숫자 3개를 선택하여 숫자와 자릿수까지 맞추는 게임


1. 만약 선택한 숫자가 컴퓨터 숫자와
같으나 자리수가 다를경우
ㄴ 1볼(1B)

2. 만약 선택한 숫자가 컴퓨터 숫자와 같고 자리수까지 같을 경우
ㄴ 1스트라이크(1S)

3. 만약 해당되는 숫자가 없으면
ㄴ 아웃(1 out)


- 이렇게 한 턴에 3s를 만들 경우 (3개의 자리수와 숫자가 같은 경우)
몆턴만에 맞췄는지 결과를 보여주며 게임을 끝낸다.

필수: 치트



		*/
#pragma endregion

		srand(time(NULL));

		int Com[3];

		Com[0] = rand() % 10;
		Com[1] = rand() % 10;
		Com[2] = rand() % 10;

		int player;
		int player1;
		int player2;


		int c = 0;



		int B;
		int S;
		int O;
		int count = 0;

		do
		{
			B = 0;
			S = 0;
			O = 0;

			while (c == 0) {

				c = 1;

				cout << "\n" << endl;
				cout << "(치트) 컴퓨터의 자리와 숫자는 " << Com[0] << "," << Com[1] << "," << Com[2] << "," << "입니다" << endl;
				cout << "0~9까지 숫자를 하나씩 입력해주세요" << endl;

				cin >> player >> player1 >> player2;

				if (player < 0 || player > 9)
				{
					cout << "첫번째 숫자를 잘못입력했습니다! 0~9까지 숫자를 하나씩 입력해주세요" << endl;
					c = 0;

				}

				if (player1 < 0 || player1 > 9)
				{
					cout << "두번째 숫자를 잘못입력했습니다! 0~9까지 숫자를 하나씩 입력해주세요" << endl;
					c = 0;

				}

				if (player2 < 0 || player2 > 9)
				{
					cout << "세번째 숫자를 잘못입력했습니다! 0~9까지 숫자를 하나씩 입력해주세요" << endl;
					c = 0;
				}



			}//입력


			if (player == Com[0]) { S += 1; }
			else if (player == Com[1] || player == Com[2]) { B += 1; }
			else { O += 1; }


			if (player1 == Com[1]) { S += 1; } //  
			else if (player1 == Com[0] || player1 == Com[2]) { B += 1; }
			else { O += 1; }


			if (player2 == Com[2]) { S += 1; }
			else if (player2 == Com[0] || player2 == Com[1]) { B += 1; }
			else { O += 1; }


			cout << "스트라이크:" << S << "볼:" << B << "아웃:" << O << endl;

			c = 0;

			count += 1;

		} while (S != 3);

		cout << count << "번 걸렸습니다" << endl;






#if ARRAY_TYPE  ==  HOMEWORK_TYPE_SIMPLE

#else


#endif

#else

#endif



	}




}