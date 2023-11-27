#include <iostream>
using namespace std ;
/*program to swap alternate or consecutive elements in an array*/
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int altRev(int arr[],int size){
    for (int i = 0; i < size; i+=2)
    {
        swap(arr[i],arr[i+1]);
   
    }
     printArr(arr,size);
}

int main()
{
     int egg[10]={10,11,12,13,14,15,16,17,18,19};
printArr(egg,10);
cout<<endl;
altRev(egg,10);
     return 0;
 }