#include <iostream>
using namespace std;
int Greatest(int arr[],int n);
int main()
{
    int arr[] = {1,5,3,6};
    int n = 4;
    cout<<"Largest element index is : "<<Greatest(arr,n);
    return 0;

}
int Greatest(int arr[],int n)
{
    int temp = arr[0];
    for(int i=0; i<=n-1; i++)
    {
        if(arr[i]< arr[i+1])
        {
            temp = i+1;
        }

    }
    return temp;




}

