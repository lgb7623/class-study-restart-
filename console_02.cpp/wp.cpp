/*                             ������            ����(������ X30)                                                      Ư��
      ����
 1.�ʽ����Ǹ��                27 ~ 30           100G                              ���⳻�� ���谡�� ����ϴ� ��. ������ �ܴ������� ū ���ظ� �ټ��� ����. 
 2.���ƾ                     120 ~ 130         1000G                              ���� ���� ���µ� Ư�Ⳮ ��. �߸� �ֵθ��� ������ ���� �� ���� �ִ�. 
 3.���ǵ� �պ���               70 ~ 85           210G                               �ٶ��� ������ ���� �ִٰ� �����ϴ� ������ Ȱ ���忡�� �뷮����ȴٴ� �ҹ��� �ִ�.
 4.�ʽ����� â                30 ~ 35            260G                              ������ �� ��� ���� â, ��˺��ٴ� �� �������� ���� �η����� �ִ�.
 5.������ ������              70 ~ 150           440G                              ������� ���� ������.. ��������� ����� ���ڵ� ����. 

 
 ===========================================================================================
                              ����(+5)             ����(���� X100)
 ��
 1.�ʽ����� ��������             10               1600G                              ���⳻�� ���谡�� ����ϴ� ����. ���� �ʽ����� ��˰� �Բ� 
                                                                                   �����Ͽ� �ʽ�����ô �ϴ� ��޸��谡�� �����Ѵ�.
 2.��¤����                      5               500G                               �����ϸ� ���� ���� �þ�� ���� ����, �������� ������ �ڶ��Ѵ�.
 3.�νõ�                       25               2800G                              ���� �˳��� ���� �νõ�, �׷����� ���ظ� �����ش�
 4.������                       10               1700G                              �ȴ¼Ҹ��� ����� �Ź�, �����θ������ ���밨�� ������ �ʴ�
 5.3M�尩                       5                1500G                              ���༺�� ���� �尩, �������� �۾����� ȿ�����ϰ� ����. 
 
 ================================================================================================

 �Ǽ��縮                      ����             ����(���� X500)                      
 1.��������                      18               4000G                              ��������� ���� Ÿ�ִ� ������ �����ִ¹���, ������ �������� ���� ����� �� ������ �ʴ�
 2.��ǰ ���ָ����                5                1500G                              ��¥ ���ַ� ������� �����, ���⿣ �׷����ϳ� ������ �� ������ �ʴ�.
 3.�۷������ϸ�                  70               30000G                              ����� �ְ� �ܽ��� ������ ����, �ſ� �ܴ��Ͽ� ���� �μ��� ����.
 4.��¦�̴� ���Ͱ���            22               6000G                              ���� ���� ������� �Ͱ���, ǰ���� ���� ������ �����ϴ�. 
 5.�Ұ��׺�Ʈ                    15                500G                               �Ұ��׺�Ʈ��. ����ϴ�.
 
 */


#include <iostream>
#include <Windows.h>
#include<time.h>

void TextColor(int font, int background);

using namespace std;


void main()
{
    cout << "       �̸�        " << "    ������    " << "    ����    " << "                         Ư��                      " << endl;
    cout << "" << endl;


    srand(time(NULL));
    int sward = rand() % 8 + 20;
    int head  = rand() % 10 + 120;
    cout << "   �ʽ����� ���" <<"         " << sward <<  "          " << sward * 50 << "                  " <<
        "���⳻�� ���谡�� ����ϴ� ��. \n                                                           ������ �ܴ������� ū ���ظ� �ټ��� ����." << endl;
    cout << "" << endl;
    
    cout << "   ���ƾ" << "      " << sward << "          " << sward * 50 << "                  " <<
        "���⳻�� ���谡�� ����ϴ� ��. \n                                                           ������ �ܴ������� ū ���ظ� �ټ��� ����." << endl;




	//
	//���������������������




}

void TextColor(int font, int background)
{
    int Color = font + background * 16;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}