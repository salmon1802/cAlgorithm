/**
*Created by salmon on 2021-10-10 23:40.
**/

#include <stdio.h>
#include <stdlib.h>

typedef char ElementType;
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode{
    ElementType Data;
    BinTree firstChild;
    BinTree nextsibling;
};

int Height(BinTree BT){
    if(BT == NULL){
        return 0;
    } else {
        int childHigh = Height(BT->firstChild);
        int broChildHigh = Height(BT->nextsibling);
        return childHigh > broChildHigh ? childHigh + 1 : broChildHigh;
    }
}