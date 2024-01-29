#include "print_func.cpp"

class Point {
private:
	int x_coord;
	int y_coord;
public:
	Point();
	Point(int x, int y);
	int get_x(Point a) const;
	int get_y(Point a) const;
};
