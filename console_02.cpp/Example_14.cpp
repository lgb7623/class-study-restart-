#include <iostream>


using namespace std;


#pragma region 4�� ���ڿ�

/*



�� c/c++ ����� ���ڿ� �����Լ�



1. strlen
�� ���ڿ��� ����.

2. strcmp
�� ���ڿ��� ���ϴ� ���.

3. strcpy
�� ���ڿ� ����.


4. strcat 
�� ���ڿ��� ��ģ��.


*/

#pragma endregion

void LinePrint()
{


	cout << "============================" << endl;


}



void main()
{


	cout << "4�� ���ڿ�" << endl;

	// 1. strlen(): ���ڿ� ����
	// EX: strlen ("���ڿ�");
/*

�Լ� ����

int strlen()
{

return ����;

}


*/

	char strA[100] = "abcdef";
	int lenA = strlen(strA);
	
	cout << strlen(strA) << endl;
	cout << "���ڿ� ����:" << lenA << endl;
	LinePrint();

	//2. strcmp(���ڿ�, ���ڿ�): ���ڿ� ��

	/*
	�ڡڡ�
     �Լ� ����
	int strcmp(char* str1, char* str2)
	{
	
	
	if(�� ���ڰ� ������?)
	{
	
	
	return 0;
	
	}
	else 
	if (�չ��ڰ� �� ū��?)
	{
	
	return -1;
	}
	else
	{
	return 1;
	}

	stringA < string B = 0���� �۴�
	stringA = string B = 0
	stringA > string B = 0���� ũ��
	*/

	char strB[10] = "abc";
		char strC[10] = "abc";
		char strD[10] = "abb";

		int lenB = strcmp(strB, strC);
	int lenC = strcmp(strB, strD);

	// ������ 0
	cout << "strcmp ù��°:" << lenB << endl;
	// �ٸ����� -1, 1�� ���´�
	cout << "strcmp �ι�°:" <<lenC << endl; 

	LinePrint();




	// 3. strcpy (���ڿ�, ���ڿ�): ���ڿ� ����




	char strE[12] = "ABCDEFG";
	char strF[12] = "HIJK";

		cout << "���ڿ� ������" << strE << endl;
		strcpy(strF, strE);
		cout << "���ڿ� ������:" << strF << endl;
		LinePrint();

		// 4. strcat(���ڿ�, ���ڿ�): ���ڿ� ����)

		char strG[100] = "���� ������";
		char strH[100] = "�p���� �ɱ�?";
			cout << "���ڿ� ���� ��:" << strG << endl;

			strcat(strG, strH);
			cout << "���ڿ� ���� �� :" << strG << endl;
		LinePrint();

		// 5. strtok : ���ڿ� �ڸ���
		// �� �ڸ� ���� : _ / | , 
		// �� �Ϲ������� 4�빮�ڿ��� �з��� �ȵ����� ���� ����¿� ���� ���
		// �Ǳ� ������(����) 





		char strI[10] = "ABCD EFGH";

			strtok(strI, "");
		cout << strI << endl;
		// �Ϲ������� ���ڿ��� ��� �ϴ� ���̽�

		char strJ[100] = "�̷���";
			char* strK = "����ص� �ȴ�";
			std::string strZ = "�̷� ��ĵ� ����";

}