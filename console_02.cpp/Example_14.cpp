#include <iostream>


using namespace std;


#pragma region 4대 문자열

/*



▶ c/c++ 언어의 문자열 조작함수



1. strlen
ㄴ 문자열의 길이.

2. strcmp
ㄴ 문자열을 비교하는 기능.

3. strcpy
ㄴ 문자열 복사.


4. strcat 
ㄴ 문자열을 합친다.


*/

#pragma endregion

void LinePrint()
{


	cout << "============================" << endl;


}



void main()
{


	cout << "4대 문자열" << endl;

	// 1. strlen(): 문자열 길이
	// EX: strlen ("문자열");
/*

함수 원형

int strlen()
{

return 정수;

}


*/

	char strA[100] = "abcdef";
	int lenA = strlen(strA);
	
	cout << strlen(strA) << endl;
	cout << "문자열 길이:" << lenA << endl;
	LinePrint();

	//2. strcmp(문자열, 문자열): 문자열 비교

	/*
	★★★
     함수 원형
	int strcmp(char* str1, char* str2)
	{
	
	
	if(두 문자가 같은지?)
	{
	
	
	return 0;
	
	}
	else 
	if (앞문자가 더 큰지?)
	{
	
	return -1;
	}
	else
	{
	return 1;
	}

	stringA < string B = 0보다 작다
	stringA = string B = 0
	stringA > string B = 0보다 크다
	*/

	char strB[10] = "abc";
		char strC[10] = "abc";
		char strD[10] = "abb";

		int lenB = strcmp(strB, strC);
	int lenC = strcmp(strB, strD);

	// 같으면 0
	cout << "strcmp 첫번째:" << lenB << endl;
	// 다를때는 -1, 1이 들어온다
	cout << "strcmp 두번째:" <<lenC << endl; 

	LinePrint();




	// 3. strcpy (문자열, 문자열): 문자열 복사




	char strE[12] = "ABCDEFG";
	char strF[12] = "HIJK";

		cout << "문자열 복사전" << strE << endl;
		strcpy(strF, strE);
		cout << "문자열 복사후:" << strF << endl;
		LinePrint();

		// 4. strcat(문자열, 문자열): 문자열 연결)

		char strG[100] = "오늘 과제는";
		char strH[100] = "몆개가 될까?";
			cout << "문자열 연결 전:" << strG << endl;

			strcat(strG, strH);
			cout << "문자열 연결 후 :" << strG << endl;
		LinePrint();

		// 5. strtok : 문자열 자르기
		// ㄴ 자를 조건 : _ / | , 
		// ㄴ 일반적으로 4대문자열로 분류는 안되지만 파일 입출력에 많이 사용
		// 되기 때문에(게임) 





		char strI[10] = "ABCD EFGH";

			strtok(strI, "");
		cout << strI << endl;
		// 일반적으로 문자열을 사용 하는 케이스

		char strJ[100] = "이렇게";
			char* strK = "사용해도 된다";
			std::string strZ = "이런 방식도 가능";

}