   #include<iostream>
   using namespace std;
   
   
   
   void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
    {
    
        for(int i= sizeOfArray-1; i>index; i--)
            {
                
                 arr[i] = arr[i-1];
            }
            arr[index] = element;
        
    }

    int main()
    {
        int arr[sizeOfArray],sizeOfArray, index, element;
        cout<<"enter size of array";
        cin>>sizeOfArray;

        cout<<"enter array elements";
        for(int i=0; i<sizeOfArray; i++)
            cin>>arr[i];
        
        for(int j=0; j<sizeOfArray; j++)
            cout<<"array elements are : "<<arr[j]<<" ";

        cout<<"enter the index at which you want to insert element";
        cin>>index;

        cout<<"enter the element";
        cin>>element;

        insertAtIndex(arr, sizeOfArray, index, element);
        return 0;

        
    }