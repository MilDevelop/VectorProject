#include "Point.h"

Point::Point() {
	x_coord = 0;
	y_coord = 0;
}

Point::Point(int x, int y) {
	x_coord = x;
	y_coord = y;
}

int Point::get_x(Point a) const{
	return x_coord;
}

int Point::get_y(Point a) const{
	return y_coord;
}