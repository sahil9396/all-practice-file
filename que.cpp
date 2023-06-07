#include <iostream>
using namespace std;
#include<deque>
#include<vector>
#include <string>
#include <queue>
#include <stack>

class Que{
    public:
    int si = 1000;
    int *arr;
    int front;
    int rear;

    Que(){
        arr = new int[si];
        front = 0;
        rear= 0;
    }


    void push(int d){
        if (rear == si)
        {
            cout << "queue is filled" << endl;
        }
        else
        {
            arr[rear] = d;
            rear++;
        }
    }

    void pop(){
        if (front == rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {

            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear= 0;
            }
            
        }
    }

    void peak(){
        if (front == rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << arr[front] << endl;
        }
    }

    bool Isempty(){
        if (rear == front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};

class cir_que{
    public:
    int n = 5;
    int *arr;
    int front;
    int rear;

    cir_que(){
        front = -1;
        rear = -1;
        arr = new int[n];
    }

    void push(int d){
        if ( (rear  == (front-1)%(n-1)) || ( (front = 0) && (rear == n-1) ) )
        // if ( (rear  -front == n-1) || (front - rear==n-1) )
        {
            cout << "Queue is full" << endl;
            return ;
        }


        // if it is empty
        else if (front == -1){
            front =  rear = 0;
        }
        else if (front != 0 && rear == n-1)
        {
            rear = 0;
        }
        else{
            rear++;
        }
        arr[rear] = d;
    }

    void pop(){
        // to check if it is empty
        if (front == -1 )
        {
            cout << "Queue is empty" << endl;
            return ;
        }
        
        arr[front] = -1;

        // single element
        if (front == rear)
        {
            front = rear = -1;
        }

        // element present at the index n-1 and maintain cyclic nature
        else if (front == n-1)
        {
            front = 0;
        }

        else
        {
            front++;
        }
    }

    void peak(){
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << arr[front] << endl;
        }
    }

    bool Isempty(){
        if (front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class doubly_ended_queue{
    int* arr;
    int front;
    int rear;
    int n;

    doubly_ended_queue(){
        n = 5;
        arr = new int[n];
        front = rear = -1;
    }

    void push_front(int d){
        // list is full?
        if ( (rear  == (front-1)%(n-1)) || ( (front = 0) && (rear == n-1) ) )
        {
            return ;
        }

        // empty list
        else if (front == -1)
        {
            front = rear = 0;
        }
        // first elements are poped and list is continued from mdiway
        else if (rear == n-1 && front != 0)
        {
            front--;
        }

        // first element is occupied
        else if (front == 0)
        {
            front = n-1;
        }
        

        arr[front] = d;

    }

    void pop_front(){
        // empty?
        if (front == -1)
        {
            return;
        }

        arr[front]  = -1;

        // single element
        if (front == rear)
        {
            front = rear = -1;
        }

        // element present at the index n-1 and maintain cyclic nature
        else if (front == n-1)
        {
            front = 0;
        }

        // list from the midway
        else
        {
            front++;
        }
    }

    void push_back(int d){
        // if back space is occupied
        if ( (rear  == (front-1)%(n-1)) || ( (front = 0) && (rear == n-1) ) )
        {
            return ;
        }


        // if it is empty
        else if (front == -1){
            front =  rear = 0;
        }

        // array starting from middle
        else if (front != 0 && rear == n-1)
        {
            rear = 0;
        }

        // normal case
        else
        {
            rear++;
        }
        

        arr[rear]  =d;
        
    }

    void pop_back(){
        // for empty
        if (front == -1)
        {
            return ;
        }

        arr[rear] = -1;

        // single element
        if (front == rear)
        {
            front = rear = -1;
        }

        else if (rear == 0)
        {
            rear = n-1;
        }
        

        // normal case
        else
        {
            rear--;
        }
    }

    void peak(){
        // empty?
        if (front == -1)
        {
            return ;
        }

        else
        {
            cout << arr[front] << endl;
        }
    }

};

void print_stack(stack <int> s){

    if (s.empty())
    {
        cout << "It is empty" << endl;
        return ;
    }
    

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    
}

void print_que(queue <int> s){
    while (s.size() != 0)
    {
        cout << s.front() << " ";
        s.pop();
    }
    cout << endl;
}

void queuw_rever_rec(queue <int> &any){
    if (!any.size())
    {
        return ;
    }

    int to = any.front();
    any.pop();
    queuw_rever_rec(any);
    any.push(to);
}

vector<int> first_neg_int_in_win_k(vector <int> s , int k){ 
    vector<int> ans;
    deque<int> index;

    // process karo first window of k size = here we are storing the index of the negative numbers in a window
    for (int i = 0; i < k; i++)
    {
        if (s[i] < 0)
        {
            index.push_back(i);
        }
        
    }
    

    // after storing the index of the numbers, then the first will be our ans for that window
    if (index.size())
    {
        ans.push_back(s[index.front()]);
    }
    else
    {
        ans.push_back(0);
    }
    
    // we are now processing the remaining part
    for (int i = k; i < s.size(); i++)
    {
        if (i - index.front() >= k  && !index.empty())
        {
            index.pop_front();
        }

        if (s[i] < 0)
        {
            index.push_back(i);
        }
        
        if (index.size())
        {
            ans.push_back(s[index.front()]);
        }
        else
        {
            ans.push_back(0);
        }
    }

    return ans;
}

void reverseInGroupOfk(queue <int> &s, stack <int> s1 , int k){
    
    if (s.empty() || s.size()< k)
    {
        return;
    }
    

    // // to clear the stack
    while (!s1.empty())
    {
        s1.pop();
    }
    
    for (int i = 0; i < k; i++)
    {
        s1.push(s.front());
        s.pop();
        
    }
    
    reverseInGroupOfk(s,s1 , k);

    while (!s1.empty())
    {
        s.push(s1.top());
        s1.pop();
    }

    for (int i = 0; i < s.size() - k; i++)
    {
        s.push(s.front());
        s.pop();
    }
}

void firstNonRepeatingChar( string &any){
    stack <int> repeating_index;
    for (int i = 0; i < any.size(); i++)
    {
        if (any[repeating_index.top()] == any[i]  && !repeating_index.empty())
        {
            repeating_index.pop();
            any[i] = '#';
        }
        else if (any[repeating_index.top()] != any[i] && !repeating_index.empty() && (any[repeating_index.top()] != '#')){
            any[i] = any[repeating_index.top()];
        }
        // else
        // {
        // }
        repeating_index.push(i);
        
    }
    
}

int main(){

   queue <int> s;
   stack <int> s1;
   for (int i = 1; i <= 10; i++)
   {
    s.push(i);
   }
//    for (int i = 1; i <= 5; i++)
//    {
//     s1.push(i);
//    }
   
    // print_que(s);
    string any = "aabc";
    firstNonRepeatingChar(any);
    cout << any << endl;
    // print_stack(s1);

    
    return 0;
}