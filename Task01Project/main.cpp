#include <iostream>
using namespace std;

double get_a(int a, int b, int c, int d, int e);

int main() {
	double a, b, c, d, e;

	cout << "Input your marks";
	cin >> a >> b >> c >> d >> e;

	double avg = get_a(a, b, c, d, e);

	cout << "your mark is: " << avg << endl;

	return 0;
}