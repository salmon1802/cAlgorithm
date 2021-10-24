/**
*Created by salmon on 2021-10-23 00:40.
**/

#include <stdio.h>
#define Maxsize 100

/**
 * 将num[low....mid]与num[mid + 1 ...high]合并成一个有序数组,升序
 * @param num
 * @param low
 * @param mid
 * @param high
 */
void merge(int num[],int low,int mid,int high){
    int assist[Maxsize]; //定义一个辅助数组
    int i,j,cur;
    for (cur = low; cur <= high ; ++cur) {
        assist[cur] = num[cur];    //将A中数组复制到辅助数组中
    }
    for (i = low,j = mid + 1,cur = i; i <= mid && j <= high; cur++) { //比较两个数组，将较小的元素移动到左边
        if(assist[i] <= assist[j]){
            num[cur] = assist[i];
            i++;
        } else {
            num[cur] = assist[j];
            j++;
        }
    }

    //以下是当两个中有某一个数组率先扫描完成时所需要做的操作，即将剩余数按顺序放入到原数组中
    while (i <= mid) {
        num[cur] = assist[i];
        cur++;
        i++;
    }
    while (j <= high) {
        num[cur] = assist[j];
        cur++;
        j++;
    }
}

void mergeSort(int num[],int low, int high){
    if(low < high){
        int mid = (low + high) / 2;
        mergeSort(num,low,mid);
        mergeSort(num,mid + 1,high);
        merge(num,low,mid,high);
    }
}