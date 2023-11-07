#include <iostream>
#include "Bubble_sort_header.h"

using namespace std;


int main()
{

    int data[] = {1,8,2,3,11,5,6,7,9,10};
    int len =  sizeof(data)/sizeof(data[0]);
    Bubble_sorting_in_CPP(data, len);

    int data1[] = {1,8,2,3,4,11,6,7,9,10};
    Bubble_sorting_in_C(data1, len);
    return 0;
}
