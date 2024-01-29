#include "Vec.h"

int main() {
	pair<int, int> a = { 8, 5 }, b = { 4, 6 }, c = {3, 0};
	Vec vec1(a), vec2(b, c);
	cout << vec1 << endl << vec2 << endl;
	cout << abs_vec(vec2) << endl;
	cout << middle_coordinate(vec2, "y") << endl;
	cout << Vec_coord(vec1) << " - " << Vec_coord(vec2) << endl;
	cout << vec1 + vec2 << endl;

	return 0;
} 