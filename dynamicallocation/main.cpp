#include <iostream>

using namespace std;

int main()
{
	int* pl; // 동적 메모리를 가리키는 포인터

	pl = new int; //1. 동적 메모리 할당

	*pl = 100; // 2. 동적 메모리 사용

	delete pl; // 3. 동적 메모리 반납

	return 0;
}