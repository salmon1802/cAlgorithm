/**
*Created by salmon on 2021-10-15 23:58.
**/
#include <stdio.h>


void SelectSort(int a[],int length){ //选择排序
    int mixIndex,temp;
    int i,j;
    for(i = 0; i < length - 1; i++){ //每次循环数组，找出最小的元素，放在前面，前面的即为排序好的
        mixIndex = i; //假设最小元素的下标
        for(j = i + 1; j < length; j++){ //将上面假设的最小元素与数组比较，交换出最小的元素的下标
            if(a[j] < a[mixIndex])
                mixIndex = j;
        }
        if(i != mixIndex) {
            temp = a[i];
            a[i] = a[mixIndex];
            a[mixIndex] = temp;
        }
    }
}

int main()
{
    int i;
    int a[] = {900, 2, -58, 3, 34, 5, 76, 7, 32, 4, 43, 9, 1, 56, 8,-70, 635, -234, 532, 543, 2500};
    SelectSort(a, 21);
    printf("最终排序结果为:\n");

    for (i=0; i < 21; ++i){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}