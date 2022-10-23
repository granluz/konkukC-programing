#pragma once
/*
#은 전처리기가 처리
>>헤더파일 include를 중복 포함하는것을 방지시킨다.
visual studio에서만 동작하는 구문.
*/
#include <iostream>

using namespace std;

namespace A
{
	void showName()
	{
		cout << "홍길동" << endl;
	}
}

namespace B
{
	void showName()
	{
		cout << "고길동" << endl;
	}
}