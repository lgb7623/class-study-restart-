#include <iostream>
#include <Windows.h>
#include<time.h>


using namespace std;


void main()
{
	srand(time(NULL));

	int randomA = 0;
	int randomB = 0;
	int randomC = 0;

	randomA = rand() % 6 + 1;
	randomB = rand() % 14 + 6;
	randomC = rand() % 167 + 23;


	cout << "1~6������ ����:" << randomA << endl;
	cout << "6~19������ ����:" << randomB << endl;
	cout << "23~189������ ����:" << randomC << endl;

}