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
    int f1[165],f2[165],j,k,i,car=0,sum=0;
    
    memset(f1,0,165*sizeof(f1[0]));
    memset(f2,0,165*sizeof(f2[0]));
    
    f1[164] = 1;
    f2[164] = 1;
    
    for(j=1;j<100;j++){
        for(k=j;k>0;k--){
            car = 0;
            for(i=164;i>=0;i--){
                f2[i] += f1[i]+car;
                if(f2[i]>9){
                    car = 1;
                    f2[i] -= 10;
                }
                else
                    car = 0;
            }
        }
        
        for(i=0;i<165;i++)
            f1[i] = f2[i];
    }
    
    for(i=0;i<165;i++)
        sum += f2[i];
    
    cout<<sum;
    return 0;
}

