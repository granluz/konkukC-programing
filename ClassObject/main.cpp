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

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();
	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();*/

	//Lamp lamp1;

	//Lamp* plamp = &lamp1; // ������
	//plamp->init();

	//Lamp* plamp2 = new Lamp();// �����Ҵ�
	//plamp2->init();

	//Lamp lamp[4];//�迭�������� ���� 4�� ������ش�.
	//lamp[0].init();


	//string name;
	//cout << "�̸��� �Է��� �ּ���. :";
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
	cout << "������ ������ �ѽðڽ��ϱ�? (Y/N) :";
	cin >> a;
	if (a == 'Y')
	{
		user.turnOnOff(lamp1);
		lamp1.showStatus();
		cout << endl;
		cout << "������ ��⸦ �ø��ðڽ��ϱ�? (Y/N) :";
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