#include"util.h"

int main() {
	int array[DEFAULT_SIZE];
	int length;

	do {
		system("cls");
		cout << "Input size of array: ";
		cin >> length;
	} while (length <= 0);

	user_init(array, length);

	bool mirror = find_mirror(array, length);
	string msg = mirror ? "vector mirror" : "vector not mirror";

	print(msg);

	return 0;
}