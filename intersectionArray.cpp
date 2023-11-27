#include <iostream>
#include <vector>

using namespace std;
/*Q. find intersection of two arrays*/
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
vector<int> interArray(int arr1[], int m, int arr2[], int n)
{
    int j = 0, i = 0;
    vector<int> ans;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr2[j] = INT32_MIN;
                ans.push_back(arr1[i]);
            }
            i++;
            j++;
            if (arr1[i] < arr2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return ans;
    }
}
int main()
{
    int prime[7] = {2, 3, 5, 7, 11, 13, 17};
    int odd[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    printArray(prime, 7);
    printArray(odd, 10);
    interArray(prime, 7, odd, 10);
    cout << "the intersection is =" << ans << endl;
    ;
    return 0;
}
/*the logic is correct but code is not as per IDE*/