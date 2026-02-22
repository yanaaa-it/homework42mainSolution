#include"logic.h"
int find_positive(int array[DEFAULT_SIZE], int length) {
	int positive = 0;
	for (int index = 0; index < length; index++) {
		positive += array[index] > 0 ? 1 : 0;
	}
	return positive;
}
int find_negative(int array[DEFAULT_SIZE], int length) {
	int negative = 0;
	for (int index = 0; index < length; index++) {
		negative += array[index] < 0 ? 1 : 0;
	}
	return negative;
}