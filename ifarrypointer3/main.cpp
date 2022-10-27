#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	//10개의 정수 데이터를 랜덤하게 저장한 후, 원본 데이터의 순서를 변경시키지 말고, 데이터를 정렬하여 출력하세요.

	int num[10] = { 1,5,6,2,9,3,4,8,10,7 };

	cout << "정렬 전 : ";
	for (int i = 0; i < 10; i++)
	{		
		cout << num[i] << " ";
	}
	cout << endl;

	sort(num, num + 10, greater<>());
	cout << "내림차순 : ";
	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << " ";
	}
	//원본 변함...
	return 0;
}