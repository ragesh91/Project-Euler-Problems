/* 
 * File:   Levy Conjecture.cpp
 * Author: Ragesh
 *
 * Created on April 5, 2013, 8:11 PM
 */

#include <iostream>
#include<math.h>
#include <vector>

using namespace std;


int main(){
    int f1[1000],f2[1000],i,car=0,term = 2,temp;
    
    memset(f1,0,1000*sizeof(f1[0]));
    memset(f2,0,1000*sizeof(f2[0]));
    
    f1[999] = 1;
    f2[999] = 1;
    
    while(f2[0]==0){
        car = 0;
        term++;
        for(i=999;i>=0;i--){
            temp = f2[i];
            f2[i] += f1[i]+car;
            if(f2[i]>9){
                car = 1;
                f2[i] -= 10;
            }
            else
                car = 0;
            f1[i] = temp;
        }
    }
    
    cout<<term;
    return 0;
}

