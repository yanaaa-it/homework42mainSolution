#include"logic.h"
bool find_ascending_ordered(int array[DEFAULT_SIZE], int length) {   
    for (int i = 1; i < length; i++) {
        if (array[i] > array[i - 1]){ 
            return false;
        }
    }
    return true;
}
 bool find_descending_ordered(int array[DEFAULT_SIZE], int length){
    for (int i = 1; i < length; i++) {
        if (array[i] > array[i - 1]){
            return false;
        }
    }
     return true;
 }
