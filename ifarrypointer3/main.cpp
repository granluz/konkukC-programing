#include "algo.h"
#include "sort.h"
#include "login.h"

int main() {
	//algo();
	//sort();
	//login();

	int num = 12;
	int* ptr = &num;
	int** dptr = &ptr;

	int& ref = num;
	int* (&pref) = ptr;
	int** (&dpref) = dptr;

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;
		
	return 0;

}