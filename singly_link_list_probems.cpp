#include <iostream>
using namespace std;


class singly_ndoe{

    public:
    int data;
    singly_ndoe* next;

    singly_ndoe(int data){
        this-> data = data;
        this->next = NULL;
    }

    ~singly_ndoe(){
        if (this->next !=NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Deleted for" << this->data << endl;
        
    }
};

void singly_assign_tail( singly_ndoe* head , singly_ndoe* &tail){
    singly_ndoe* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    tail = temp;
    
}

void singly_headjoint( singly_ndoe* &head ,singly_ndoe* &tail, int data){

    // a temparary
    if (head == NULL)
    {
        singly_ndoe* temp = new singly_ndoe(data);
        head = temp;
        tail = head;
        return ;
    }
    
    singly_ndoe* temp = new singly_ndoe(data);

    temp->next = head;
    head = temp;
    singly_assign_tail(head , tail);
}

void singly_lastjoint( singly_ndoe* &head , singly_ndoe* &tail , int dt){
    if (head == NULL)
    {
        singly_ndoe* temp = new singly_ndoe(dt);
        head = temp;
        tail = head;
        return ; 
    }
    
    singly_ndoe* temp = new singly_ndoe(dt);
    singly_ndoe* tw = head;

    while (tw->next!=NULL)
    {
        tw = tw->next;
    }
    tw->next  = temp;
    tail = temp;
}

void singly_last_using_tail(singly_ndoe* &tail  , int d){    
    singly_ndoe* temp = new singly_ndoe(d);
    tail->next = temp;
    tail= temp;
}

void singly_print_link_list( singly_ndoe* head){
    singly_ndoe* temp = head;
    while (temp !=0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

int singly_numberOfElements( singly_ndoe *head){
    int c = 1;
    while (head->next != NULL)
    {
        c++;
        head = head->next;
    }
    return c;
}

void singly_AddMiddle( singly_ndoe* &head,singly_ndoe* &tail , int d){
    int noofelem = singly_numberOfElements(head);

    int m = noofelem/2 ; 
    
    singly_ndoe* temp = new singly_ndoe(d);
    singly_ndoe* t = head;
    
    for (int i = 1; i < m; i++)
    {
        t = t->next;
    }
    if (m%2!=0)
    {
        t = t->next;
    }
    
    singly_ndoe* front = t->next;

    t->next = temp;
    temp->next = front;
}

void singly_anyPosition( singly_ndoe* &head,singly_ndoe* &tail , int n , int d){
    singly_ndoe* temp = new singly_ndoe(d);
    singly_ndoe* t = head;

    if (n == 1)
    {
        singly_headjoint(head , tail , d);
        return;
    }

    // if (n == numberOfElements(head))
    // {
    //     lastjoint(head , d);
    //     return ;
    // }

    for (int i = 1; i < n; i++)
    {
        t = t->next;
    }
    if (temp->next == NULL)
    {
        singly_last_using_tail(tail , d);
        return ; 
    }
    
    singly_ndoe* front = t->next;
    t->next = temp;
    temp->next = front;
}

void singly_delete_position_wise(singly_ndoe* &head , int n){
    singly_ndoe* temp = head;

    if (n == 1)
    {
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        singly_ndoe* prev = NULL;
        for (int i = 1; i < n; i++)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        temp->next = NULL;
        delete temp;
    }        
}

void delete_recursion(singly_ndoe* &head,singly_ndoe* &tail ,int pos ,int i = 1 , singly_ndoe* pre = NULL){
    if (head==NULL)
    {
        return ;
    }
    if (pos == 1)
    {
        if (head->next == NULL)
        {
            delete head;
        }
        else{
            singly_ndoe* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;        
        }
        return ;
    }
    if (i == pos)
    {
        singly_ndoe* temp = head;
        if (temp->next == NULL)
        {
            pre->next = NULL;
            tail  =pre;
            delete temp;
            return ;
        }
        pre->next = temp->next;
        temp->next = NULL;
        delete temp;
        return ;
    }
    pre = head;
    delete_recursion(head->next ,tail, pos , i+1 , pre);
}

singly_ndoe* reverse(singly_ndoe* &head ,singly_ndoe* &tail){

    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    

    singly_ndoe* temp = head;
    singly_ndoe* prev = temp;
    singly_ndoe* front = NULL;
    
    // head
    prev = temp;
    front = temp->next;
    head->next = NULL;
    tail = head;
    temp = front;

    while (temp != NULL)
    {
        front = temp->next;
        temp->next = prev;
        prev = temp;

        temp = front;
    }

    head = prev;
    
    return head;
}

singly_ndoe* rec_signly_reverse(singly_ndoe* &head , singly_ndoe* &tail ,singly_ndoe* pre ){
    if (head->next == NULL)
    {
        head->next = pre;
        return head;
    }

    singly_ndoe* front = NULL;
    if (pre == NULL)
    {
        tail = head;
    }
    
    front = head->next;
    head->next = pre;
    pre = head;
    head = front;
    rec_signly_reverse(head ,tail ,pre);
}

singly_ndoe* rec_easy_one(singly_ndoe* &head ,singly_ndoe* &tail){
    if (head == NULL || head->next == NULL)
    {
        tail = head;
        return head ;
    }

    singly_ndoe* small_problem = rec_easy_one(head->next , tail);
    head->next->next = head;
    head->next = NULL;
    return small_problem;    
}

void brutal_way_middle(singly_ndoe* &head){
    int n = singly_numberOfElements(head);
    singly_ndoe* temp = head;
    int k  = n/2;
    
    for (int i = 0; i < k; i++)
    {
        temp = temp->next;
    }
    cout << "the data present is : "<<temp->data << endl;  
}

void optimize_middle(singly_ndoe* &head){

    if (head == NULL)
    {
        cout << "Emplty list" << endl;
    }
    else if (head->next == NULL)
    {
        cout << "the data of middle node is : "<< head->data << endl;
    }
    else if (head->next->next == NULL)
    {
        cout << "The data of middle node is : "<<head->next->data << endl;
    }
    else  
    {    
        singly_ndoe* one = head;
        singly_ndoe* two= head->next;

        while (two != NULL)
        {
            if (two->next!=NULL)
            {
                two = two->next->next;
            }
            one = one->next;
        }cout << endl;
        cout << "the data of middle node is "<< one->data << endl;
    }
    
}

void swap_in_pairOfK(singly_ndoe* &head , int k){
    singly_ndoe* tem = NULL;
    singly_ndoe* new_head = NULL;
    singly_ndoe* pre = head;
    singly_ndoe* currnet= pre;

    cout << pre->data << " " << currnet->data<<endl;
    while (currnet != NULL)
    {
        for (int i = 1; i < k; i++)
        {
            currnet = currnet->next;
        }
        pre->next = currnet->next;
        currnet->next = pre;
        if (tem != NULL)
        {
            tem->next = currnet;
        }
        tem = pre;
        if (new_head == NULL)
        {
            new_head = currnet;
        }
        
        pre = pre->next;
        currnet = pre;
        
    }
    head = new_head;    
    

}

bool sig_check_cirucular(singly_ndoe* &head){
    singly_ndoe* temp = head->next;
    if (head == NULL)
    {
        return true;
    }
    if (head->next == head){
        return true;
    }
    while (true)
    {
        if (temp == head)
        {
            return true;
        }
        if (temp == NULL){
            return false;
        }
        temp= temp->next;
    }
}


class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

bool check_cirucular(Node* &tail){
    Node* temp = tail->next;
    if (tail == NULL)
    {
        return true;
    }
    if (tail->next == tail){
        return true;
    }
    while (true)
    {
        if (temp == tail)
        {
            return true;
        }
        if (temp == NULL){
            return false;
        }
        temp= temp->next;
    }
}

void add(Node* &tail ,int val , int d){
    if (tail == NULL)
    {
        Node* tem = new Node(d);
        tail = tem;
        tail->next = tail;
        return ; 
    }
    Node* tem = new Node(d);
    Node* temp = tail;
    while (temp->data != val)
    {
        temp= temp->next;
    }
    tem->next = temp->next;
    temp->next = tem;
}

void show(Node* tail){
    if (tail == NULL)
    {
        cout << "Empty list" << endl;
        return ;
    }
    if (tail->next == tail)
    {
        cout << tail->data << endl;
        return ;
    }
    
    
    Node* temp = tail;
    cout << temp->data << " ";
    temp = temp->next;
    while (temp != tail)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;    
}

int main(){
    // singly_ndoe* head = new singly_ndoe(4);

    singly_ndoe* head=NULL;
    singly_ndoe* tail=head;
    // singly_assign_tail(head , tail);
    

    for (int i = 1; i <=4; i++)
    {
        singly_lastjoint(head,tail,i);
        // singly_last_using_tail(tail,i);
    }  
    // reverse_doub(head,tail);
    singly_print_link_list(head);
    cout << "head : " << head->data << " tail : " << tail->data << endl;
    if(sig_check_cirucular(head)){
        cout << "s" << endl;
    }
    // else
    // {
    //     cout << "no" << endl;
    // }
    
    // swap_in_pairOfK(head , 3);
    // singly_print_link_list(head);
    // if (tail->next == NULL)
    // {
    //     cout << "head : " << head->data << " tail : " << tail->data << endl;
        
    // }
    
    
    // optimize_middle(head);
    // cout << "This is head : " <<head->data << endl;
    // cout <<"This is tail : "<< tail->data << endl;
    // brutal_way_middle(head);
    // cout << "No of elements = " << singly_numberOfElements(head)<< endl;
    
    // singly_delete_position_wise(head , 10);
    // singly_delete_position_wise(head , 2);
    // singly_delete_position_wise(head , 2);
    // singly_print_link_list(head);

    // cout << "This is head" <<head->data << endl;
    // cout <<"This is tail"<< tail->data << endl;


    // Node* tail = new Node(0);
    // tail->next = tail;

    // add(tail , 0 , 1);
    // add(tail ,  1,2);
    // add(tail ,  2,3);
    // Node* tail = NULL;
    // show(tail);
    // if (check_cirucular(tail))
    // {
    //     cout << "s"<<endl;
    // }
    


    cout << "done" << endl;

}

