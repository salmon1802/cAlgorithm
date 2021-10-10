/**
*Created by salmon on 2021-10-10 23:29.
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

int leaves(BinTree BT){
    if(BT == NULL){
        return 0;
    } else {
        if(BT->firstChild == NULL){
            return 1 + leaves(BT->nextsibling);
        } else {
            return leaves(BT->nextsibling) + leaves(BT->firstChild);
        }
    }
}