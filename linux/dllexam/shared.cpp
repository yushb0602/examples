#include "shared.h"
#include "stdio.h"
void myclass::setx(int newx)
{
     myx = newx;
    printf("in setx");
}
static void aaaa(){};
int  myclass::getx() { return myx; }
int myadd(int a, int b){ return a+b;};
