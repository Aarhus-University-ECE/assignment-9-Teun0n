#include "sum.h"
#include <stdio.h>
#include <assert.h>

int sum(int a[], int n)
{
    //pre: n>=0
    //post: sum of all integers in array is returned.
    assert(n>=0);//n cant be less than 0.

    int sum = 0;//sum is set to have start value 0.

    if(n>0)//if n is zero array is empty sum of arrays is 
    {
        for(int i=0;i<n;i++)//all values in array are summed:
        {
            sum=sum+a[i];
        }
    }
    else //returns sum which is set to 0 if n=0.
    
    return sum;//sum is returned
    
}