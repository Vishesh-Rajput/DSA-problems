#include <iostream>
using namespace std ;
// void printArray( int arr[],int size){
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int duplicate(int arr1[],int size){
//    for (int i = 0; i < size-1; i++)
//    {
//     /*hw question*/
//    }
   
// }
// int main()
// { int ball[7]={0,1,2,3,4,1,5,};
// int arr [100] ={ 1};
// printArray(ball,7);
// printArray(arr,100);
//      ;
//      return 0;
//  }
int main()
{
 int ar1[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int ar2[10];

    copy(begin(ar1), end(ar1), begin(ar2));

for (int i = 0; i < 10; i++)
{
    cout<<ar2[i]<<" ";
}

}
