/**
*Created by salmon on 2021-10-20 23:54.
**/

#include <stdio.h>

//二分查找过程，查找key应插入的位置
int binarySearch(int num[], int key, int low, int high) {
    int mid = -1;
    //循环直到low>high，此时low即为要插入的位置
    while (low <= high) {
        mid = (low + high) / 2;
        if (key <= num[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return low;
}

//使用二分查找改进插入排序，使之最坏情况下时间复杂度为Θ(nlgn)
void binInsertionSort(int num[], int n) {
    for (int i = 1; i < n; i++) {
        int key = num[i];
        int index = binarySearch(num, key, 0, i);
        if (index != i) {
            //如果需要移动，则往后移动一个位置，把位置腾出来
            for (int j = i - 1; j >= index; j--) {
                num[j + 1] = num[j];
            }
            //把A[i]放到正确的位置
            num[index] = key;
        }
    }
}

int main()
{
    int i;
    int a[] = {900, 2, -58, 3, 34, 5, 76, 7, 32, 4, 43, 9, 1, 56, 8,-70, 635, -234, 532, 543, 2500};
    binInsertionSort(a, 21);
    printf("最终排序结果为:\n");

    for (i=0; i < 21; ++i){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}