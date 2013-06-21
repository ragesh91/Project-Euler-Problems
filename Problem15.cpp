#include <iostream>
#include<math.h>

using namespace std;

/*
 * 
 */

int main(){
    long long num;
    //Find 40(C)20
    
    num = 40/20;
    num *= 39*38*37*36;
    num /= (19*18);
    num *= 35*34*33*32;
    num /= (17*16);
    num *= 31*30*29*28;
    num /= (15*14);
    num *= 27*26*25;
    num /= (13*12*10);
    num *= 24*23*22;
    num /= 11;
    num *= 21;
    num /= (9*8*7*6*5*4*3*2*1);
    cout<<num;

    return 0;
}

