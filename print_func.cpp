#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <cmath>

using namespace std;

template<class Key, class Value>
ostream& operator<<(ostream& stream, const pair<Key, Value>& v);

template<class Container>
string join(const Container& con, string sep);

template<class T>
ostream& operator<<(ostream& stream, const vector<T>& v);

template<class T>
ostream& operator<<(ostream& stream, const set<T>& v);

template<class Key, class Value>
ostream& operator<<(ostream& stream, const map<Key, Value>& v);

template<class Key, class Value>
ostream& operator<<(ostream& stream, const pair<Key, Value>& v) {
	return stream << v.first << ": " << v.second;
}

template<class Container>
string join(const Container& con, string sep) {
	stringstream res;
	bool first = true;
	for (const auto& item : con) {
		if (!first)
			res << sep;
		first = false;
		res << item;
	}
	return res.str();
}

template<class T>
ostream& operator<<(ostream& stream, const vector<T>& v) {
	return stream << '[' << join(v, ", ") << ']';
}

template<class T>
ostream& operator<<(ostream& stream, const set<T>& v) {
	return stream << '{' << join(v, ", ") << '}';
}

template<class Key, class Value>
ostream& operator<<(ostream& stream, const map<Key, Value>& v) {
	return stream << '(' << join(v, ", ") << ')';
}