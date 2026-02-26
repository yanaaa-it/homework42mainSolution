#include"logic.h"
bool find_mirror(int array[DEFAULT_SIZE], int length) {
	for (int last = 0; last >= 0; last--)
	{
		if (array[last] != array[last+1]) {
			return false;
		}
	}
	return true;
}
