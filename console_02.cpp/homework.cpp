#include"homework.h"

#define HOMEWORK_TYPE_PRINT 1




#define HOMEWORK_TYPE_SIMPLE 1





#define HOMEWORK_TYPE  HOMEWORK_TYPE_PRINT
#define ARRAY_TYPE    HOMEWORK_TYPE_SIMPLE 


#pragma region ����. 1
/*
����1. ���� �� ��հ� ���ϱ�

�׸��� 6�� (�迭[6]{})

���� ��: ĳ����, ���, ����Ʈ, ������, ����, ���̵�(��Ÿ���)




-���� 1���� �迭�� ���� ���ѵ� ��հ��� ���ؼ� ���

�� �� �Է� X

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


		// ���Ӽ�
		int numA[6]{ 60, 70, 80, 55, 45, 60 };

		// ������
		int numB[6]{ 45, 65, 70, 60, 65, 55 };

		// ���丮
		int numC[6]{ 75, 60, 60, 30, 55, 85 };

		// �׷���
		int numD[6]{ 55, 60, 60, 30, 55, 85 };

		// ����
		int numE[6]{ 20, 40, 45, 50, 60, 70 };

		// �뷱��
		int numG[6]{ 32, 50, 74, 33, 21, 33 };



		for (num1 = 0; num1 <= 5; num1++)
		{


			cout << "���Ӽ� ��:" << numA[num1] << endl;


			numP += numA[num1];

		}


		numP /= num1; //��հ� ������6

		cout << "���Ӽ� �� ��հ�:" << numP << endl;

		cout << endl;


		for (num1 = 0; num1 <= 5; num1++)
		{


			cout << "������ ��:" << numB[num1] << endl;


			numR += numB[num1];

		}

		numR /= num1; //��հ� ������6

		cout << "������ �� ��հ�:" << numR << endl;

		cout << endl;


		for (num1 = 0; num1 <= 5; num1++)
		{


			cout << "���丮 ��:" << numC[num1] << endl;


			numU += numC[num1];

		}


		numU /= num1; //��հ� ������6

		cout << "���丮 �� ��հ�:" << numU << endl;

		cout << endl;

		for (num1 = 0; num1 <= 5; num1++)
		{


			cout << "�׷��� ��:" << numD[num1] << endl;


			numY += numD[num1];

		}


		numY /= num1; //��հ� ������6

		cout << "�׷��� �� ��հ�:" << numY << endl;

		cout << endl;


		for (num1 = 0; num1 <= 5; num1++)
		{


			cout << "���� ��:" << numE[num1] << endl;


			numQ += numE[num1];

		}


		numQ /= num1; //��հ� ������6

		cout << "���� �� ��հ�:" << numQ << endl;

		cout << endl;


		for (num1 = 0; num1 <= 5; num1++)
		{


			cout << "���� ��:" << numG[num1] << endl;


			numM += numG[num1];

		}


		numM /= num1; //��հ� ������6

		cout << "���� �� ��հ�:" << numM << endl;

		cout << endl;

		float numH[6]{ numP,numR,numU,numY,numQ,numM };

		for (num1 = 0; num1 <= 5; num1++)
		{


			cout << "�׸� ���ġ:" << numH[num1] << endl;


			numL += numH[num1];

		}


		numL /= num1; //��հ� ������6

		cout << "�� ���ġ:" << numL << endl;

		cout << endl;


#pragma region ����. 2
		/*
		����2. ���� �߱�

- 0 ~ 9������ ���� �� ��ǻ�Ͱ� ���Ƿ� 3���� �̴´�.


- ��ǻ�Ͱ� ���� ���ڸ� �÷��̾ ������ ���� 3���� �����Ͽ� ���ڿ� �ڸ������� ���ߴ� ����


1. ���� ������ ���ڰ� ��ǻ�� ���ڿ�
������ �ڸ����� �ٸ����
�� 1��(1B)

2. ���� ������ ���ڰ� ��ǻ�� ���ڿ� ���� �ڸ������� ���� ���
�� 1��Ʈ����ũ(1S)

3. ���� �ش�Ǵ� ���ڰ� ������
�� �ƿ�(1 out)


- �̷��� �� �Ͽ� 3s�� ���� ��� (3���� �ڸ����� ���ڰ� ���� ���)
�p�ϸ��� ������� ����� �����ָ� ������ ������.

�ʼ�: ġƮ



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
				cout << "(ġƮ) ��ǻ���� �ڸ��� ���ڴ� " << Com[0] << "," << Com[1] << "," << Com[2] << "," << "�Դϴ�" << endl;
				cout << "0~9���� ���ڸ� �ϳ��� �Է����ּ���" << endl;

				cin >> player >> player1 >> player2;

				if (player < 0 || player > 9)
				{
					cout << "ù��° ���ڸ� �߸��Է��߽��ϴ�! 0~9���� ���ڸ� �ϳ��� �Է����ּ���" << endl;
					c = 0;

				}

				if (player1 < 0 || player1 > 9)
				{
					cout << "�ι�° ���ڸ� �߸��Է��߽��ϴ�! 0~9���� ���ڸ� �ϳ��� �Է����ּ���" << endl;
					c = 0;

				}

				if (player2 < 0 || player2 > 9)
				{
					cout << "����° ���ڸ� �߸��Է��߽��ϴ�! 0~9���� ���ڸ� �ϳ��� �Է����ּ���" << endl;
					c = 0;
				}



			}//�Է�


			if (player == Com[0]) { S += 1; }
			else if (player == Com[1] || player == Com[2]) { B += 1; }
			else { O += 1; }


			if (player1 == Com[1]) { S += 1; } //  
			else if (player1 == Com[0] || player1 == Com[2]) { B += 1; }
			else { O += 1; }


			if (player2 == Com[2]) { S += 1; }
			else if (player2 == Com[0] || player2 == Com[1]) { B += 1; }
			else { O += 1; }


			cout << "��Ʈ����ũ:" << S << "��:" << B << "�ƿ�:" << O << endl;

			c = 0;

			count += 1;

		} while (S != 3);

		cout << count << "�� �ɷȽ��ϴ�" << endl;






#if ARRAY_TYPE  ==  HOMEWORK_TYPE_SIMPLE

#else


#endif

#else

#endif



	}




}