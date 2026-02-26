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
	bool ascending = find_ascending_ordered(array, length);
    bool descending = find_descending_ordered(array, length);
	

	print("ascending ordered:");
	string msg = ascending ? "vector order" : "vector not order";
	print(msg);
	print("descending ordered:");
	msg== descending ? "vector order" : "vector not order";
	print(msg);

	return 0;
}

bool find_descending_ordered(int array[DEFAULT_SIZE], int length);
