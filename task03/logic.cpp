#include"logic.h"
bool find_ordered(int array[DEFAULT_SIZE], int length) { 
    bool ascending = true;  
    bool descending = true;
    for (int i = 1; i < length; i++) {
        if (array[i] < array[i - 1]) ascending= false;
        if (array[i] > array[i - 1]) descending= false;
    }
    return ascending?ascending:descending;
}
