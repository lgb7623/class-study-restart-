#include<iostream>
//STL(string): �޸� ����̳� ���ڿ��� �ٷ� �� �ִ� �Լ�(���)���� �����ϰ� �ִ�.
#include<string>
using namespace std;
//char�� �ѹ��� ����غ���




# pragma region �Լ�




/*

�� �Լ� 

- ����� ���Ǳ�
�� ����� ���Ǳ�� ������� �����ϴ� ���

�� �Լ��� ����ϴ� ����
- �ߺ����� ����
- ���� ������
- ������ ���
- ����

- �Լ��� �����ϴ� ���

��ȯ �ڷ��� �Լ��̸� (�Է��ڷ���(����(��))
} <- �Լ� ����

-> �Լ� ����

{<- �Լ� ��


�Լ� �̸�: �� �״�� �Լ��� �̸�(�Լ��� ����(ȣ��))
����(��): �Լ��� �ؾ� �� ���� ���λ����� �����ϸ� �Լ��� �۾��Ÿ���� �� �� �ִ�

��ȯ �ڷ���: �Լ��� ����(��ȯ) �ϴ� ���� ���̴� ���̸� �Լ���
�۾������ 

�Լ� ���� {} �ȿ� �Լ��� ���� �ڵ尡 �����Ѵ�.

�� �Լ��� �̸��� "�⺻��"���� �����ؾ��Ѵ�.
�� ������ �̸��� �Լ��� N���̻� �����ϴ°��� �Ұ��� �ϴ�.

�� void�� �Լ���?
- ���� �� ���� ���� �Լ�
- �Լ��� �Է� �Ǵ� ����� ���� ��� void Ű���带 ���ؼ� �ش� ��/����� 
���ٶ�� ���� ����� �ش�.


�츮�� �˰� �𸣰� ����� �Լ���

rand(): �������� �̴� �Լ�
Sleep : 1�ʰ� ���߰� ����� �Լ�

�� �Լ� ������ �⺻������ ���� �Լ� ���ʿ� �Ѵ�.


�� c/c++ ����� �Լ� ������ �ʿ��� ����
- c/c++ ����� �����Ϸ��� �⺻������ ������ ������ ������ �Ʒ��� �ؼ��Ѵ�.
�̶�, �����Ϸ��� �̹� ����ģ ���ο��� ���Ե��� ���� �Լ��� ȣ���� ���
�����Ϸ��� �̿� ���� ������ �翬�� �𸣱� ������ ������ �߻��Ѵ�.

�׷��� ������ �Լ��� ������ ���ؼ� �����Ϸ����� �ش� �Լ��� ���� ��򰡿� �����Ѵٴ� ���θ� �ݵ�� �˷���� �Ѵ�

���⼭ �� �� �ִ� c/c++ �����Ϸ��� Ư¡�� �Լ��� ����� ���ǰ� �ݵ�� ������ ���Ͽ� �������� �ʾƵ� ���ٴ°��� �� �� �ִ�

�� �Լ��� ������ �ߺ����� ����ϴ� ���� ���������� �Լ��� ���Ǵ� �ݵ�� �����ؾ��Ѵ�.



�Ϲ� �Լ����� �빮�ڷ� �����ϰ� �ܾ� ���۸��� �빮�ڸ� ����Ѵ�.
�� �Ľ�Į ���̽�

(�Ŀ� ��� Ŭ������ ī����� �����)



*/


# pragma endregion

// ���޶���� ���ڴ� c++���û�
// �Լ�����
void OutputValueA();

void OutputValueB(int numA);
void OutputValueC(int numA, int numB);

//���ڿ�
void OutputString(string str);
string GetStringfunc(string strA, string strB);
int CheckingString(string strA, string strB);

//��ȯ���� �־���ϴ� �Լ�(int)
// �� ��Ģ����
int GetAddValue(int numA, int numB);
// ����
int GetSubValue(int numA, int numB);
//���ϱ�
int GetMultipleValue(int numA, int numB);
//������
float GetDividleValue(int numA, int numB);

namespace NS_FUCN_A
{
	void Sample()
	{

cout << " �����ٷ� ���ӽ����̽� A�Լ�" << endl;

 }

}


namespace NS_FUCN_B
{
	void Sample()
	{

		cout << " �����ٷ� ���ӽ����̽� B�Լ�" << endl;

	}

}

void main()
{


	NS_FUCN_A::Sample();
	NS_FUCN_B::Sample();

	//
	OutputValueA();

	//
	OutputValueB(5);
	
	//
	OutputValueC(1, 9);
	
	//
	OutputString("������ �ʹ� ��մ�.");

	int nResultA = GetAddValue(18, 25);

	OutputValueB(nResultA);

	string sResultB = GetStringfunc("������", "����.");

		OutputString(sResultB);

		nResultA = CheckingString("����� �ϰ� �ʹ�.", "����� �ϰ� �ʹ�");
		//
		OutputValueB(nResultA);

		cout << "\n";



		int numL = 0;
		int numR = 0;
			cout << "���� (2��) �Է�:" << endl;
			cin >> numL >> numR;
			printf("%d + %d = %d\n", numL, numR, GetAddValue(numL, numR));
			printf("%d - %d = %d\n", numL, numR, GetSubValue(numL, numR));
			printf("%d * %d = %d\n", numL, numR, GetMultipleValue(numL, numR));
			printf("%d / %d= %f\n", numL, numR, GetDividleValue(numL, numR));
}
/*
- ��ó�� �Լ��� �پ��� ������ ������ �ִ�.

�� C/ C++ ����� �Լ� ����
- �Է� 0, ��� 0
- �Է� 0, ��� X
- �Է� X, ��� 0
- �Է� X , ��� X



EX:
void showinfo(int nAge, char*psName); <- �Է� o , ��� x
int GetRandomValue(void);             <- �Է� x , ��� o
void SomeFunction(void);              <- �Է� x , ��� x

*/




/*
������ �Է� �����Ϳ� ��� �����Ͱ� ������ �ش� ������ �Լ���� ��Ī�� �� �ֵ�.
����, c/c++ ���� �Լ� ������ �����ϱ� ������ ��ǻ���� ��ɹ��� �ۼ��ϱ� ���ؼ���
�ݵ�� �ش� ������ �Լ� �ȿ� �ۼ��� ��� �Ѵ�.

*/
void OutputValueA() 
{

	cout << "���� �ٷ� �Լ���" << endl;
}

// ��Ʈ���� ������ ��ȯ������ �ʴ´� 
void OutputValueB(int numA)
{
	cout << numA << endl;
}

void OutputValueC(int numA, int numB)
{
	cout << numA <<  numB <<   endl;
}

void OutputString(string str)
{
	cout << str << endl;
}

string GetStringfunc(string strA, string strB)
{
	/*
	�Լ��� return Ű���带 ���ؼ� �Լ��� ���� �Ǵ� ��� ���� ��ȯ�ϴ°��� �����ϸ� 
	�Լ��� ��� ���� �Է°��� �޸� �ϳ��� ������� ��ȯ�Ҽ� �ִ�(but c++17������ ������ ��ȯ ����)
	*/

	// append(): n���ڿ� �ڿ� n2 ���ڿ��� �ٿ� �ִ´�.
	//return strA.append(strB);// ������ ���ҵ� �ʿ� 
	
	//�ҹ�� �ڵ�
	return strA + strB;
}

int CheckingString(string strA, string strB)
{
	// ������ 1 
	//�ٸ��� 0
	return strA == strB;


}

int GetAddValue(int numA, int numB)
{
	return numA + numB;
}

int GetSubValue(int numA, int numB)
{
	return numA - numB;
}

int GetMultipleValue(int numA, int numB)
{
	return numA * numB;
}

float GetDividleValue(int numA, int numB)// float ���� �������� int�� ������ ���� float �� ���̸� ���� ��ȯ�� flaot�̶� float ��������ȯ ��
{
	return numA / (float) numB;
}
