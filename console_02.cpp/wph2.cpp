#define BLACK 0
#define BLUE 1
#define GREEN 2
#define RED 4
#define BLUE2 11
#define WHITE 15
#define GREY 7
#define GREY2 8
#define YELLOW 6
#include <iostream>

#include <Windows.h>

void TextColor(int font, int background);

using namespace std;


void main()
{
	// 길로틴

	TextColor(WHITE, WHITE);
	cout << "□□□□□□□□□□□□□□□□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□□□□□□□□□□□□□□";
	TextColor(BLACK, BLACK);
	cout << "■■■";
	TextColor(WHITE, WHITE);
	cout << "■" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□□□□□□□□□□□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "■" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□□□□□□□□□□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□□□□□□□□□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□□□□□□□□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREEN, GREEN);
	cout << "■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREEN, GREEN);
	cout << "■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREEN, GREEN);
	cout << "■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREEN, GREEN);
	cout << "■■■";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(WHITE, WHITE);
	cout << "■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREEN, GREEN);
	cout << "■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREEN, GREEN);
	cout << "■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREEN, GREEN);
	cout << "■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(RED, RED);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREEN, GREEN);
	cout << "■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(RED, RED);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "■";
	TextColor(RED, RED);
	cout << "■";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(GREEN, GREEN);
	cout << "■■";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(RED, RED);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "■";
	TextColor(RED, RED);
	cout << "■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREEN, GREEN);
	cout << "■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(RED, RED);
	cout << "■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREEN, GREEN);
	cout << "■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□";
	TextColor(BLACK, BLACK);
	cout << "■■■";

	TextColor(WHITE, WHITE);
	cout << "□□□□□□□" << endl;

	cout << "□□□□□□□□□□□□□□□□□□□□" << endl;


	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;


	// 초심자의 방패
	TextColor(WHITE, WHITE);
	cout << "□□□□□□□□□□□□□□□□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□□□□□";
	TextColor(BLACK, BLACK);
	cout << "■■■■■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□□□□";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(GREY, GREY);
	cout << "■■■";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□□□";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(GREY, GREY);
	cout << "■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□" << endl;


	TextColor(WHITE, WHITE);
	cout << "□□□□";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(GREY, GREY);
	cout << "■■■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(GREY, GREY);
	cout << "■■■■■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(WHITE, WHITE);
	cout << "□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(GREY, GREY);
	cout << "■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(WHITE, WHITE);
	cout << "□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY2, GREY2);
	cout << "■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□" << endl;


	TextColor(WHITE, WHITE);
	cout << "□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY2, GREY2);
	cout << "■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY2, GREY2);
	cout << "■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY2, GREY2);
	cout << "■";
	TextColor(BLACK, BLACK);
	cout << "■■■";
	TextColor(GREY2, GREY2);
	cout << "■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY2, GREY2);
	cout << "■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY2, GREY2);
	cout << "■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY2, GREY2);
	cout << "■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(GREY, GREY);
	cout << "■■■■■■■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(WHITE, WHITE);
	cout << "□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(GREY, GREY);
	cout << "■■■■■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(WHITE, WHITE);
	cout << "□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□□";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(GREY, GREY);
	cout << "■■■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□□□";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(GREY, GREY);
	cout << "■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□□□□";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(GREY, GREY);
	cout << "■■■";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□□□□□";
	TextColor(BLACK, BLACK);
	cout << "■■■■■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□□□" << endl;

	cout << "□□□□□□□□□□□□□□□□□□□□" << endl;


	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	// 절때반지
	TextColor(WHITE, WHITE);
	cout << "□□□□□□□□□□□□□□□□□□□□" << endl;
	TextColor(WHITE, WHITE);
	cout << "□□□□□□□";
	TextColor(BLACK, BLACK);
	cout << "■■■■■■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(YELLOW, YELLOW);
	cout << "■■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(YELLOW, YELLOW);
	cout << "■■■";
	TextColor(GREY, GREY);
	cout << "■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(YELLOW, YELLOW);
	cout << "■■";
	TextColor(GREY, GREY);
	cout << "■■";
	TextColor(YELLOW, YELLOW);
	cout << "■■";
	TextColor(WHITE, WHITE);
	cout << "□□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(YELLOW, YELLOW);
	cout << "■■";
	TextColor(GREY, GREY);
	cout << "■";
	TextColor(GREY2, GREY2);
	cout << "■■";
	TextColor(GREY, GREY);
	cout << "■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(YELLOW, YELLOW);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "■■";
	TextColor(YELLOW, YELLOW);
	cout << "■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(YELLOW, YELLOW);
	cout << "■■";
	TextColor(GREY2, GREY2);
	cout << "■■";
	TextColor(GREY, GREY);
	cout << "■";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(YELLOW, YELLOW);
	cout << "■■";
	TextColor(WHITE, WHITE);
	cout << "□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■■";
	TextColor(YELLOW, YELLOW);
	cout << "■";
	TextColor(GREY2, GREY2);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(YELLOW, YELLOW);
	cout << "■■";
	TextColor(WHITE, WHITE);
	cout << "□";
	TextColor(YELLOW, YELLOW);
	cout << "■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■■■";
	TextColor(YELLOW, YELLOW);
	cout << "■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(YELLOW, YELLOW);
	cout << "■■";
	TextColor(WHITE, WHITE);
	cout << "□";
	TextColor(YELLOW, YELLOW);
	cout << "■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■■■";
	TextColor(YELLOW, YELLOW);
	cout << "■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(YELLOW, YELLOW);
	cout << "■■";
	TextColor(WHITE, WHITE);
	cout << "□";
	TextColor(YELLOW, YELLOW);
	cout << "■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■■";
	TextColor(YELLOW, YELLOW);
	cout << "■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■";
	TextColor(YELLOW, YELLOW);
	cout << "■■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■■";
	TextColor(YELLOW, YELLOW);
	cout << "■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■";
	TextColor(YELLOW, YELLOW);
	cout << "■■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■■";
	TextColor(YELLOW, YELLOW);
	cout << "■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■";
	TextColor(YELLOW, YELLOW);
	cout << "■■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(YELLOW, YELLOW);
	cout << "■■■";
	TextColor(WHITE, WHITE);
	cout << "■";
	TextColor(YELLOW, YELLOW);
	cout << "■";
	TextColor(BLACK, BLACK);
	cout << "■■";
	TextColor(GREY, GREY);
	cout << "■■";
	TextColor(YELLOW, YELLOW);
	cout << "■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(YELLOW, YELLOW);
	cout << "■■■";
	TextColor(WHITE, WHITE);
	cout << "■";
	TextColor(YELLOW, YELLOW);
	cout << "■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY, GREY);
	cout << "■";
	TextColor(YELLOW, YELLOW);
	cout << "■■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(YELLOW, YELLOW);
	cout << "■■■■■■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(YELLOW, YELLOW);
	cout << "■■■■■■";
	TextColor(GREY2, GREY2);
	cout << "■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□□□□";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(GREY2, GREY2);
	cout << "■■■■■■";
	TextColor(BLACK, BLACK);
	cout << "■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□" << endl;

	TextColor(WHITE, WHITE);
	cout << "□□□□□□□";
	TextColor(BLACK, BLACK);
	cout << "■■■■■■";
	TextColor(WHITE, WHITE);
	cout << "□□□□□□□" << endl;

	cout << "□□□□□□□□□□□□□□□□□□□□" << endl;


}
















void TextColor(int font, int background)
{
	int Color = font + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}