#include<iostream>
#include<Windows.h>
#include<time.h>
#include<string>

using namespace std;






struct lott // �ζ� Ŭ����
{
	int numA[45]; // ��ǻ�Ͱ� ���� ���� 
	int numR;
	int numR2;
	int numR3;

	int imsi[6];
};

struct sumA // ���ϱ�
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

	for (int i = 0; i < 44;) // �ε�����= ��.
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

	for (int i = 0; i < 6; i++) { cout << "(ġƮ)" << (i + 1) << "��° ��ȣ : " << com.numA[i] << endl; }

	cout << "(ġƮ)���ʽ� ��ȣ : " << com.numA[6] << endl;
	//��ȣ ���

	cout << "�ζ� ��ȣ�� �Է��ϼ��� 1 ~ 46" << endl;


	for (int i = 0; i < 6; i++) { cin >> player.imsi[i]; }


	//6=1�� 2�� 5+���ʽ� 3�� 5�� 4�� 4�� 5�� 3��
	int count = 0;
	int b = 0;

	for (int i = 0; i < 6; i++)//����
	{
		for (int j = 0; j < 6; j++)
		{
			if (player.imsi[i] == com.numA[j]) { count++; }
		}

		if (player.imsi[i] == com.numA[6]) { b++; }//���ʽ�


	}

	//�������

	for (int i = 0; i < 6; i++) { cout << (i + 1) << "��° ��÷ ��ȣ : " << com.numA[i] << endl; }

	cout << "���ʽ� ��÷ ��ȣ : " << com.numA[6] << endl;


	if ((count == 6) && (b == 0))
	{
		cout << "1���÷" << endl;
	}
	else if ((count == 5) && (b == 1)) { cout << "2���÷" << endl; }
	else if ((count == 5) && (b == 0)) { cout << "3���÷" << endl; }
	else if ((count == 4) && (b == 0)) { cout << "4���÷" << endl; }
	else if ((count == 3) && (b == 0)) { cout << "5���÷" << endl; }




	//============================================================//
	sumA sumB;

	cout << "�������� �Է��ϼ���" << endl;

	for (int i = 0; i < 10 && sumB.sum <= 100; i++)// 10������
	{
		cin >> sumB.numA;
		cin >> sumB.numB;
		if (sumB.numA < sumB.numB)// a�� b���� ������
		{
			for (int min = sumB.numA + 1; min < sumB.numB; min++) //a+1 ~ b-1 ���� ���� ���Ѵ�
			{
				if (sumB.sum <= 100) { sumB.sum += min; }


				else if (sumB.sum >= 100) { cout << "������ ���� 100�� �ʰ��Ͽ����ϴ�" << endl; }
			}

		}

		else { cout << "ù��° ���ڰ� �ι�° ���ں��� ũ�� �ȵ˴ϴ�" << endl; }

		cout << "������ ����" << sumB.sum << endl;

	}
}







