#include "search.h"
#include <stdbool.h>
#include <assert.h>
#include <stdio.h>

bool search(int a[], int n, int x)
{
     //Iterative implementation:


  
   /* assert(n>=0);//n must be greater than 0

    for(int i=0;i<n;i++)
    {
        if(a[i]=x)
            return true;
    }
    return false;
    */
   //recursive implementation.
    //pre: n>=0
    //post: if x is in array true is returned,if not false is returned.
   assert(n>=0);
   if(n>0 && a[n-1]==x)//checks if number in array is equal to x.
   {
    return true;
   }
   if(n>0 && a[n-1]!=x)//if number in array isn't equal to x, next number in array is checked.
   {
        return search(a,n-1,x);
   }
   if(n==0)//when all numbers have been checked and none were equal 
   {
        return false;
   }
}