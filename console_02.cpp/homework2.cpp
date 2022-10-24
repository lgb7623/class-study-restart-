#include<iostream>
#include<time.h>
#include<Windows.h>



using namespace std;



void main()
{

	//4개 c,s,d,h
	int cardC[13] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
	int cardS[13] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
	int cardD[13] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
	int cardH[13] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
	int goldA = 10000; // 초기자금
	int batting;  //배팅
	int randomA; // 종류별 랜덤 SDHC
	int randomB;// 값별 랜덤
	int numA; // 카드 뽑는것 3개 값 돌리기
	int numC; // 전체 돌리기
	int numD; // 2번째 카드 뽑는것 돌리기
	int dech[3];
	int lastCard;
	int bat1;
	int bat2;


	for (numC = 0; (numC < 17) && goldA > 999; numC++)
	{

		for (numA = 0; numA < 3;)
		{

			srand(time(NULL));

			randomA = rand() % 4;// 카드종류



			if (randomA == 0)
			{
				for (numD = 0; numD < 1;)
				{
					randomB = rand() % 13;

					if (cardC[randomB] != NULL)
					{

						dech[numA] = cardC[randomB];
						cardC[randomB] = NULL;

						if (numA < 2)
						{
							cout << endl;
							cout << "♣";

							if (dech[numA] == 1)  cout << "A" << endl;
							else if (dech[numA] == 11) cout << "J" << endl;
							else if (dech[numA] == 12) cout << "Q" << endl;
							else if (dech[numA] == 13) cout << "K" << endl;
							else cout << dech[numA] << endl;

						}
						else
						{
							cout << endl;
							cout << "치트 " << "♣";

							if (dech[numA] == 1)  cout << "A" << endl;
							else if (dech[numA] == 11) cout << "J" << endl;
							else if (dech[numA] == 12) cout << "Q" << endl;
							else if (dech[numA] == 13) cout << "K" << endl;
							else cout << dech[numA] << endl;
							lastCard = randomA;
						}

						numD += 1;
						numA += 1;
					}

					else if ((cardC[0] == NULL) && (cardC[1] == NULL) && (cardC[2] == NULL) && (cardC[3] == NULL) &&
						(cardC[4] == NULL) && (cardC[5] == NULL) && (cardC[6] == NULL) && (cardC[7] == NULL) && (cardC[8] == NULL) && (cardC[9] == NULL) && (cardC[10] == NULL)
						&& (cardC[11] == NULL) && (cardC[12] == NULL))
					{
						numD += 1;

					}
					else if (cardC[randomB] == NULL)
					{
						numD += 1;
					}


				}

			}
			if (randomA == 1)
			{
				for (numD = 0; numD < 1;)
				{
					randomB = rand() % 13;

					if (cardH[randomB] != NULL)
					{

						dech[numA] = cardH[randomB];
						cardH[randomB] = NULL;
						if (numA < 2)
						{
							cout << endl;
							cout << "♥";

							if (dech[numA] == 1)  cout << "A" << endl;
							else if (dech[numA] == 11) cout << "J" << endl;
							else if (dech[numA] == 12) cout << "Q" << endl;
							else if (dech[numA] == 13) cout << "K" << endl;
							else cout << dech[numA] << endl;

						}
						else
						{
							cout << endl;
							cout << "치트 " << "♥";

							if (dech[numA] == 1)  cout << "A" << endl;
							else if (dech[numA] == 11) cout << "J" << endl;
							else if (dech[numA] == 12) cout << "Q" << endl;
							else if (dech[numA] == 13) cout << "K" << endl;
							else cout << dech[numA] << endl;
							lastCard = randomA;
						}
						numD += 1;
						numA += 1;
					}

					else if ((cardH[0] == NULL) && (cardH[1] == NULL) && (cardH[2] == NULL) && (cardH[3] == NULL) &&
						(cardH[4] == NULL) && (cardH[5] == NULL) && (cardH[6] == NULL) && (cardH[7] == NULL) && (cardH[8] == NULL) && (cardH[9] == NULL) && (cardH[10] == NULL)
						&& (cardH[11] == NULL) && (cardH[12] == NULL))
					{
						numD += 1;

					}
					else if (cardH[randomB] == NULL)
					{
						numD += 1;
					}


				}

			}

			if (randomA == 2)
			{
				for (numD = 0; numD < 1;)
				{
					randomB = rand() % 13;

					if (cardS[randomB] != NULL)
					{

						dech[numA] = cardS[randomB];
						cardS[randomB] = NULL;
						if (numA < 2)
						{
							cout << endl;
							cout << "♠";

							if (dech[numA] == 1)  cout << "A" << endl;
							else if (dech[numA] == 11) cout << "J" << endl;
							else if (dech[numA] == 12) cout << "Q" << endl;
							else if (dech[numA] == 13) cout << "K" << endl;
							else cout << dech[numA] << endl;

						}
						else
						{
							cout << endl;
							cout << "치트 " << "♠";

							if (dech[numA] == 1)  cout << "A" << endl;
							else if (dech[numA] == 11) cout << "J" << endl;
							else if (dech[numA] == 12) cout << "Q" << endl;
							else if (dech[numA] == 13) cout << "K" << endl;
							else cout << dech[numA] << endl;
							lastCard = randomA;
						}
						numD += 1;
						numA += 1;
					}

					else if ((cardS[0] == NULL) && (cardS[1] == NULL) && (cardS[2] == NULL) && (cardS[3] == NULL) &&
						(cardS[4] == NULL) && (cardS[5] == NULL) && (cardS[6] == NULL) && (cardS[7] == NULL) && (cardS[8] == NULL) && (cardS[9] == NULL) && (cardS[10] == NULL)
						&& (cardS[11] == NULL) && (cardS[12] == NULL))
					{
						numD += 1;

					}
					else if (cardS[randomB] == NULL)
					{
						numD += 1;
					}


				}

			}
			if (randomA == 3)
			{
				for (numD = 0; numD < 1;)
				{
					randomB = rand() % 13;

					if (cardD[randomB] != NULL)
					{

						dech[numA] = cardD[randomB];
						cardD[randomB] = NULL;
						if (numA < 2)
						{
							cout << endl;
							cout << "◆";

							if (dech[numA] == 1)  cout << "A" << endl;
							else if (dech[numA] == 11) cout << "J" << endl;
							else if (dech[numA] == 12) cout << "Q" << endl;
							else if (dech[numA] == 13) cout << "K" << endl;
							else cout << dech[numA] << endl;

						}
						else
						{
							cout << endl;
							cout << "치트 " << "◆";

							if (dech[numA] == 1)  cout << "A" << endl;
							else if (dech[numA] == 11) cout << "J" << endl;
							else if (dech[numA] == 12) cout << "Q" << endl;
							else if (dech[numA] == 13) cout << "K" << endl;
							else cout << dech[numA] << endl;
							lastCard = randomA;
						}
						numD += 1;
						numA += 1;
					}

					else if ((cardD[0] == NULL) && (cardD[1] == NULL) && (cardD[2] == NULL) && (cardD[3] == NULL) &&
						(cardD[4] == NULL) && (cardD[5] == NULL) && (cardD[6] == NULL) && (cardD[7] == NULL) && (cardD[8] == NULL) && (cardD[9] == NULL) && (cardD[10] == NULL)
						&& (cardD[11] == NULL) && (cardD[12] == NULL))
					{
						numD += 1;

					}
					else if (cardD[randomB] == NULL)
					{
						numD += 1;
					}


				}

			}



		}//3장 뽑는 for

		cout << "1000원 이상 배팅을 해주세요 " << endl;
		cin >> batting;
		for (bat2 = 0; bat2 < 1;)//
		{
			bat1 = 0;
			for (bat1 = 0; bat1 < 1;)
			{
				if ((1000 > batting) || (batting > goldA))
				{

					cout << "소지금" << goldA << "이하 1000원 이상 배팅을 해주세요" << endl;
					cin >> batting;
					bat1++;

				}
				else if ((999 < batting) || (batting < goldA))
				{
					if ((dech[0] <= dech[2]) && (dech[2] <= dech[1]))
					{
						cout << "배팅성공!\t" << batting * 2 << "원을 얻었습니다";

						goldA += batting * 2;
						bat1 += 1;
						bat2 += 1;
					}

					else if ((dech[1] <= dech[2]) && (dech[2] <= dech[0]))
					{

						cout << "배팅성공!\t" << batting * 2 << "원을 얻었습니다";
						goldA += batting * 2;;
						bat1 += 1;
						bat2 += 1;
					}

					else
					{


						cout << "배팅실패!\t" << batting << "원을 잃었습니다";
						goldA -= batting;
						bat1++;
						bat2 += 1;

					}



				}
			}
		}
		cout << "\n";
		if (lastCard == 0)
		{




			cout << "마지막 카드:" << "♣";
			if (dech[2] == 1)  cout << "A" << endl;
			else if (dech[2] == 11) cout << "J" << endl;
			else if (dech[2] == 12) cout << "Q" << endl;
			else if (dech[2] == 13) cout << "K" << endl;
			else cout << dech[2] << endl;

		}
		else if (lastCard == 1)
		{
			cout << "마지막 카드:" << "♥";
			if (dech[2] == 1)  cout << "A" << endl;
			else if (dech[2] == 11) cout << "J" << endl;
			else if (dech[2] == 12) cout << "Q" << endl;
			else if (dech[2] == 13) cout << "K" << endl;
			else  cout << dech[2] << endl;

		}
		else if (lastCard == 2)
		{
			cout << "마지막 카드:" << "♠";
			if (dech[2] == 1)  cout << "A" << endl;
			else if (dech[2] == 11) cout << "J" << endl;
			else if (dech[2] == 12) cout << "Q" << endl;
			else if (dech[2] == 13) cout << "K" << endl;
			else cout << dech[2] << endl;

		}
		else
		{
			cout << "마지막 카드:" << "◆";
			if (dech[2] == 1)  cout << "A" << endl;
			else if (dech[2] == 11) cout << "J" << endl;
			else if (dech[2] == 12) cout << "Q" << endl;
			else if (dech[2] == 13) cout << "K" << endl;
			else cout << dech[2] << endl;

		}
		cout << "현재 내가 가지고 있는 골드량:" << goldA << endl;
		cout << "현재" << numC + 1 << "번 실행" << endl;

	}// 17번    
}//main end
