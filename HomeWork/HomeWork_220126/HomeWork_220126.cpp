// HomeWork_220126.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Test
{
public:

    bool operator>(const Test& _Other)
    {
        return true;
    }

    bool operator<(const Test& _Other)
    {
        return true;
    }

    bool operator<=(const Test& _other)
    {
        return true;
    }

    void operator++(int)
    {
        int a = 0;
    }

    void operator++()
    {

    }

public:
    Test()
    {

    }
    Test(const Test& _OtherValue)
    {

    }
};

int main()
{
    Test Test0;
    Test Test1;

    Test0++;
    ++Test0;
    Test0 > Test1;
}