#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<stdbool.h>
// 99���� 1���� ���
//1���� 100���� ���
// ¦���� ���

using namespace std;


void main()
{//1
	cout << "for ���� �̿��Ͽ� 99���� 1���� ¦�� ���\n" << endl;
	int numq;

	for (numq = 98; numq > 1; numq -= 2)
	{

		cout << numq << endl;
	}

	//2
	cout << "for ���� �̿��Ͽ� 1���� 100���� ¦�� ���\n" << endl;
	int numw;

	for (numw = 2; numw < 101; numw += 2)
	{

		cout << numw << endl;
	}
	//3
	int nume = 98;
	cout << "while ���� �̿��Ͽ� 99���� 1���� ¦�� ���\n" << endl;

	while (nume > 1) {
		cout << nume << endl;
		nume -= 2;


	}
	//4
	int numr = 2;
	cout << "while ���� �̿��Ͽ� 1���� 100���� ¦�� ���\n" << endl;

	while (numr < 101) {
		cout << numr << endl;
		numr += 2;


	}


	/*

			- �ΰ��� ������ �޾Ƽ� �μ��� ������ �����ǰ���� ����ϴ� ���α׷��� �ۼ��Ѵ�.


			-3���� ����(num1, num2, num3)�� �޾Ƽ� ���� ������ ����� ����ϴ� ���α׷� �ۼ�

			(num1 + num2) * (num3 + num1) % num1 = ?


			-�Է¹��� �� ������ ���������� ��� �Ǵ� ��� �������� ����ϴ� ���α׷��� �ۼ��Ѵ�.

			EX) 7�� 2�� �ԷµǸ� ������ 3 / �������� 1�� ��µǸ� �ȴ�.

		*/

		// �ΰ��� ������ �޾� �μ��� ������ ������ ����� ����ϴ� ���α׷�

	cout << "\n";
	cout << "\n";
	cout << "���ϱ� ���� ���� �����Դϴ�";

	int nmut = 0;
	int numy = 0;
	cout << "\n";
	cout << "\n";
	cout << "\n";

	cout << "����1" << "\n";
	cin >> nmut;

	cout << "\n";


	cout << "�� 2" << "\n";
	cin >> numy;
	cout << "\n";

	cout << "���ϱ� ���" << endl;
	cout << nmut + numy << endl;
	cout << "\n";
	cout << "������" << endl;
	cout << nmut - numy << endl;




	//3���� ����(num1, num2, num3)�� �޾Ƽ� ���� ������ ����� ����ϴ� ���α׷� �ۼ�
//(num1 + num2) * (num3 + num1) % num1 = ?



	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	printf("\n");

	printf("�ι�° ���� �Դϴ�");
	printf("������ ������� �Է����ּ���");

	printf("\n");

	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	scanf_s("%d", &num3);

	printf("\n");

	int num4 = (num1 + num2) * (num3 + num1) % num1;

	printf("\n");

	printf("%d", num4);

	//-�Է¹��� �� ������ ���������� ��� �Ǵ� ��� �������� ����ϴ� ���α׷��� �ۼ��Ѵ�.

//X) 7�� 2�� �ԷµǸ� ������ 3 / �������� 1�� ��µǸ� �ȴ�.

	cout << "\n";
	cout << "\n";
	cout << "�� ������ ���� �Դϴ�" << "\n";

	int nmu5 = 0;
	int num6 = 0;
	cout << "\n";
	cout << "\n";
	cout << "\n";

	cout << "����1" << "\n";
	cin >> nmu5;

	cout << "\n";


	cout << "�� 2" << "\n";
	cin >> num6;
	cout << "\n";

	cout << "��" << endl;
	cout << nmu5 / num6 << endl;
	cout << "\n";
	cout << "������" << endl;
	cout << nmu5 % num6 << endl;
	/*
	����3.�ݺ��� ����

		- ���� �ϳ��� �Է� �޾� - 5 �� �ݺ������� ����Ǵ� ���� �����.


		- ��������: -15�� �Ѿ�� Ż��

		- ���� : �Է¹��� ���� - 10 ~10 ������ ���ڿ����ϰ� �̿��� �� �Է½� �׳� ����

		�� ���ǽİ� �� �����ڸ� �� ���� ���ǽ��� ����� WHILE���� ���ư��Բ� �����.
*/

	int nmu7 = 0;

	cout << "\n";
	cout << "\n";
	cout << "-5 �����Դϴ�" << "\n";
	cout << "\n";
	cout << "���ڸ� ������� ������ �Է��� �ּ���";
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

