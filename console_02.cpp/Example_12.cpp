#include"Example_12.h"


#define EXAMPLE_TYPE_PRINT           1
#define EXAMPLE_TYPE_TERNARY_OPEATOR   2
#define EXAMPLE_TYPE_STRING            3




#define EXAMPLE_TYPE     EXAMPLE_TYPE_STRING 



namespace EXAMPLE_1
{
	void Example()
	{


#if EXAMPLE_TYPE  == EXAMPLE_TYPE_PRINT   

		cout << "�׽�Ʈ ����" << endl;


#elif EXAMPLE_TYPE == EXAMPLE_TYPE_TERNARY_OPEATOR


		cout << "���׿�����" << endl;

		int numA, numB;
		cout << "���� �Է�:";
		cin >> numA;
		numB = (numA > 0) ? numA : numA * (-1);

		cout << "�Է��� ���� �����:" << numB << endl;

		printf("\n");


		int numberA;
		int numberB = 100;
		int result;

		cout << "�����Է�:";
		cin >> numberA;

		result = numberA < 10 ? numberA : numberB; //�Ұ�ȣ�� ���ĵ� �ǳ� �������� �켱������ ��� �ϹǷ� �������

		cout << "���� ������ �����:" << result << endl;



#else 

		// ����(��)

	// ���� ǥ���� -> ''
		// ���ڿ� ǥ���� ->""

		char moonja = 'A';
		int numA = 20;
		float numB = 3.2f;
		bool numC = true;

		cout << "����" << moonja << endl;
			
		cout << sizeof(moonja) << " :����Ʈ" << endl;
		cout << sizeof(numA) << " :����Ʈ" << endl;
		cout << sizeof(numB) << " :����Ʈ" << endl;
		cout << sizeof(numC) << " :����Ʈ" << endl;




		/*
		
		C/C++�� Ÿ�Կ� �ſ� ������ ���
        �� ������ �����ϱ� ����

		-C /C++���� ������ �����ϱ� ���� �⺻������ ����� �� �ִ� ��ũ�ΰ� �ٷ� NULL

		
		�� ���ڴ� NULL ���ڰ� �߰� �ȵȴ�.
		���ڴ� ���� ������ �����Ƿ� \NULL���� X
		���ڿ��� ���� \NULL���Ե�



		�� NULL(iostream������)

	iostream ����� ���ǵǾ��ִ�.
	-NULL�� 0 �ּҸ� �ǹ��ϸ� �׷��⿡ �Ŀ� ��� ������ ������ �ʱ�ȭ �Ҷ� ����� �� �ִ�.

	EX:
	char* p= NULL == char * p =0;
	int n = NULL; != int n =0;

	�� ���� ���� ��쿡�� p������ �ּҰ��� 0�� �ִ� ���̰�
	���ڴ� ���� 0�� n�� �ִ´ٴ� �ǹ̰� �ִ�.	
		
		
		*/
		printf("\n");


		char strA = 'A';
			cout << "strA =" << strA << endl;

		
		
		// ���ڿ�
	//	�� c/0c++ ���� ""������ ���ؼ� ���� "��"�� ǥ���ϴ°��� �����ϸ�
		//�� �̶� char �迭�� ����Ѵ�.
		//�� ���� ���ڿ� ����� ���� �ʱ�ȭ�� �� ��� �� ���ڸ� ��������� �������� �ʾƵ� �ȴ�.


		char strB[4] = "abc";
			cout << "strB =" << strB << endl;
		// �� �迭���� 1byte�� ������.
		//EX:
		//char str[100] = {,,,,,}
		//�� �� 100�� ���̸� ���� str[]


			char strC[20] = "i like game.!";

				cout << strC << endl;

				strC[10] = '\0';
				
				cout << strC << endl;

				strC[2] = '\0';

				cout << strC << endl;


#endif
	}
}



