//
// Created by Queen on 2017/2/12.
//

#ifndef INC_02_MERGE_SORT_ADVANCE_SHELLSORT_H
#define INC_02_MERGE_SORT_ADVANCE_SHELLSORT_H

template <typename T>
void shellSort(T arr[], int n)
{
    int h = 0;
    while (h < n/3) {
        h = 3*h+1;
    }

    while (h >= 1) {

        for (int i = h; i < n; ++i) {
            T e = arr[i];
            int j;
            for (j = i; j >= h && arr[j-h] > e; j -= h) {
                arr[j] = arr[j-h];
            }
            arr[j] = e;
        }

        h /= 3;
    }
}


#endif //INC_02_MERGE_SORT_ADVANCE_SHELLSORT_H
