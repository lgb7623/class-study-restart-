#include <iostream>
#include <time.h>
#include <random>

using namespace std;


#pragma region ����+ ����
/*


�� ����

- �������� ��������� �˼� ���� ��
�� �и� �������� ���� ���� or ���� �������� �̸� �� �� ������ �ϱ����� ������ 
�ݵ�� �ʿ��ϴ�
�� rand() �Լ��� ȣ���ϸ� 0~ 32767�� ������ ���� �ϳ��� �ҷ��´�
�� rand() �Լ��� ������ ��Ģ�� ���� ������ �����ϴµ� ��Ģ�� �׻� ������ ������ �����Ǵ� ���� ���� ����.
�� (rand�� �ҿ����� ����)



�� ���� ���� ��ƾ
- ���� ���� ��ƾ ��Ģ�� ��ȭ�� �� �� �ִ� srand()��� �Լ��� �ִ�.
�� srand()�� ���� �߻��⿡ ������ �߻���Ű�� ������(seed)�� �����ϸ� ���� �߻���� �� �������� ��������
������ �߻� ��Ų��.
�� �⺻������ ���� �߻��Ⱑ ����� ������ �ð��� ������ �� �� ���� ������ �ð����� ����������
����Ѵٸ� ������ ���� �� �ִ�.

�� ����
- ���� ���α׷��ֿ����� �����͸� ���� ������ ���Ѵ�.








*/
#pragma endregion


void main()
{


	srand(time(NULL));
	int damage = (rand() % 10) + 1; //?
	cout << "������" << damage << endl;


	for(int i =0; i < 10; i++)
	{

		printf(" %d \t", rand());

	}

	// =================================
	
	// ����
	
	int num[10];
	int dest, sour, temp;


	for (int i = 0; i < 10; i++) // 10�� ����
	{
		num[i] = i;

	}

	for (int i = 0; i < 10; i++)
	{
		cout << "�迭 �ʱ�ȭ:" << num[i] << endl << endl;


	
		cout << "���� �˰���" << endl;

		for (int i = 0; i < 100000; i++)// ������ ���� ������ �׳��� �� ����
		{

			dest = rand() % 10;
			sour = rand() % 10;

			temp = num[dest];
			num[dest] = num[sour];
			num[sour] = temp;

		}
		cout << endl;

		for (int i = 0; i < 10; i++)
		{


			cout << "[" << i << "]" << num[i] << endl;

		}



		// 1~ 20���� ���η� 10���� -> ���� ���� -> ����!!


		int num2[20];
		int tempA;
		int sourA;
		int destA;

		for (int j = 0; j < 20; j++) // 20�� ����
		{
			num2[j] = j+=1;

		}



		for (int j = 1; j < 100000; j++)// 1 ~ 20 ���� ����
		{

			destA = rand() % 21;
			sourA = rand() % 21;

			tempA = num2[destA];
			num2[destA] = num2[sourA];
			num[sourA] = tempA;

		}
		for (int j = 0; j < 20; j++)
		{


			cout << "[" << j << "]" << num2[j] << endl;

		}
		/*
		�� �Ϻ��� ����
		- srand/rand �Լ��� ������ �Ϻ��� ������ �����Ҽ� ����.
		�׷��� ������ c++���� ���� �߰��� ���� ����̽��� �̿��ؾ� �Ϻ��� ������
		�����ϴ� ���� �����ϴ�.


		*/

		//����̽� ����
		std::random_device orandomdevice;
		std::mt19937_64 rnd(orandomdevice());
		// �õ�(�������� ���� �ʱ�ȭ �غ�)
		// ��mt 19937�� �޸��� Ʈ�����͸� ��Ÿ���� 199937�� �ֱ�� �޸��� �� 19937
		// ����ϰڴٴ� �ǹ� (_64 -> 64��Ʈ)


		//std::mt19937_64 rnd(orandomdevice());

		//cout << "RandomDevice \n" << rnd << endl;


		int RandomMIN = 1;
		int RandomMAX = 10;

		//��������
		std::uniform_int_distribution<int> range(RandomMIN, RandomMAX);

		// �Ǽ�
		//std::uniform_real_distribution<float> range(RandomMIN, RandomMAX);


		//���Ժ���
		//std::normal_distribution<double> range(RandomMIN, RandomMAX);

		cout << "\n";
			// �� ����
			int RandomValue = range(rnd);
		cout << "���Ⱚ: " << RandomValue << endl;


		// ������ ����

		int numberA = (orandomdevice() % 10) + 1;
		int numberB = (orandomdevice() % 10) + 1;

	}







}

// ������ ����
