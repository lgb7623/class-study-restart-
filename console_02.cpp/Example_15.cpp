#include<iostream>


using namespace std;


#pragma region ������
/*


�� �����Ͷ�?


- ��� ���� �����ϴ°� �ƴ� ��� ���� �ּ�(Address)�� �����ϴ� ��
- �޸��� �ּҸ� �ǹ��ϸ� c/c++ ���� �����͸� ���ؼ� ������ (����)�� ���������� �����ϴ°��� �����ϴ�.��
- �����͸� Ȱ���ϸ� ���� �ٸ� ������ �ִ� ������ �ϴ��� ���� �����ϴ� ���� ����

�� �����ϰ� ����� 3����
�� ��� ���� �ּ�: �ش� ���� ����� ��ǻ�� �޸𸮻��� �ּ�
�� ��  * : �ش� �޸𸮿� �ִ� ������ ���� �������� ����� �Ѵ�.
��&: �ּҰ��� ��ȯ�ϴ� ������

�� ������: ����Ű�� ��, �ּҸ� ��� �׸� 
�� 3����: *, ->, �ּ� 


�� �⺻������ ���α׷��Ӵ� �������� ���ؼ� ������� �޸𸮻��� � ��ġ�� �����ϴ°��� ������� �ʴ´�. (�Ұ���)

�� ������ �Ҵ��� ���� �޸��� ��� ������ �־��� ��ġ�� �����͸� ���ؼ� �����ϴ°��� �����ϴ�.

�� c/c++��� �����Ϳ� �ڷ����� �ʿ��� ���

- �����ʹ� �ܼ��� �޸��� �ּҿ� �Ұ��ϱ� ������ �ش� �������� ������� 
�޸��� �󸶸�ŭ�� ũ��� ���� �����ϰų� �о������ �Ǵ��ϴ°��� �Ұ��ϴ�.

- �׷��� ������ �������� �ڷ����� ���ؼ� ���� �� �о���� �޸��� ũ�⸦ ����� ��� �Ѵ�. ��� �����Ϳ� �ش� �����Ϳ� ������ ������ �ڷ����� 
��ó�ؾ��Ѵ�.

- �� �޸��� �ּҸ��� �����ϰ� �ʹٸ� Ư�� �ڷ����� ����ϴ� ���� �ƴ϶� void* ������ �����ϴ� ���� �����ϴ�
�� �ش� �����͸� ���̵� �����Ͷ�� �θ��� ���̵� �����ʹ� ��� �ڷ����� �޸� �ּҵ� �����ϴ� ���� �����ϴ�.


EX: 
int nValue = 0;
float fValue = 0.0f;
double dbValue = 0.0;

int *pnValue = &nValue;
float *pfValue = &fValue
double &pdbValue = &fValue

�� �����ʹ� �޸��� �ּҸ� �����ϴ� ��Ȱ�� �ϱ� ������ �������� ũ��� ��� �����ϴ�


�� �Լ��� ����
Call by nalue
�� ���� ����(Date)
�� int Add(int a, int b)

Call by Reference
���ּҰ��� ����(Address)
 �� int Add(int*a, int* b)




*/
#pragma endregion 


void LinePrint()
{

	cout << "===========================" << endl;
}


void main()
{

	cout << "������" << endl;
	LinePrint();

	/*
	
	-C/C++ ����� ������ ���� ���
	int nValue = 0;    <- �޸��� Ư�� ������ 4����Ʈ ���� �Ҵ�
	int *pnpointer = &Value <- nValue �Ҵ� �� �޸� ������ ù �ּ� �Ҵ�
	*/
	
	int valueA = 10;
	int* pValueA = &valueA; // (�ڷ��� ���� * �� ������ ����)
	int** ppValueA = &valueA;
	// �ּҰ�
	cout << ppValueA << endl;
	// 10
	cout << *(*ppValueA) << endl; //(�����̸� ���� *�� ����)// ������ �ȿ� �� ���� ���ٴٴ� ��
	// �ּҰ�
	cout << "valueA�� �ּ�:" << &valueA  << endl;
	
	// ����
   cout << valueA; << endl; 
	
	cout << pvalueA; << endl; // ����a �ּ�
	
	cout << *pvalueA; << endl;// �����̴� �ȿ��ִ°ɺ��ڴ� �ȿ��ִ°�  10 <- 10�� ��


	LinePrint();

	int valueB = 3;
	// ������ ����� ���ÿ� �Ҵ��ؾ���

	int* pValueB;

	cout << valueB << endl;
	cout << &valueB << endl;
	pValueB = &valueB

	cout << pValueB << endl;
	
	cout << *pValueB << endl;
	cout << &pValueB << endl;
/*

- �����͸� �ʱ�ȭ ���� �ʰ� ���� �ٲٸ�.....


EX: 
int* pVauleC;
pVauleC = 100;

pVauleC��  �ʱ�ȭ ���� �ʾҴٸ� pVauleC�� ������ ���� ������ �ִµ� �� ���� ��𿡼� ���̰� �ִ� ���ϼ��� �ִ�.

- �� �ڸ����ٸ� ���������� �ƴϿ��ٸ� ���̴� ���� ����Ǵ� ���̹Ƿ� ġ���� ���� �߻�
- �׷��� �����Ͱ� ����Ű�� �ִ� ���� �����Ҷ��� �ݵ�� Ȯ���ϰ� ����ó�� ���� ������ �õ��Ѵ�.

*/
	int* pValueC = NULL;
	
	//NULL, nullptr�� �ǹ̴� ���� �����Ͱ� �ƹ��� �޸� ��ġ�� ����Ű�� ���� �ʴٴ� ���� ���ϰ� �ִ�(��, �����͸� �ʱ�ȭ �ϴµ� �ַ� Ȱ��ȴ�.
	/*
	
	-NULL�� ������ ���ϸ� �����Ͱ� �ƴ϶� ��ũ�ο��� ���ǵ� ��� 0
	��NULL ���� ���
	  �� C++������  NULL = 0  c++������ nullptr
	  �� C������ void*�� ġȯ�ؼ� ����Ѵ� c�ʾ��� NULL
	
	
	�� ��� : NULL�� ��¥ ���� ����Ű�� �����Ͱ� �ƴ϶� ���� 0�� �ǹ��Ѵ�.
	
	
	
	*/
	pValueC = &valueB
		if (pValueC != nullptr)
		{
			*pValueC = 30; // (������ ���� ���� ���� �ٲ�)

		}

	LinePrint();
	cout << " ����������" << endl;
	int valueC = 5;
	int* pValueD = &valueC;
	int** ppValueB = &pvalueD;
	int*** pppValueA = &ppvalueB;


	cout << ValueC << endl;
	cout << pValueD<< endl;
	cout << ppValueB << endl;
	cout << &valueC << endl;
	cout << pvalueD << endl;
	cout << ppvalueB << endl;
	cout << &ValueC << endl;
	cout << &pValueD << endl;
	cout << &ppValueB << endl;
	cout << *pvalueD << endl;
	cout << *ppvalueB << endl;
	cout << **ppvalueB << endl;
}