/**
*Created by salmon on 2021-10-13 23:42.
**/
#include <stdio.h>

void BubbleSort( int num[], int length ){ //num为传入的数组，length为数组长度,这里用从后往前冒泡
    for (int i = 0; i < length; i++) {
        int flag = 0;
        for (int j = length - 1; j > i; j--) {
            if(num[j] < num[j - 1]){
                int temp = num[j - 1];
                num[j - 1] = num[j];
                num[j] = temp;
                flag++;
            }
        }
        if(flag == 0){
            break;
        }
    }
}

int main()
{
    int i;
    int a[] = {900, 2, -58, 3, 34, 5, 76, 7, 32, 4, 43, 9, 1, 56, 8,-70, 635, -234, 532, 543, 2500};
    BubbleSort(a, 21);
    printf("最终排序结果为:\n");

    for (i=0; i < 21; ++i){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}