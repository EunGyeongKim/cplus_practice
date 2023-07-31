// header guard
// do not declaring it twice
#ifndef __POINT_H_
#define __POINT_H_

class point{
private :
	int x;
	int y;
public:
	bool Initmembers(int xpos, int ypos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};

#endif
