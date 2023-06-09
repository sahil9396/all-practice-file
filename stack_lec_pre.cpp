#include <iostream>
using namespace std;

#include <vector>
#include <stack>

class Stack{
    public:
    int n;
    int top;
    int *arr;

    Stack(int n){
        this->n  = n;
        arr= new int[this->n];
        top = -1;
    }

    void push(int d){
        if (top >= n)
        {
            cout << "Stack is overflowed" << endl;
        }
        else
        {
            top++;
            arr[top]  = d;
        }
    }

    void pop(){
        if (top <0)
        {
            cout << "Stack is Underflowed" << endl;
        }
        else
        {
            top--;
        }
    }

    void last(){
        if(top >= 0) cout << arr[top] << endl;
        else cout << "Stack is overflowed" << endl;
        
    }

    void isempty(){
        if (top <0)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Stack is not empty" << endl;
        }
    }
};

class Two_stack{
    public:
    int size;
    int *arr;
    int c1;
    int c2;

    Two_stack(int n ){
        size = n;
        arr = new int[size];
        c2 = size;
        c1 = -1;
    }

    void push1(int d){
        if ( c2 - c1 > 1 )
        {
            arr[++c1] = d;
        }
        else
        {
            cout << "Stacks are Overflowed" << endl;
        }
    }

    void push2(int d){
        if ( c2 - c1 > 1 )
        {
            arr[--c2] = d;
        }
        else
        {
            cout << "Stacks are Overflowed" << endl;
        }
    }

    int last1(){
        if (c1 < 0)
        {
            cout << "Stack1 is Empty " << endl;
        }
        else
        {
            return arr[c1];
        }
        
    }

    int last2(){
        if (c2  > size)
        {
            cout << "Stack2 is Empty " << endl;
        }
        else
        {
            return arr[c2];
        }
    }

};

void printstack_of_char(stack <char> any){
    while (!any.empty())
    {
        cout << any.top() << " ";
        any.pop();
    }
    cout << endl;    
}

void printstack_of_int(stack <int> any){
    while (!any.empty())
    {
        cout << any.top() << " ";
        any.pop();
    }
    cout << endl;    
}

void reverse_a_stirng(string &any){
    stack <char> s;
    for (int  i = 0; i < any.size(); i++)
    {
        s.push(any[i]);
    }
    for (int i = 0; i < any.size(); i++)
    {
        any[i] = s.top();
        s.pop();
    }    
}

void remove_middle_element (stack <char> &any  , int Middle, int count = 0){
    if (count == Middle)
    {
        any.pop();
        return ;
    }

    char last = any.top();
    any.pop();
    remove_middle_element(any , Middle , count+1);
    any.push(last);
    
}

bool valid_parenthesis_onky_for_one_whole(string stt){
    if (stt.size()%2 != 0)
    {
        return false;
    }
    
    stack <char> s;
    for (int i = 0; i < stt.size(); i++)
    {
        s.push(stt[i]);
    }

    for (int i = 0; i < stt.size()/2; i++)
    {
        if ( stt[i] == 91 || stt[i] == 93)
        {
            if (stt[i] == 93)
            {
                return false;
            }
            
            if (s.top() != 93)
            {
                return false;
            }
        }
        if (stt[i] == 40 || stt[i] == 41)
        {
            if (stt[i] == 41)
            {
                return false;
            }
            if (s.top() != 41)
            {
                return false;
            }
        }
        if (stt[i] == 123|| stt[i] == 125)
        {
            if (stt[i] == 125)
            {
                return false;
            }
            if ( s.top() != 125 )
            {
                return false;
            }
        }
        
        s.pop();
    }
    return true;
}

bool valid_parenthesis_sirs_method(string str){
    if (str.size()%2 != 0)
    {
        return false;
    }
    
    stack <char> s;
    for (int i = 0; i < str.size(); i++){
    
        if (str[i] == 40|| str[i] == 91 || str[i] == 123)
        {
            s.push(str[i]);
        }
        else
        {
            if ((str[i] == 41 && s.top() == 40) || ( str[i] == 93 && s.top() == 91) || (str[i] == 125 && s.top() == 123))
            {
                    s.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if(s.empty()) return true;
    else return false;
        

}

void BY_me_add_bottom_at_ofthestack(stack <int> &s , int k ){
    if (s.empty())
    {
        s.push(k);
        return ;
    }

    int tem = s.top();
    s.pop();
    BY_me_add_bottom_at_ofthestack(s,k);
    s.push(tem);
}

void reverse_stack_rec(stack <int> &s ){
    if (s.empty())
    {
        return ;
    }
    
    int k = s.top();
    s.pop();
    reverse_stack_rec(s);
    BY_me_add_bottom_at_ofthestack(s,k);
}

void by_mesort_stack(stack <int> &s){
    if (s.empty())
    {
        return ;
    }

    int k = s.top();
    s.pop();
    by_mesort_stack(s);
    stack <int> tem;
    while (k < s.top()){
        tem.push(s.top());
        s.pop();
        if (s.empty())
        {
            break;
        }
    }
    
    s.push(k);
    while (!tem.empty())
    {
        s.push(tem.top());
        tem.pop();
    }
}

void support_insertinsortedway(stack <int> &s , int k){
    if (s.empty() || (k >s.top())) 
    {
        s.push(k);
        return ;
    }

    int d = s.top();
    s.pop();
    support_insertinsortedway(s , k);
    s.push(d);
    
}

void sirs_sort_stack(stack <int> &s){
    if (s.empty())
    {
        return ;
    }
    int k = s.top();
    s.pop();
    sirs_sort_stack(s);
    support_insertinsortedway(s , k);
}

bool useless_parenthesis(string str ){
    stack <char> s;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 40 || str[i] == 37 || str[i] == 38 || str[i] == 42 || str[i] == 43 || str[i] ==45 || str[i] ==47)
        {
            s.push(str[i]);
        }
        else
        {
            if (str[i] == 41)
            {
                
                if ( s.top()== 37 || s.top() == 38 || s.top() == 42 || s.top() == 43 || s.top() ==45 || s.top() ==47)
                {
                    s.pop();
                    if (s.top() == 40)
                    {
                        s.pop();
                    }
                }
                else
                {
                    return false;
                }
            }
        }
    }

    if (s.empty()) return true;
    else return false;
    
}

int make_the_parenthesis_vaild(string str){
    stack <char> s;
    int c = 0;
    char ch;
    for (int i = 0; i < str.size(); i++)
    {
        ch = str[i];
        if (ch == 123)
        {
            s.push(ch);
        }
        else
        {
            if (s.top() == 123)
            {
                s.pop();
            }
            else
            {
                c++;
            }
        }
    }
    if (s.top() == 123)
    {
        c++;
    }
    return c;
    
}

vector <int> nxt_smaller_element(vector <int> an){
    stack <char> s;
    s.push(-1);
    vector <int> ans(an.size());
    for (int j = an.size() - 1; j >= 0; j--)
    {
        while (s.top() >= an[j])
        {
            s.pop();
        }
        ans[j] = s.top();
        s.push(an[j]);
    }
    
    return ans;
    
}

class N_stack{
    public:
    int *arr;
    int *stk;
    int arr_size;
    int no_of_stacks;
    int sum;

    N_stack(int arr_size , int no_of_stacks){
        this->arr_size = arr_size;
        this->no_of_stacks = no_of_stacks;
        arr = new int[arr_size];
        stk = new int[no_of_stacks];
        sum= 0;
        for (int i = 0; i < arr_size; i++)
        {
            *(arr +i) = 0;
        }
        for (int i = 0; i < no_of_stacks; i++)
        {
            *(stk +i) = -1;
        }
    }

    void push_element_in_kth(int d,int k){
        if (sum == arr_size )
        {
            cout << k<< "th stack is overflowed" << endl;
        }
        else
        {
            stk[k-1]++;
            if (arr[stk[k-1]] == 0)
            {
                arr[stk[k-1]] = d;
            }
            else
            {
                while (arr[stk[k-1]] != 0)
                {
                    stk[k-1]++;
                }
                arr[stk[k-1]] = d;
            }
            sum++;
        }
    }

    void top( int k){
        if (sum == 0)
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            cout << "The top element is of "<<k << "th stack is : "<< arr[stk[k-1]] << endl;
        }
    }

    void pop( int k){
        if (sum == 0)
        {
            cout << "stack is empty" << endl;
        }
        else{
            arr[stk[k-1]] = 0;
            stk[k-1]--;
            for (int i = 0; i < no_of_stacks; i++)
            {
                if( *(stk+k-1) == *(stk +i) && i != k){
                    stk[k-1]--;
                }
            }
            sum--;
            // cout << "poped successfully" << endl;
        }
    }

};

int main(){


    N_stack first(9,5);
    first.push_element_in_kth(1 , 1);
    first.push_element_in_kth(2,2);
    first.push_element_in_kth(3, 3);
    first.push_element_in_kth(4 , 4);
    first.push_element_in_kth(5 , 5);

    first.push_element_in_kth(11 , 1);
    first.push_element_in_kth(22,2);
    first.push_element_in_kth(33,3);
    first.push_element_in_kth(44, 4);
    // first.push_element_in_kth(44, 5);
    // first.push_element_in_kth(55, 5);

    for (int i = 1; i <= 5; i++)
    {
        first.pop(i);
        first.top(i);
    }
    

    // first.top(1);
    // cout << endl<< "after" << endl << endl;

    // first.push_element_in_kth(2,3);
    // first.top(3);
    // cout << endl<< "after" << endl << endl;


    // first.push_element_in_kth(3 , 1);
    // first.pop(1);
    // first.top(1);
    // cout << endl<< "after" << endl << endl;

    // printstack_of_char(s);
    
    // int dec = make_the_parenthesis_vaild(str);
    // cout << dec << endl;

    // int arr[10] = {0,1,2,3};
    // *arr = 10;


    cout <<"done"<<endl ;

    
    

    return 0 ;
}