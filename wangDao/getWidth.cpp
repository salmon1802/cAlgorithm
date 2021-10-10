/**
*Created by salmon on 2021-10-5 00:33.
**/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef char ElementType;
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};


int GetWidth( BinTree BT ){
    if (BT == NULL) return 0;
    Queque Q = initQueue();
    EnQueque(BT);
    int front = 0, rear = 1,last = rear;
    int width = 1;

    while (front < rear) {
        BinTree curr = DeQueue();
        if ( curr -> Left != NULL ) {
            EnQueue(curr -> Left);
            rear++;
        }
        if( curr -> Right != NULL ) {
            EnQueue(curr -> Right);
            rear++;
        }
        front++;
        if(front == last){
            width = width < (rear - front) ? (rear - front) : width;
            last = rear;
        }
    }
    return width;
}