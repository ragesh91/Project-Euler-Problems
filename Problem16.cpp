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
    int mult[310],j,i,car=0,sum=0;
    
    memset(mult,0,310*sizeof(mult[0]));
    
    mult[309] = 1;
    
    for(j=0;j<1000;j++){
        car = 0;
        for(i=309;i>=0;i--){
            mult[i] += mult[i]+car;
            if(mult[i]>9){
                car = 1;
                mult[i] -= 10;
            }
            else
                car = 0;
        }
    }
    
    for(i=0;i<310;i++)
        sum += mult[i];
    
    cout<<sum;
    
    return 0;
}

