#include<iostream>
#include "myheader.h"
#include "loopheader.h"
using namespace std;
int main()
{
    int x=5,y=10;
    cout<<"sum is " <<add(x,y)<<endl;
    greet();
    loop();
    return 0;
}