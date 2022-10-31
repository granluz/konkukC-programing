#include "FruitSeller.h"
#include "FruitBuyer.h"
#include "Lamp.h"
#include "User.h"
#include "Tv.h"

int main()
{
	/*FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();*/

	//Lamp lamp1;

	//Lamp* plamp = &lamp1; // 포인터
	//plamp->init();

	//Lamp* plamp2 = new Lamp();// 동적할당
	//plamp2->init();

	//Lamp lamp[4];//배열선언으로 램프 4개 만들어준다.
	//lamp[0].init();


	//string name;
	//cout << "이름을 입력해 주세요. :";
	//cin >> name;
	//cout << endl;
	///*lamp.powerOnOff();
	//lamp.changeLight();
	//lamp.showStatus();*/
	//User user;
	//user.init(name);
	//user.turnOnOff(*plamp2);
	//plamp2->showStatus();

	//delete plamp2;
	/*char a;
	cout << "램프의 전원을 켜시겠습니까? (Y/N) :";
	cin >> a;
	if (a == 'Y')
	{
		user.turnOnOff(lamp1);
		lamp1.showStatus();
		cout << endl;
		cout << "램프의 밝기를 올리시겠습니까? (Y/N) :";
		cin >> a;
		if (a == 'Y')
		{
			user.changeLight(lamp1);
			lamp1.showStatus();
		}
	}*/
	User user;
	string name;
	user.init();
	TV tv;
	TV* ptv = &tv;
	ptv->init();
	user.tvturnOnOff(*ptv);
	user.tvSetChannel(*ptv);
	user.tvSetVolume(*ptv);
	ptv->showTV();	


	return 0;
}