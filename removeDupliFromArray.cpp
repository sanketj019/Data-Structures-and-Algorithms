#include <iostream>
using namespace std;
int removeDupli(int arr[],int n)
{
    int temp[n];
    temp[0] = arr[0];
    int res = 1;
    for(int i=0; i<n; i++)
    {

        if(temp[res-1]!= arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }
    for(int i=0; i<n; i++)
    {
        arr[i]= temp[i];
    }
    return res;
}
//efficient solution (above function requires auxiliary space )
int removeDupli2(int arr[], int n)
{
    int res = 1;
    for(int i=1; i<n; i++)
    {
        if(arr[i]!= arr[res-1])

        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main()
{
    int arr[]= {20,30,30,10,40,40};
    int n = 6;
    int res = removeDupli(arr,n);
    for(int i=0; i<res; i++)
        cout<<arr[i]<<" ";
}
