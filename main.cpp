#include <iostream>

using namespace std;

double cross(double x1, double y1, double x2, double y2) {
	return x1 * y2 - x2 * y1;
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	double x3, y3, x4, y4;
	cin >> x3 >> y3 >> x4 >> y4;

	const auto& c1 = cross(x2 - x1, y2 - y1, x3 - x1, y3 - y1);
	const auto& c2 = cross(x2 - x1, y2 - y1, x4 - x1, y4 - y1);
	if (0 < c1 * c2) {
		cout << 0;
		return 0;
	}

	const auto& c3 = cross(x4 - x3, y4 - y3, x1 - x3, y1 - y3);
	const auto& c4 = cross(x4 - x3, y4 - y3, x2 - x3, y2 - y3);
	if (0 < c3 * c4) {
		cout << 0;
		return 0;
	}

	cout << 1;
	return 0;
}