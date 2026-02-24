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
	print("result: ");
	bool mirror = find_ordered(array, length);
	string msg = mirror ? "vector order" : "vector not order";

	print(msg);

	return 0;
}