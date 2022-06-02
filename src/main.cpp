#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	while (0 < (n--)) {
		int r, e, c;
		cin >> r >> e >> c;

		if (r < e - c) {
			cout << "advertise\n";
		}
		else if (r == e - c) {
			cout << "does not matter\n";
		}
		else {
			cout << "do not advertise\n";
		}
	}

	return 0;
}