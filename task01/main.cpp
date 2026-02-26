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

	int positive = find_positive(array, length);
	int negative = find_negative(array, length);
	int zero =find_zero(array, length) ;

	print("positive numbers:", positive);
	print("negative numbers:", negative);
	print("zero numbers:", zero);

	return 0;
}
