#include<iostream>
#include<windows.h>
// �� Sleep() �Լ��� ����ϱ� ���� ������� �߰�
// �� Sleep(1000) 1�ʵ��� �����
// �� Sleep(500) 0.5�ʵ��� �����.
#include<time.h>


using namespace std;



// �� �ٿ� ����

void main()
{
	// ���� �õ� �ʱ�ȭ
	srand(time(NULL));
	
	int comNuber;
	int myNumber;

	comNuber = rand() % 100 + 1;
			//cout <<" ġƮ: " << comnumber << end;
 // ���ѹݺ�
	while (true)
	{
		cout << "0~100���� ������ �ϳ��� ��������" << endl;
		cin >> myNumber;
			Sleep(1000);


			if (myNumber == comNuber)

			{
				cout << "====ã�Ҵ� ====" << endl;
				Sleep(3000);
				system("cls"); //(
				break;
			}

			else if (myNumber > comNuber)
			{
				cout << "-�� �������� ������ ����" << endl;
			}
			else
			{ 
				cout << "-�� ū���� ������ ����" << endl;
			}

			cout << "- �� ū���� ������ ����" << endl;

	}



	

}
