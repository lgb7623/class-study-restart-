#include<iostream>
#include<time.h>
#include<windows.h>


/*����1.����������

- switch���� �̿��� �����. ok

- ġƮ ��� ok
�� ���� ��� �߰�
�� �ʱ� ������ 10, 000�� ����

- �ּ� ������ 1, 000�� ����

��5���� �ϰų� ���� ���� ���� ���� ������ ������ �����Ѵ�

- �̱�� �ǵ��� X5�踦 ��� ���� �ǵ��� X7�踦 �Ҵ´�

- ��� ��� �ǵ��� X3�� ��´�.
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
		cout << " (ġƮ) pc�� �� ����:" << Com << endl;
		cout << "����, ����, �� �� �ϳ��� ���ϼ���" << endl;
		cout << "����(1), ����(2), ��(3) �Դϴ� ���ڸ� �Է����ּ���" << endl;
		cin >> Player;
		cout << "������ �ݾ��� �����ּ��� (�ּҹ��þ� 1000��(���ڸ� �Է�))" << endl;
		cin >> Money;

		if (Money < 1000)
		{

			cout << "1000�� �̻��� �ݾ��� �������ּ���" << endl;
			cout << "\n";

		}

		else if (Player < 4 && Player > 0)
		{

			switch (Com -= Player)
			{


			case 0:
				Sleep(1000);
				cout << "\n";
				cout << " �����ϴ�";
				cout << "\n";
				Playermoney += Money * 3;
				cout << Money * 3 << "�� �� �������ϴ�";
				cout << "\n";

				break;


			case 1: case -2:

				Sleep(1000);
				cout << "\n";
				cout << " �����ϴ�";
				cout << "\n";
				Playermoney -= Money * 7;
				cout << Money * 7 << "�� �� �Ҿ����ϴ�";
				cout << "\n";


				break;

			case -1: case 2:

				Sleep(1000);
				cout << "\n";
				cout << " �̰���ϴ�";
				cout << "\n";
				Playermoney += Money * 7;
				cout << Money * 7 << "�� �� �������ϴ�";
				cout << "\n";


				break;

			}
		}
		else
		{

			cout << "������ ���� 1~3�� ���ּ���" << endl;
			cout << "\n";

		}
		cout << "���� �ݾ���" << Playermoney << "���Դϴ�" << endl;
		NumD++;

	}


	/* ���� 2. ����

	-���ݱ��� ��� ������ �����Ѵ�.

	- ��� ������ �ߴ��� ����ȭ ���ѿ´�.

	-
	printf, sacnf_s ����� �ƿ� �����ϹǷ� ��ü������ ���캸�鼭
	������� ����µƴ� �Ϻ� �κе��� printf, sacnf_s�� ��ȯ,

	*/





	printf("������ �°� ȯ����\n");
	printf("���� ���: �ֵ���ǥ �ȿ� �ۼ��ϸ� �ȴ�\n");
	printf("���� ���: 12345 �׳� ���� ������ �ȴ�.\n");
	printf("��\n");
	printf("��\n");



	int TestNumA = true;
	int TestNumB = false;
	int TestResult = TestNumA + TestNumB;

	printf("boolean : %d\n", TestResult);
	printf("���� 1������ : %d\n", sizeof(1));
	printf("���� 2������ : %d\n", sizeof(2));
	printf("true ������: %d\n", sizeof(true));
	printf("true ������: %d\n", sizeof(false));

	short ValueA = 10;
	int ValueB = 20;
	long ValueC = 30;
	long long ValueD = 40;
	float ValueE = 50;


	printf("c��� short : %d, %d\n", ValueA, sizeof(ValueA));
	printf("c��� int : %d, %d\n", ValueB, sizeof(ValueB));
	printf("c��� long: %ld, %d\n,", ValueC, sizeof(ValueC));
	printf("c��� long long : %lld, %d\n", ValueD, sizeof(ValueD));
	printf("c��� flaot : %f, %d\n", ValueE, sizeof(ValueE));

	//long�� l�� �ٰ� long long�� ll floaot�� d�� f�� ��ü

	srand(time(NULL));


	int numR;

	numR = rand() % 5; // 


	printf("������ �� ��ȯ %d\n", numR);

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

	printf("numberA�� ��: %d\n", numberA);

	int i;
	for (i = 0; i < 10; i++)
	{

		printf("[%d]��°�����ϰ� �γ��ϸ� �ʵ� ������\n", i);
	}

	int j = 1;
	for (int i = 0; i < 5; i++)
	{
		printf("���� ���� %d\n", ++j);
		printf("���� ���� %d\n", j++);
	}


	int nOperator;

	printf("�����Է��� ����:");

	scanf_s("%d", &nOperator);

	if (nOperator == 0)
	{

		printf("���� 1\n");
	}

	else if (nOperator == 1)
	{
		printf("���� 2\n");
	}



	else
	{
		printf("�׿� ������ ����\n");
	}



	int inputNumber;

	printf("0��, 1��, 2���� �ϳ��� �����Ͻÿ�");
	printf("inputNumber=");
	scanf_s("%d", &inputNumber);

	/*
	switch (inputNumber)
	{

	case 0:
		printf("0�� �Է½� ���");
		break;
	case 1:
		printf("1�� �Է½� ���");
		break;
	case 2:
		printf("2�� �Է½� ���");
		break;
	default:
		printf("�׿� �Է½� ���");

		break;
		*/
		// Example 05




	srand(time(NULL));

	int comNuber;
	int myNumber;

	comNuber = rand() % 100 + 1;

	printf("ġƮ: %d \n", comNuber);

	while (true)
	{
		printf("0~100���� ���ڸ� ��������\n");
		scanf_s("%d", &myNumber);
		Sleep(1000);


		if (myNumber == comNuber)

		{
			printf("======ã�Ҵ�======\n");
			Sleep(3000);
			system("cls");
			break;
		}

		else if (myNumber > comNuber)
		{
			printf("�� �������� ������ ����\n");
		}
		else
		{
			printf("�� ū ���� ������ ����\n");
		}



	}
}

	




























