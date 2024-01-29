#include "print_func.cpp"

class Vec {
private:
	pair<int, int> begin, end;
public:
	Vec();
	Vec(pair<int, int>a);
	Vec(pair<int, int>a, pair<int, int>b);

	pair<int, int> begin_coord() const;
	pair<int, int> end_coord() const;
};
pair<int, int> Vec_coord(Vec coord_vec);
double abs_vec(Vec vector);
double middle_coordinate(Vec vector, string str);
double scalar_product(Vec vec1, Vec vec2, int angle);
ostream& operator<<(ostream& stream, Vec vec);
Vec operator+(Vec vec1, Vec vec2);
Vec operator-(Vec vec1, Vec vec2);