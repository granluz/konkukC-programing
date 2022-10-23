#include "dan.h"
#include <string>
#include <sstream>


int main() {
	//dan();
	cout << "이름 국어성적 영어성적 수학성적을 입력 해주세요 : ";
	string str1;
	getline(cin, str1);
	
	//끊어서 문자열 단위로 추출하고싶다
	stringstream ss;
	ss.str(str1);
	string name;
	ss >> name;
	int score = 0;
	int sum = 0;
	while (ss >> score)
	{
		sum += score;			
	}
	cout << name << " : " << sum;
	
	return 0;
}