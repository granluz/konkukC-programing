#include <iostream>

using namespace std;

int main()
{
	int* pl; // ���� �޸𸮸� ����Ű�� ������

	pl = new int; //1. ���� �޸� �Ҵ�

	*pl = 100; // 2. ���� �޸� ���

	delete pl; // 3. ���� �޸� �ݳ�

	return 0;
}