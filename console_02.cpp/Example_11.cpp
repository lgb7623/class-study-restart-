#include <iostream>
#include <time.h>
#include <random>

using namespace std;


#pragma region 난수+ 셔플
/*


▶ 난수

- 무작위로 만들어지는 알수 없는 값
ㄴ 패를 무작위로 섞기 위해 or 적의 움직임을 미리 알 수 없도록 하기위해 난수가 
반드시 필요하다
ㄴ rand() 함수를 호출하면 0~ 32767중 임의의 값중 하나를 불러온다
ㄴ rand() 함수는 일정한 규칙에 따라 난수를 생성하는데 규칙은 항상 같으며 난수가 생성되는 순서 또한 같다.
ㄴ (rand는 불완전한 난수)



▷ 난수 생성 루틴
- 난수 생성 루틴 규칙에 변화를 줄 수 있는 srand()라는 함수가 있다.
ㄴ srand()는 난수 발생기에 난수를 발생시키는 시작점(seed)를 제공하며 난수 발생기는 이 시작점을 기준으로
난수를 발생 시킨다.
ㄴ 기본적으로 난수 발생기가 실행될 시점의 시간은 예측할 수 가 없기 때문에 시간값을 시작점으로
사용한다면 난수를 만들 수 있다.

▶ 셔플
- 게임 프로그래밍에서는 데이터를 섞는 행위를 뜻한다.








*/
#pragma endregion


void main()
{


	srand(time(NULL));
	int damage = (rand() % 10) + 1; //?
	cout << "데미지" << damage << endl;


	for(int i =0; i < 10; i++)
	{

		printf(" %d \t", rand());

	}

	// =================================
	
	// 셔플
	
	int num[10];
	int dest, sour, temp;


	for (int i = 0; i < 10; i++) // 10번 뽑음
	{
		num[i] = i;

	}

	for (int i = 0; i < 10; i++)
	{
		cout << "배열 초기화:" << num[i] << endl << endl;


	
		cout << "셔플 알고리즘" << endl;

		for (int i = 0; i < 100000; i++)// 셔플은 많이 돌려야 그나마 잘 섞임
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



		// 1~ 20까지 가로로 10개씩 -> 이후 개행 -> 셔플!!


		int num2[20];
		int tempA;
		int sourA;
		int destA;

		for (int j = 0; j < 20; j++) // 20번 뽑음
		{
			num2[j] = j+=1;

		}



		for (int j = 1; j < 100000; j++)// 1 ~ 20 까지 셔플
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
		▶ 완벽한 난수
		- srand/rand 함수의 조합은 완벽한 난수를 생성할수 없다.
		그렇기 때문에 c++부터 새로 추가된 랜덤 디바이스를 이용해야 완벽한 난수를
		생성하는 것이 가능하다.


		*/

		//디바이스 생성
		std::random_device orandomdevice;
		std::mt19937_64 rnd(orandomdevice());
		// 시드(난수생성 엔진 초기화 준비)
		// ㄴmt 19937은 메르센 트위스터를 나타나며 199937은 주기로 메르센 수 19937
		// 사용하겠다는 의미 (_64 -> 64비트)


		//std::mt19937_64 rnd(orandomdevice());

		//cout << "RandomDevice \n" << rnd << endl;


		int RandomMIN = 1;
		int RandomMAX = 10;

		//범위설정
		std::uniform_int_distribution<int> range(RandomMIN, RandomMAX);

		// 실수
		//std::uniform_real_distribution<float> range(RandomMIN, RandomMAX);


		//정규분포
		//std::normal_distribution<double> range(RandomMIN, RandomMAX);

		cout << "\n";
			// 값 추출
			int RandomValue = range(rnd);
		cout << "추출값: " << RandomValue << endl;


		// 범위값 설정

		int numberA = (orandomdevice() % 10) + 1;
		int numberB = (orandomdevice() % 10) + 1;

	}







}

// 셔플의 이해
