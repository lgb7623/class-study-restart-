#include<iostream>
#include<windows.h>
// ㄴ Sleep() 함수를 사용하기 위한 헤더파일 추가
// ㄴ Sleep(1000) 1초동안 멈춘다
// ㄴ Sleep(500) 0.5초동안 멈춘다.
#include<time.h>


using namespace std;



// 업 다운 게임

void main()
{
	// 랜덤 시드 초기화
	srand(time(NULL));
	
	int comNuber;
	int myNumber;

	comNuber = rand() % 100 + 1;
			//cout <<" 치트: " << comnumber << end;
 // 무한반복
	while (true)
	{
		cout << "0~100까지 숫자중 하나를 선택하자" << endl;
		cin >> myNumber;
			Sleep(1000);


			if (myNumber == comNuber)

			{
				cout << "====찾았다 ====" << endl;
				Sleep(3000);
				system("cls"); //(
				break;
			}

			else if (myNumber > comNuber)
			{
				cout << "-더 작은수를 생각해 보자" << endl;
			}
			else
			{ 
				cout << "-더 큰수를 생각해 보자" << endl;
			}

			cout << "- 더 큰수를 생각해 보자" << endl;

	}



	

}
