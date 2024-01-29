#include "Vec.h"

Vec::Vec() {
	begin = {0, 0};
	end = {0, 0};
}

Vec::Vec(pair<int, int>a) {
	begin = { 0, 0 };
	end = a;
}

Vec::Vec(pair<int, int>a, pair<int, int>b) {
	begin = a;
	end = b;
}

pair<int, int> Vec::begin_coord() const{
	return begin;
}

pair<int, int> Vec::end_coord() const{
	return end;
}

pair<int, int> Vec_coord(Vec coord_vec) {
	pair<int, int> vector_coordinate = {coord_vec.end_coord().first- coord_vec.begin_coord().first,
	coord_vec.end_coord().second - coord_vec.begin_coord().second};
	return vector_coordinate;
}

double abs_vec(Vec vector) {
	double module = sqrt(pow(Vec_coord(vector).first, 2) + pow(Vec_coord(vector).second, 2));
	return module;
}

double middle_coordinate(Vec vector, string str) {
	if (str == "x") {
		double MiddleValue = (vector.begin_coord().first + vector.end_coord().first) / 2.0;  
		return MiddleValue;																			
	}
	else if (str == "y") {
		double MiddleValue = (vector.begin_coord().second + vector.end_coord().second) / 2.0;
		return MiddleValue;
	}
	else {
		cout << "enter coordinate on 'x' or 'y'!" << endl;
		return 0.0;
	}
}

double scalar_product(Vec vec1, Vec vec2, int angle) {
	double res = abs_vec(vec1) * abs_vec(vec2) * cos(angle);
	return res;
}
 
ostream& operator<<(ostream& stream, Vec vec) {
	return stream << "(" << vec.begin_coord() << ") (" << vec.end_coord() << ")";
}

Vec operator+(Vec vec1, Vec vec2) {
	Vec result;
	if (vec1.end_coord() == vec2.begin_coord() or vec1.begin_coord() == vec2.begin_coord()) {
		pair<int, int> point_vec = { Vec_coord(vec1).first + Vec_coord(vec2).first, Vec_coord(vec1).second + Vec_coord(vec2).second };
		result  = (point_vec);
	}
	else if (vec1.begin_coord() != vec2.begin_coord()) {
		vec2.begin_coord() = { 0, 0 };
		vec1.begin_coord() = { 0, 0 };
		pair<int, int> point_vec = { Vec_coord(vec1).first + Vec_coord(vec2).first, Vec_coord(vec1).second + Vec_coord(vec2).second };
		result = (point_vec);
	}
	else {
		cout << "vectors cannot be folded";
	}
	return result;
}

/*
Vec operator-(Vec vec1, Vec vec2) {
	Vec result;
	if (vec1.end_coord() == vec2.end_coord()) {
		cout << "vectors cannot be folded";
	}
	else if (vec1.begin_coord() == vec2.begin_coord()) {
		pair<int, int> point_vec = { Vec_coord(vec1).first - Vec_coord(vec2).first, Vec_coord(vec1).second - Vec_coord(vec2).second };
		result = (point_vec);
	}

}*/
