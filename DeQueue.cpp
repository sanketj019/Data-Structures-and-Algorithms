//simple Dequeue Implementation
struct Dequeue
{
    int cap, size;
    int *arr;

    Dequeue(int c)
    {
        cap = c;
        size = 0;
        arr = new int [cap];
    }

    bool isFull() {return (size == cap);}
    bool isEmpty() {return (size == 0);}

    void insertRear(int x)
    {
        if(inEmpty()) return;
        arr[size] = x;
        size++;
    }

    void deleteRear()
    {
        if(isEmpty()) return ;
        size--;
    }

    int getRear()
    {
        return arr[size-1];
    }

    void insertFront(int x)
    {
        if(isFull()) return;
        for(int i = 0; i<size-1; i++)
            arr[i+1] = arr[i];

        arr[0] = x;
        size++;
    }

    void deleteFront()
    {
        if(isEmpty()) return;
        for(int i=0; i< size-1; i++)
            arr[i] = arr[i+1];
        size--;
    }

    int getFront()
    {
        if(isEmpty()) return;
        return arr[0];
    }
}

