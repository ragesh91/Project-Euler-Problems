#include <iostream>
#include<math.h>

using namespace std;

int main(){
    int sum[10000],i,j,count=0;
    memset(sum,0,10000*sizeof(sum[0]));

    sum[1] = 0;
    sum[2] = 1;
    sum[3] = 1;
    
    for(i=4;i<10000;i++){
        sum[i] = 1;
        for(j=2;j*j<=i;j++){
            if(i%j==0){
                sum[i] += j;
                if(j*j != i) 
                    sum[i] += i/j;
            }
        }
    }
    
    for(i=1;i<10000;i++){
        if(sum[i]<10000 && sum[i]!=i && sum[sum[i]]==i)
            count += i;
    }
    
    cout<<count;
    
    return 0;
}

