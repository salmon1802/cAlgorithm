/**
*Created by salmon on 2021-11-26 00:14.
**/

#include "stdio.h"
#include "string.h"

#define f(x) x + x
void main(){
    int res = f(2) * f(2) / 2;
    printf("%d",res);

}