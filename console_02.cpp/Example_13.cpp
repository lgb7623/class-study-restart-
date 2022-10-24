#include "Example_13.h"




#define EXAMPLE_TYPE_STRUCT   1

#define EXAMPLE_TYPE_ENUM     2
#define EXAMPLE_TYPE_UNION    3
#define EXAMPLE_TYPE_CLASS    4




#define EXAMPLE_TYPE        EXAMPLE_TYPE_UNION

namespace EXAMPLE
{

	// 구조체 -> 추상화 -> 구조체이름
	struct    tagFamily
	{
		char* name; // 이름
		int age;  // 나이
		int height;// 키
		float weight;// 몸무게
		bool wedding;// 결혼여부// 




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
	///  - 기존 enum문은 암묵적으로 형변환(int)이 일어나기에 상관 없지만
	/// - enum class는 사용할때는 타입을 지정해 주는것이 좋다.
	/// </summary>
	enum class Motion_Type : uint16_t
	{
		R_WALK,
		L_WALK,
		R_RUN,
		L_RUN

	};

	// 열거형에는 익명의 개념이 적용된다.
	// ㄴ 반드시 이름을 명시할 필요가 없다.
	// 해당 방식으로 선언된 열거형은 식별할 수 있는는 이름이 존재하지 않기 때문에
  // 따로 변수로 만드는 것이 불가능하다.
	// 이규칙은 다른 사용자 정의 자료형에도 그대로 적용된다.

	enum
	{

		UNIT_SIZE = 5


	};


	

	// 데이터의 집합을 묶어놓을때 씀 예를들어 BLACK 1 , BULE 2 이런식으로 색을 지정해줬을 때 순서대로 넣으면 컴파일러가 지정해줌
	//=============================
	// enum
/*

▶ enum(열거형)

- 열거형 상수는 기본적으로 특정 값을 할당하지 않으면 컴파일러에 의하서
자동으로 0 부터 순서대로 값이 부여된다

단, 특정 상수에서 값을 할당했을 경우 해당 상수밑으로는 차례대로 해당상수에 할당 된 값에서 +1씩 증가해서 할당이 이뤄진다.

※ 열거형을 사용할때는 스위치문을 항상 염두해 둬라


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

		// c 스타일
//struct tagFamily family;

	//c++ -> struct 키워드를 생략해도 된다.

		

		/*
		
		위에서 구조체 자료형 정의(tagFamily
		ㄴ 구조체 멤버 변수에 접근하기 위해서는"." 연산자를 사용한다.
		ㄴ 구조체 안에 포함된 멤버 변수들 또한 사용을 하기 위해서는 초기식이 필요하다


		- 구조체의 초기화는 배열의 초기화와 같이 지정된 값이 순서대로 구조체 필드에 할당이 된다.

		*/

		
#if EXAMPLE_TYPE == EXAMPLE_TYPE_STRUCT


#elif  EXAMPLE_TYPE == EXAMPLE_TYPE_ENUM
		
		
		// 이름 충돌

		/*
		
		기존 enum문이 문제는 enum문이 많아질수록 다양한 객체들이 아무런 제약없이
		접근을 할 수 있고 이름 충돌까지 발생이 된다.

		- 이러한 문제점을 보완하기 위해 이넘 클래스가 추가 됬다.(모던 c++)
		ㄴ 가장 큰 차이점은 역시 다른 네임스페이스를 갖는다는 점을 뽑을 수 있다.






		
		*/
		cout << "블랙" << BLACK << endl; //데이터의 캡슐화가 안되있음
	
		
		EMotion_Type m_motion;


		// 할당

		// ㄴ 열거형 변수는 기본적으로 int형과크기가 동일하다.
		m_motion = L_WALK;

		// 캐릭터의 방항 잡을때 거의 게임쪽에서 는 고정
		switch (m_motion)
		{
		case R_WALK:
			cout << "오른쪽 걷기" << endl;
			break;
		
		case L_WALK:
			cout << "왼쪽 걷기" << endl;
			break;
		
		case R_RUN:
			cout << "오른쪽 뛰기" << endl;
			break;
		
		case L_RUN:
			cout << "왼쪽 뛰기" << endl;
			break;


		}

		if (m_motion == L_WALK)

		{

			m_motion = R_RUN;


				if (m_motion == R_RUN)
				{
					cout << "오른쪽으로 뛴다 " << endl;

				}
		}
	
		/// <summary>
		/// 1001
		/// </summary>
		
		
		tagPlayer Player;

		tagFamily human;

			human.name = "사라";
			human.age = 18;
			human.height = 230;
			human.wedding = false;
			human.weight = 45;

			cout << "이름:" << human.name << "\n";
			cout << "나이:" << human.age << "\n";
			cout << "체력:" << human.height << "\n";
			cout << "결혼:" << human.wedding << "\n";
			cout << "몸무게:" << human.weight << "\n";

			cout << "\n";




				// 1000/ 500/ 100/ 50/ 5.45
				//int hp;
			//int mp;
			//int att;
			//int def;
			//float speed;

				// 플레이어 구조체

				Player.hp = 1000;
				Player.mp = 500;
				Player.att = 100;
				Player.def = 50;
				Player.speed = 5.45;

				cout << "체력:" << Player.hp << "\n";
				cout << "마나:" << Player.mp << "\n";
				cout << "공격력:" << Player.att << "\n";
				cout << "방어력:" << Player.def << "\n";
				cout << "이동속도:" << Player.speed << "\n";

				cout << "\n";


				// 유닛 구조체 선언

				tagUnit marin;


				cout << "마린 인터페이스" << endl;

				marin.name = "마린";
				marin.hp = 100;
				marin.att = 5.5f;
				cout << boolalpha;// 0,1 
				marin.die = false;



				cout << "이름:" << marin.name << "\n";
				cout << "체력:" << marin.hp << "\n";
				cout << "공격력:" << marin.att << "\n";
				cout << "사망여부:" << marin.die << "\n";
				
				cout << "\n";


				// 저글링 구조체 선언과 동시에  초기화 가능
				tagUnit zegling = { "저글링", 50, 5.0f, true };

					// cout
				   // 구조체 배열



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

						cout << i + 1 << "번째 플레이어 " << endl;
						cout << "체력" << arrPlayer[i].hp << endl;
						cout << "=================================== " << endl;






#elif EXAMPLE_TYPE == EXAMPLE_TYPE_UNION


// 데이터 형을 정의할때 하나의 데이터형이 아닌 int, float 과 같이 여러개의 데이터형을 사용할때 좋다.
// 유니온을 사용했을때 얻을 수 있는 이점으로는 잘 사용한다면 메모리 공간 절약을 할수 있다.
STDate  stData;

stData.m_nDataA = 0;
stData.m_nDataB = 200;
stData.m_nData = 3.14f;


cout << "== 공용체 ==" << endl;
cout << "정수데이터:" << endl;
cout << "정수데이터:" << endl;
cout << "실수데이터:" << endl;



// 마지막 값만 들어가고 나머지느 ㄴ쓰레기 값들어옴 쓰레기 값은 전값의 자리 값이긴함 


#else




#endif //  EXAMPLE_TYPE == EXAMPLE_TYPE_STRUCT







					}
	
	}


