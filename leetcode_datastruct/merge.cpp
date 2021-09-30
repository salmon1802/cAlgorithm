///*
//Created by salmon on 2021-9-13 22:34.
//*/
//
//int cmp(int* a, int *b){
//    return *a - *b;
//}
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
//    int j = 0;
//    for (int i = m; i < nums1Size; ++i) {
//        nums1[i] = nums2[j++];
//    }
//    qsort(nums1,nums1Size, sizeof(int),cmp);
//}