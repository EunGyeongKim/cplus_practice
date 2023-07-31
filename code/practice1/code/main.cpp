#include <iostream>
#include "point.h"
using namespace std;

bool point::Initmembers(int xpos, int ypos){
	if(xpos<0 || ypos <0){
		cout <<"out of range "<<endl;
		return false;
	}
	x=xpos;
	y=ypos;
	return true;
}

int point::GetX() const {
	return x;
}

int point::GetY() const {
	return y;
}

bool point::SetX(int xpos){
	if (0> xpos || 100 > xpos){
		cout << "out of range" << endl;
		return false;
	}
	x = xpos;
	return true;
}
bool point::SetY(int ypos){
	if (0>ypos || ypos > 100){
		cout << "out of range" << endl;
		return false;
	}
	y = ypos;
	return true;
}
