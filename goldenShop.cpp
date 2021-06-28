#include <iostream>
#include <string.h>
using namespace std;

class Queue{
    public:
    int front, rear, size;
    string queue[10];
    Queue (int n){
        front = rear = 0;
        size = n;
    }
    void enque(string data){
        if(rear == size){
            cout<<"The Queue is Full"<<endl;
            return;
        }
        else{
            queue[rear] = data;
            rear++;
        }
        return;
    }
    void deque(){
        if(front == rear){
            cout<<"The Queue is Empty"<<endl;
            return;
        }
        else{
            for (int i = 0; i < rear-1; i++){
                queue[i] = queue[i+1];
            }
            rear--;
        }
        return;
    }
    void display(){
        if (front == rear){
            cout<<"The Queue is Empty"<<endl;
        }
        for (int j = front; j < rear; j++){
            cout<<queue[j]<<"-->";
        }
    }
    void friendenque(string frname, string quename){
        int temp = rear;
        rear = rear + 1;
        while (queue[temp] != quename){
            queue[temp+1] = queue[temp];
            temp--;
        }
        queue[temp+1] = frname;
    }
    void vipenque(string vip){
        int temp = rear;
        rear = rear + 1;
        while (temp != front){
            queue[temp+1] = queue[temp];
            temp--;
        }
        queue[temp+1] = queue[temp];
        queue[temp] = vip;
    }
};
int main(){
    int l;
    string name;
    string frname;
    string quename;
    string vip;
    int option;
    cout<<"Enter length"<<endl;
    cin>>l;
    Queue a(l);
    for (int i = 0; i < l; i++){
        cout<<"Enter the name of person in Queue at Position "<<i<<endl;
        cin>>name;
        a.enque(name);
    }
    a.display();
    while(1){
    cout<<"\nEnter the operation - 1.Serve/ 2.Friend <friend> <name>/ 3. VIP <name>/ 4. exit"<<endl;
    cin>>option;
    if(option == 1){
        a.deque();
        a.display();
    }
    else if(option == 2){
        cout<<"enter friend name :";
        cin>>frname;
        cout<<"friend in Queue : ";
        cin>>quename;
        a.friendenque(frname, quename);
        a.display();
    }
    else if (option == 3){
        cout<<"Enter VIP's name : ";
        cin>>vip;
        a.vipenque(vip);
        a.display();
    }

    else{
        return 0;
    }
}
return 0;
}
