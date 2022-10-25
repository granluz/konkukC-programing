#include <iostream>

using namespace std;


/*
int arr[5];
의미 :
1. 메모리에 int형 방 5개를 잡는다.
2. 어딘가에 메모리가 잡혀있고 그 메모리의 주소값을 배열의 이름이 가리킨다. 
3. 각 방은 일반 변수이다. arr[0], arr[1], arr[2] ... 
	>> 각 방은 변수이므로 arr[0] = 5; 값 대입이 가능하다.
	>> &num[0]로 주소값을 나타 낼 수 있다.
4. &num[0]는 배열의 첫번째 시작 주소값이므로 &num의 주소값과 같다.
5. 주소값을 담는것은 변수이지만 배열의 이름은 주소 상수이다.
   >>상수이므로 변경 할 수 없다. ex) 101호 입주자는 변경 가능하나 101호 자체는 변하지 않는다.
6. 이차원 배열 int num[3][4] 는 방4개의 3층짜리 건물이다.
   >> 주소는 각 층의 첫번째 방
*/
/*
int* pnum = num;
1. 모든 포인터 타입은 4byte
2. 100번지에 해당하는 값을 넣어준다.
3. 포인터는 주소를 가리키는 변수
4. int* pnum = num;
   >> const int* num = 주소
5. 포인터는 배열처럼 사용 가능하다.
	>> num + 0 == num[0] -> num + 1 == num[1]
*/

int main() {
	
	int select;
	int price = 0;	
	char select2;
	do
	{
		cout << "1) 아메리카노  2) 카페라떼  3) 결제  4) 종료" << endl;
		cin >> select;
		switch (select)
		{
		case 1:
			price += 100;
			break;
		case 2:
			price += 200;
			break;
		case 3:
			cout << "전체 금액의 합계는  : " << price << " 원 입니다.\n";
			cout << "결제 하시겠습니까? (y/n)";
			cin >> select2;
			if (select2 == 'y')
			{
				price = 0;
				break;
			}
			else if (select2 == 'n')
			{
				cout << "주문을 초기화 합니다.\n";
				price = 0;
				break;
			}
		}

	} while (select != 4);

	return 0;	
}


