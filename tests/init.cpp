#include <catch.hpp>
#include <vector>
#include "quick_sort.h"

using namespace std;

SCENARIO("test by vector", "[vector]") {
	vector <int> v;
	v.push_back(7);
	v.push_back(5);
	v.push_back(1);
	v.push_back(4);
	v.push_back(9);
	v.push_back(0);
	v.push_back(6);
	REQUIRE(v[0] == 7);
	REQUIRE(v[1] == 5);
	REQUIRE(v[2] == 1);
	REQUIRE(v[3] == 4);
	REQUIRE(v[4] == 9);
	REQUIRE(v[5] == 0);
	REQUIRE(v[6] == 6);
	quick_sort(v.begin(), v.end());
	REQUIRE(v[0] == 0);
	REQUIRE(v[1] == 1);
	REQUIRE(v[2] == 4);
	REQUIRE(v[3] == 5);
	REQUIRE(v[4] == 6);
	REQUIRE(v[5] == 7);
	REQUIRE(v[6] == 9);
}
