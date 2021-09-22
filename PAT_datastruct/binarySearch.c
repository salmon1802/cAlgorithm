/**
*Created by salmon on 2021-9-21 23:35.
**/

#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
#define NotFound 0
typedef int ElementType;

typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* 保存线性表中最后一个元素的位置 */
};

List ReadInput(); /* 裁判实现，细节不表。元素从下标1开始存储 */
Position BinarySearch( List L, ElementType X );

int main()
{
    List L;
    ElementType X;
    Position P;

    L = ReadInput();
    scanf("%d", &X);
    P = BinarySearch( L, X );
    printf("%d\n", P);

    return 0;
}

/* 你的代码将被嵌在这里 */
//Position trueBinarySearch( List L, ElementType X, Position low, Position high ){
//    if(low > high) return NotFound;
//    Position mid = (Position)((low + high) / 2);
//    if (X < L->Data[mid]) {
//        return trueBinarySearch(L,X,low,mid - 1);
//    } else if (X > L->Data[mid]) {
//        return trueBinarySearch(L,X,mid + 1,high);
//    } else {
//        return mid;
//    }
//}
//
//Position BinarySearch( List L, ElementType X ){
//    Position high = L->Last;
//    Position low = 0;
//    return trueBinarySearch(L,X,low,high);
//}

Position BinarySearch( List L, ElementType X ){
    ElementType tag;
    Position low = 0;
    Position high = L -> Last;
    while (low <= high) {
        Position mid = (ElementType)((low + high) / 2);
        if (X < L->Data[mid]) {
            high = mid - 1;
        } else if (X > L->Data[mid]) {
            low = mid + 1;
        } else {
            return mid;
        }
    }
    return NotFound;
}