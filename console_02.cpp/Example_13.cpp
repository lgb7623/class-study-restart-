#include "Example_13.h"




#define EXAMPLE_TYPE_STRUCT   1

#define EXAMPLE_TYPE_ENUM     2
#define EXAMPLE_TYPE_UNION    3
#define EXAMPLE_TYPE_CLASS    4




#define EXAMPLE_TYPE        EXAMPLE_TYPE_UNION

namespace EXAMPLE
{

	// ����ü -> �߻�ȭ -> ����ü�̸�
	struct    tagFamily
	{
		char* name; // �̸�
		int age;  // ����
		int height;// Ű
		float weight;// ������
		bool wedding;// ��ȥ����// 




	};

	struct    tagPlayer
	{

		int hp;
		int mp;
		int att;
		int def;
		float speed;






	};

	struct    tagUnit
	{

		string name;
		int hp;
		int att;
		bool die;

	};

	enum EColor_Type
	{

		RED,
		GREEN,
		BLUE = 1000,
		BLACK,
		WHITE



	};


	enum  EMotion_Type
	{
		R_WALK,
		L_WALK,
		R_RUN,
		L_RUN
	};


	/// <summary>
	///  - ���� enum���� �Ϲ������� ����ȯ(int)�� �Ͼ�⿡ ��� ������
	/// - enum class�� ����Ҷ��� Ÿ���� ������ �ִ°��� ����.
	/// </summary>
	enum class Motion_Type : uint16_t
	{
		R_WALK,
		L_WALK,
		R_RUN,
		L_RUN

	};

	// ���������� �͸��� ������ ����ȴ�.
	// �� �ݵ�� �̸��� ����� �ʿ䰡 ����.
	// �ش� ������� ����� �������� �ĺ��� �� �ִ´� �̸��� �������� �ʱ� ������
  // ���� ������ ����� ���� �Ұ����ϴ�.
	// �̱�Ģ�� �ٸ� ����� ���� �ڷ������� �״�� ����ȴ�.

	enum
	{

		UNIT_SIZE = 5


	};


	

	// �������� ������ ��������� �� ������� BLACK 1 , BULE 2 �̷������� ���� ���������� �� ������� ������ �����Ϸ��� ��������
	//=============================
	// enum
/*

�� enum(������)

- ������ ����� �⺻������ Ư�� ���� �Ҵ����� ������ �����Ϸ��� ���ϼ�
�ڵ����� 0 ���� ������� ���� �ο��ȴ�

��, Ư�� ������� ���� �Ҵ����� ��� �ش� ��������δ� ���ʴ�� �ش����� �Ҵ� �� ������ +1�� �����ؼ� �Ҵ��� �̷�����.

�� �������� ����Ҷ��� ����ġ���� �׻� ������ �ֶ�


*/

//=============================



	union STDate
	{
	
		int m_nDataA;
		int m_nDataB;
		float m_nData;


	};


	void Example()
	{

		// c ��Ÿ��
//struct tagFamily family;

	//c++ -> struct Ű���带 �����ص� �ȴ�.

		

		/*
		
		������ ����ü �ڷ��� ����(tagFamily
		�� ����ü ��� ������ �����ϱ� ���ؼ���"." �����ڸ� ����Ѵ�.
		�� ����ü �ȿ� ���Ե� ��� ������ ���� ����� �ϱ� ���ؼ��� �ʱ���� �ʿ��ϴ�


		- ����ü�� �ʱ�ȭ�� �迭�� �ʱ�ȭ�� ���� ������ ���� ������� ����ü �ʵ忡 �Ҵ��� �ȴ�.

		*/

		
#if EXAMPLE_TYPE == EXAMPLE_TYPE_STRUCT


#elif  EXAMPLE_TYPE == EXAMPLE_TYPE_ENUM
		
		
		// �̸� �浹

		/*
		
		���� enum���� ������ enum���� ���������� �پ��� ��ü���� �ƹ��� �������
		������ �� �� �ְ� �̸� �浹���� �߻��� �ȴ�.

		- �̷��� �������� �����ϱ� ���� �̳� Ŭ������ �߰� ���.(��� c++)
		�� ���� ū �������� ���� �ٸ� ���ӽ����̽��� ���´ٴ� ���� ���� �� �ִ�.






		
		*/
		cout << "��" << BLACK << endl; //�������� ĸ��ȭ�� �ȵ�����
	
		
		EMotion_Type m_motion;


		// �Ҵ�

		// �� ������ ������ �⺻������ int����ũ�Ⱑ �����ϴ�.
		m_motion = L_WALK;

		// ĳ������ ���� ������ ���� �����ʿ��� �� ����
		switch (m_motion)
		{
		case R_WALK:
			cout << "������ �ȱ�" << endl;
			break;
		
		case L_WALK:
			cout << "���� �ȱ�" << endl;
			break;
		
		case R_RUN:
			cout << "������ �ٱ�" << endl;
			break;
		
		case L_RUN:
			cout << "���� �ٱ�" << endl;
			break;


		}

		if (m_motion == L_WALK)

		{

			m_motion = R_RUN;


				if (m_motion == R_RUN)
				{
					cout << "���������� �ڴ� " << endl;

				}
		}
	
		/// <summary>
		/// 1001
		/// </summary>
		
		
		tagPlayer Player;

		tagFamily human;

			human.name = "���";
			human.age = 18;
			human.height = 230;
			human.wedding = false;
			human.weight = 45;

			cout << "�̸�:" << human.name << "\n";
			cout << "����:" << human.age << "\n";
			cout << "ü��:" << human.height << "\n";
			cout << "��ȥ:" << human.wedding << "\n";
			cout << "������:" << human.weight << "\n";

			cout << "\n";




				// 1000/ 500/ 100/ 50/ 5.45
				//int hp;
			//int mp;
			//int att;
			//int def;
			//float speed;

				// �÷��̾� ����ü

				Player.hp = 1000;
				Player.mp = 500;
				Player.att = 100;
				Player.def = 50;
				Player.speed = 5.45;

				cout << "ü��:" << Player.hp << "\n";
				cout << "����:" << Player.mp << "\n";
				cout << "���ݷ�:" << Player.att << "\n";
				cout << "����:" << Player.def << "\n";
				cout << "�̵��ӵ�:" << Player.speed << "\n";

				cout << "\n";


				// ���� ����ü ����

				tagUnit marin;


				cout << "���� �������̽�" << endl;

				marin.name = "����";
				marin.hp = 100;
				marin.att = 5.5f;
				cout << boolalpha;// 0,1 
				marin.die = false;



				cout << "�̸�:" << marin.name << "\n";
				cout << "ü��:" << marin.hp << "\n";
				cout << "���ݷ�:" << marin.att << "\n";
				cout << "�������:" << marin.die << "\n";
				
				cout << "\n";


				// ���۸� ����ü ����� ���ÿ�  �ʱ�ȭ ����
				tagUnit zegling = { "���۸�", 50, 5.0f, true };

					// cout
				   // ����ü �迭



				// s ->c(string) -> i -> f -> d- > b
				
					tagPlayer arrPlayer[4] =
				{

					{100,100,100,100,100},
					{90,90,90,90,90},
					{80,80,80,80,80},
					{7,7,7,7,7},
				};

					for (int i = 0; i < 4; i++)
					{

						cout << i + 1 << "��° �÷��̾� " << endl;
						cout << "ü��" << arrPlayer[i].hp << endl;
						cout << "=================================== " << endl;






#elif EXAMPLE_TYPE == EXAMPLE_TYPE_UNION


// ������ ���� �����Ҷ� �ϳ��� ���������� �ƴ� int, float �� ���� �������� ���������� ����Ҷ� ����.
// ���Ͽ��� ��������� ���� �� �ִ� �������δ� �� ����Ѵٸ� �޸� ���� ������ �Ҽ� �ִ�.
STDate  stData;

stData.m_nDataA = 0;
stData.m_nDataB = 200;
stData.m_nData = 3.14f;


cout << "== ����ü ==" << endl;
cout << "����������:" << endl;
cout << "����������:" << endl;
cout << "�Ǽ�������:" << endl;



// ������ ���� ���� �������� �������� ������ ������ ���� ������ �ڸ� ���̱��� 


#else




#endif //  EXAMPLE_TYPE == EXAMPLE_TYPE_STRUCT







					}
	
	}


