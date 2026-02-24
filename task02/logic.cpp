#include"logic.h"
bool find_mirror(int array[DEFAULT_SIZE], int length) {
	int next =length / 2;
	for (int last = length / 2; last >= 0; last--)
	{
		if (array[last] != array[next] || length %2== 0) {
			return false;
		}
		next++;
	}
	return true;
}
