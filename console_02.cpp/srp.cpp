#include<time.h>
#include<iostream>
#include<windows.h>

using namespace std;

/*
����1.���� ���� �� ����

- if ���� �̿��� �����. ok

�� switch���� ������� �ʴ´�.

- ������ ���� Ƚ���� �� 5�� 5

�� ���Ĵ� ���� ����

- �ʼ�: ġƮŰ
*/

// ���� �õ� �ʱ�ȭ


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



		cout << " (ġƮ) pc�� �� ����:" << com << endl;
		cout << "����, ����, �� �� �ϳ��� ���ϼ���" << endl;
		cout << "����(1), ����(2), ��(3) �Դϴ� ���ڸ� �Է����ּ���" << endl;

		cin >> my;


		if (com == my)//���
		{
			cout << " pc�� ���� (����(1) ����(2) ��(3):" << com << endl;
			cout << "�����ϴ�." << endl;
			Sleep(1000);
		}
		else if (my < num1 || my > num3)
		{
			cout << "��ȣ�� 1~3 ���� �Է��ϼ���" << endl;

		}
		else if (com == num1)//����� �ʾ��� ���
		{
			if (my == num2)
			{
				cout << " pc�� ���� (����(1) ����(2) ��(3):" << com << endl;
				cout << "�̰���ϴ�!" << endl;
				Sleep(1000);
			}

			else if (my == num3)
			{
				cout << " pc�� ���� (����(1) ����(2) ��(3):" << com << endl;
				cout << "�����ϴ�" << endl;
				Sleep(1000);
			}

		}

		else if (com == num2)
		{
			if (my == num1)
			{
				cout << " pc�� ���� (����(1) ����(2) ��(3):" << com << endl;
				cout << "�����ϴ�" << endl;
				Sleep(1000);
			}
			else if (my == num3)
			{
				cout << " pc�� ���� (����(1) ����(2) ��(3):" << com << endl;
				cout << "�̰���ϴ�" << endl;
				Sleep(1000);
			}

		}

		else if (com == num3)
		{
			if (my == num2)
			{
				cout << " pc�� ���� (����(1) ����(2) ��(3):" << com << endl;
				cout << "�����ϴ�" << endl;
				Sleep(1000);
			}
			else if (my == num1)
			{
				cout << " pc�� ���� (����(1) ����(2) ��(3):" << com << endl;
				cout << "�̰���ϴ�" << endl;
				Sleep(1000);
			}


		}


		numc++;
	}










	/*
	 ����2. �ϼ� ��±�


	 - if���� switch �� �߿� ������ �Ǵ��� ȿ�����ΰ��� ������ �����.

	 -�����ϸ� ������� �Է��� �ް� �Է��� ���ڿ� ����??�� ���� ���

	 EX : 4�Է½� 4���� 30�� �Դϴ�. �� �ٽ� �Է� Ŀ�ǵ� Ȱ��ȭ

	 - 1������ 12������ Ȯ���� �����ؾ��ϰ� �̿��� ���ڴ� ����ó��

	 - �� 5���� �Է��ϸ� ���α׷��� ����ȴ�.

	}
	*/

	int numF = 0;
	while (numF < 5)
	{

		int num10;

		cout << "���� �ϼ� �����Դϴ�" << endl;
		cout << "ã���� �ϴ� �� =" << endl;
		cin >> num10;



		switch (num10)
		{

		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			cout << num10 << "���� 31�� �Դϴ�." << endl;
			cout << "\n";
			break;
		case 2:
			cout << num10 << "���� 28�� �Դϴ�." << endl;
			cout << "\n";
			break;
		case 4: case 6: case 9: case 11:
			cout << num10 << "���� 30�� �Դϴ�." << endl;
			cout << "\n";
			break;

		default:
			cout << "1~ 12������ �����ּ���" << endl;
			cout << "\n";
			break;

		}
		numF++;

	}


	/*
	 ����3.

 for��
 *
 **
 ***
 ****
 *****

 for��
 *****
 ****
 ***
 **
 *

 for��+ if��
 *
 **
 ***
 ****
 *****

  for��+ if��
 *****
 ****
 ***
 **
 *

	*/

	// for������ ���

	cout << "for������ ���" << endl;

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


	cout << "for������ ���" << endl;

	for (starA = 1; starA < 6; starA++) // 12345
	{


		for (starB = 6; starB != starA; starB--) 
		{

			cout << "*";



		}
		cout << endl;
	}


	cout << "for + if �����" << endl;


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

	cout << "for + if �����" << endl;


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


