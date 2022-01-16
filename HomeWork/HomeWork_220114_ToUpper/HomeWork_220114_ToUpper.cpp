// HomeWork_220114_ToUpper.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void ToUpper(const char* _Left, char* _Right)
{
	

	for (int LeftValue = 0; 0 != _Left[LeftValue]; LeftValue += 1)
	{
		_Right[LeftValue] = _Left[LeftValue];

		if (_Left[LeftValue] > 96)
		{
			_Right[LeftValue] = _Left[LeftValue] - 32;
		}
	}

}

int main()
{
	char Alphabet = 'z';
	// a = 97       A = 65   32
	// h = 104      H = 72   32

	char Text[100];

	ToUpper("12adefa", Text);
	//      "12ABCCEEE" -> 알파벳소문자가 대문자가 되도록 바꾼다.
	printf_s(Text);
}