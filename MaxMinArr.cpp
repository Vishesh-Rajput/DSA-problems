#include <iostream>
using namespace std;
/*program to find maximum and minimum element in an array*/

int  min(int arr[],int size){
    int min= INT32_MAX;    /*compare every element with max value of int range and store*/
  for (int i = 0; i < size; i++)
  {
     if (arr[i]<min)
    {
        min = arr[i];
    }
  }
   return min; }

int  max1(int arr[],int size){   /*compare every element with min value of int range and store*/
    int max1= INT32_MIN;
  for (int i = 0; i < size; i++)
  {
    max1 = max(max1,arr[i]); /* <<===  an alternate inbuilt function to compare the maximum */
    //  if (arr[i]>max)
    // {
    //     max = arr[i];
    // }
  }
   return max1; 
}
int main()
{
    int arr[10] = {3, 5, 2, -1, 7, 8, 7, 99, 43, -11};
   cout<<"the max value is "<<max1(arr,10)<<endl;
   cout<<"the min value is "<<min(arr,10)<<endl;

    
    return 0;
}