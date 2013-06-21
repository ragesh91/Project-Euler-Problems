/* 
 * File:   Levy Conjecture.cpp
 * Author: Ragesh
 *
 * Created on April 5, 2013, 8:11 PM
 */

#include <iostream>
#include<math.h>

using namespace std;

/*
 * 
 */
bool isleep(int year){
    if(year%100==0){
        if(year%400==0){
            return true;
        }
        else
            return false;
    }
    else if(year%4==0)
        return true;
    else
        return false;
}

int main(){
    int count = 0,i,j,curr = 2,day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    
    for(i=1901;i<2001;i++){
        for(j=0;j<12;j++){
            if(curr==0)
                count++;
            curr += day[j];
            if(j==1 && isleep(i))
                curr++;
            
            curr %= 7;
        }
    }
    
    cout<<count;

    return 0;
}

