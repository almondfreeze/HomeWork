// HomeWork_220114_ToUpper.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void ToUpper(const char* _Left, char* _Right)
{
	_Right[] = _Left[];
}

int main()
{
	char Text[5];

	ToUpper("pP1231dcwsec", Text);
	//      "12ABCCEEE" -> 알파벳소문자가 대문자가 되도록 바꾼다.
	printf_s(Text);
}