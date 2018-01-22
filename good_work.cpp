#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
	while (1) {
		for (int i = 0; i < 5; i++) {
			if (i == 0)
				cout << "\033[1;31mGreat job everyone!\033[0m\n";
			if (i == 1)
				cout << "\033[1;32mKeep it up!\033[0m\n";
			if (i == 2)
				cout << "\033[1;33mNice work!\033[0m\n";
			if (i == 3)
				cout << "\033[1;35mExcellent effort!\033[0m\n";
			else if (i == 4)
				cout << "\033[1;34mHappy morning lab!\033[0m\n";
			sleep(5);
		}
	}

	return 0;
}
