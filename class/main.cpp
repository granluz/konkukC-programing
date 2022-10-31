#include <iostream>
#include "Rectangle.h"

using namespace std;


int main()
{
	Rectangle rect;
	rect.init(100, 100, 200, 200);
	rect.move(10);
	rect.showRectangle();
	
	return 0;
}