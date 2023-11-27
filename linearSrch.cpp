#include <iostream>
using namespace std ;
/*program to find a key number from the array using liner search*/
void printArr(int arr [], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i] <<" ";
    
    }
    
}
int searchArr(int arr[],int size,int key ){
for (int i = 0; i < size; i++)
{
    if (arr [i]==key)
    {
        return i;
    }
    
}


}
int main()
{
     int key;  
     int arr[10]={10,11,12,13,14,15,16,17,18,19};
     cout <<"enter the number u wanna find"<<endl;
     cin >> key;
printArr(arr,10);
cout<<searchArr(arr,10,key)<<endl;;

     return 0;
 }