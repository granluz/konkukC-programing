#include <iostream>

using namespace std;

int main()
{
	int* pi; // ���� �޸𸮸� ����Ű�� ������

	pi = new int; //1. ���� �޸� �Ҵ�

	*pi = 100; // 2. ���� �޸� ���

	delete pi; // 3. ���� �޸� �ݳ�

	return 0;
}