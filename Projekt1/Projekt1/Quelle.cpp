#include <iostream>
#include <iomanip>


using namespace std;
#define N_MAX 20 

unsigned long long fac(unsigned int n);
unsigned long long facac(unsigned int n);

int main() {
	unsigned int n;

	cout << fixed << setprecision(0);

	cout << setw(10) << "n" << setw(30) << "Fakultaet von n" << endl << endl;

	for (n = 1; n <= N_MAX; ++n) {
		cout << setw(10) << n << setw(30) << facac(n) << endl;
	}

	cout << "\nWeiter mit " << " <Return>";
	std::cin.get();

	return 0;
}

unsigned long long fac(unsigned int n) {
	unsigned long long ergebnis = 1;
	for (unsigned int i = 2; i <= n; ++i) {
		ergebnis *= i;
	}
	return ergebnis;
}



unsigned long long facac(unsigned int n) {
	if (n == 1) {
		return 1;
	}

	return  n * facac(n - 1);;
}