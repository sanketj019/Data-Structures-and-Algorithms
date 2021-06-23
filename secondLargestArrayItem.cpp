#include <iostream>
using namespace std;
int getLargest(int arr[],int n)
{
    int largest = 0;
    for(int i=1; i<n; i++)
    {
        if(arr[i] > arr[largest])
            largest = i;

    }
    return largest;
}

int secondLargest(int arr[],int n)
{
    int largest = getLargest(arr,n);
    int res = -1;
    for(int i=0; i<n; i++)
    {
        if(arr[i] != arr[largest])
        {
            if(res == -1)
                res = i;
            else if(arr[i]>arr[res])
                res = i;
        }
    }
    return res;
}
int main()
{
    int arr[] = {20,10,30};
    int n= 3;
    cout<<"the 2nd largest item is at index of : "<<secondLargest(arr,n);
}

