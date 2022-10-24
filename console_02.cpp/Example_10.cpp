#include "Example_10.h"


// �ڵ带 �����ϱ� ���� ��ó����
#define EXAMPLE_TYPE_PRINT          1


// �迭 Ÿ��(1����, 2����, ������ ���...)
// C++(������) C#(2����)<- 2�������� �����ϴ°� �������

#define EXAMPLE_TYPE_SIMPLE         1
#define EXAMPLE_TYPE_MULTI_DIMENSION 2


// ��� ���� ����
#define EXAMPLE_TYPE    EXAMPLE_TYPE_PRINT 

#define ARRAY_TYPE      EXAMPLE_TYPE_SIMPLE  




namespace EXAMPLE_1
{
#define ARRAY_SIZE  5
	void Example()
	{

#if EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT


		cout << "ȿ������ ������Ʈ ����" << endl;
		cout << "ȿ������ ������Ʈ ����" << endl;
		cout << "ȿ������ ������Ʈ ����" << endl;
		cout << "ȿ������ ������Ʈ ����" << endl;
		cout << "ȿ������ ������Ʈ ����" << endl;


		cout << "\n";

		int numA = 0;
		int numB = 1;
		int numC = 2;
		int numD = 3;
		int numE = 4;
		int numF = 5;

		cout << numA << endl;
		cout << numB << endl;
		cout << numC << endl;
		cout << numD << endl;
		cout << numE << endl;
		cout << numF << endl;

		cout << "\n";


		// 1���� �迭
		// int: �迭�� �̷�� ��� �ڷ���/ num: �迭�� �̸�/ [6] ����� ����

		int num[6];

		cout << num[0] << endl;
		cout << num[1] << endl;
		cout << num[2] << endl;
		cout << num[3] << endl;
		cout << num[4] << endl;
		cout << num[5] << endl;

		cout << "\n";

		//�迭 ���� ����� ���ÿ� �ʱ�ȭ�� �����ϴ�.
		static int anNums[6] = { 0, 1, 2, 3, 4, 5 };
		

		for (int T=0; T <6; T++)
		{

			cout << "�迭�� ��:" << anNums[T] << endl;

		}

		cout << "\n";

#if ARRAY_TYPE == EXAMPLE_TYPE_SIMPLE  

		/*
		-sizeof �����ڴ� ������ �ڷ��� �Ǵ� ��/����� ����Ʈ ũ�⸦ ����ϴ� ������ �Ѵ�.

		- ����, sizeof �����ڸ� �迭�� Ȱ�� �� ��� �迭 ��ü�� ũ�⸦(����Ʈ) ����ϴ� ���� �����ϴ�.
		
		EX:
		int anValues[5]
		
		sizeof(anValues) <- �迭 ��ü ũ��(�迭 ũ�� * �迭 ��� ũ��)(20)
		sizeof(anValues[0]) <- �迭 ��� ũ�� (int�� ũ�⿡ �ش��ϴ� 4 ���)
		


		�� C/C++ ��� �迭�� �پ��� �ʱ�ȭ ���
		int anValuesA[10]=(0);
		int anValuesB[]={1,2,3, ...}

		�迭�� ũ��� ��������� �迭�� �����Ҷ� �����ִ°��� ���������� �迭�� �ʱ�ȭ�� �̿��ϸ� �迭�� ũ�⸦ ����
		������� �ʴ��� �����Ϸ��� ���ؼ� �ʱ�ȭ�� �� ���� ������ŭ �迭�� ũ�Ⱑ ��������.
		*/


		int anValuesA[ARRAY_SIZE] =
		{ 1,2,3,4,5, };

		int anValuesB[] =
		{1,2,3,4,5};

//		�迭�� ����� ���� ����

		const int sizeA = sizeof(anValuesA) / sizeof(anValuesA[0]);
		const int sizeB = sizeof(anValuesB) / sizeof(anValuesB[0]);

		cout << "==�迭 ��� ��� ==";


			printf("%d,%d,%d,%d,%d\n",anValuesA[0], anValuesA[1], anValuesA[2], anValuesA[3], anValuesA[4]);
			cout << "\n";

			for (int i = 0; i < sizeA; i++)
			{
				printf("%d%c", anValuesA[i], (i <= sizeA - 2) ? ',' : ' ');
			}
				cout << "\n";

			
			// ���ǽ� ���� ? t:f

		for (int i = 0; i < sizeB; i++)
		{
			printf("%d%c", anValuesB[i], (i <= sizeB - 2) ? ',' : ' ');

			cout << "\n"

		}


		/*
		// �߱������
		// �迭�� �ε����� ���ٸ� �ε��� ��ȣ�� �̿��ؼ� ���� �����͸� ����ϴ°��� ����������
		//�迭�� ũ�Ⱑ Ŀ���� Ŀ������ �ſ� ������ ����.
		*/



#else 


		/*
		�� C/C++ ����� ������ �迭 ���� ���
		int anMatrix[5][5];             2����
		int anDimensionMatrix[5][5][5]; 3����(������)

		sizeof(anMartrix);     -        -> 100��� (5* (�迭���ũ��:5*4)
		sizeof(int anDimensionMatrix);  -> 500 ��� 5*(5* (�迭���ũ��:5*4))

		*/
		


#endif //ARRAY_TYPE == EXAMPLE_TYPE_SIMPLE 

#else

#endif // EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT


	}
}
