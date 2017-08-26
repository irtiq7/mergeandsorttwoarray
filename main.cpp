#include <iostream>
using namespace std;
int a[4] = {1,4,6,8};
int b[4] = {3,5,5,10};
int mergedarray[8], j;
int* mergeSortedArray(int*, int, int*, int);
int* merged;
int main()
{
    merged = mergeSortedArray(a,4,b,4);

    for(int i=0; i<8;i++)
        cout<<mergedarray[i]<<endl;
   return 0;
}

int* mergeSortedArray(int* a, int asize, int* b, int bsize){
   int* strtmerged = &mergedarray[0];
   int* stpmerged = &mergedarray[8];

   int* strta = &a[0];
   //int* stpa = &a[a-1];

   int* strtb = &b[0];
   //int* stpb = &b[b-1];
    j=1;
    while(*strtmerged<*stpmerged){
   if(*strta<*strtb){
   *strtmerged = *strta;
   *strtmerged++;
   *strtmerged = *strtb;
   *strtmerged++;
   *strta++;strtb++;
   j++;
    }
    else{
   *strtmerged = *strtb;
   *strtmerged++;
   *strtmerged = *strta;
   *strtmerged++;
   *strta++;strtb++;
    }
    }
    return mergedarray;

}
