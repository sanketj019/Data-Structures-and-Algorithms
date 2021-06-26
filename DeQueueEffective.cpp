#include <iostream>
using namespace std;

struct DeQueueEffective
{
    int *arr;
    int cap, front, size;

    DeQueueEffective(int x)
    {
        arr = new int[x];
        cap= x;
        front = 0;
        size = 0;
    }

    void insertFront(int x)
    {
        if(isFull()) return;
        front = (front + cap - 1)% cap;
        arr[front] = x;
        size++;
    }

    void insertRear(int x)
    {
        if(isFull()) return;
        new_rear = (front + size)% cap;
        arr[new_rear] = x;
        size++;
    }

    void deleteFront()
    {
        front = (front+1) % cap;
    }

    void deleteRear()
    {
        size--;
    }

    int getFront()
    {
        return = front;
    }

    int getRear()
    {
        return (front + size - 1) % cap;
    }
};
