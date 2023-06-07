#include <iostream>
using namespace std;



class doubly_node{
    public:
    int data;
    doubly_node* pre;
    doubly_node* nex;

    doubly_node(int data){
        pre = NULL;
        this->data = data;
        nex = NULL;
    }


    ~doubly_node(){
        if (this->pre != NULL)
        {
            delete pre;
            delete nex;
        }
        cout << "Memory is freed for : " << data << endl;
        
    }

};

int len_Of_double(doubly_node* head){
    doubly_node* temp = head;
    int c = 0;
    while (temp != NULL)
    {
        c++;
        temp = temp->nex;
    }

    return c;
}

void printDoub(doubly_node* head){
    doubly_node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->nex;
    }cout << endl;
    
}

void DOun_assign_tail(doubly_node* &head ,doubly_node* &tail){
    doubly_node* tmep = head;
    while (tmep->nex != NULL)
    {
        tmep = tmep->nex;
    }
    tail = tmep;
    
}

void InsertAthead( doubly_node* &head  ,doubly_node* &tail, int d){

    if (head == NULL)
    {
        doubly_node* form = new doubly_node(d);
        head = form;
        tail= form;
        return ;
    }
    

    doubly_node* curr = head;
    doubly_node* form = new doubly_node(d);

    curr->pre = form;
    form->nex = curr;
    head = form;
}

void Atlast( doubly_node* &tail ,doubly_node* &head , int d){
    if (tail == NULL)
    {
        doubly_node* form = new doubly_node(d);
        tail = form;
        head = form;
        return ;
    }
    
    doubly_node* temp = new doubly_node(d);
    tail->nex = temp;
    temp->pre = tail;
    tail = temp;
}

void AnyPos(doubly_node* &head ,doubly_node* &tail , int pos , int d){
    doubly_node* fomr = new doubly_node(d);
    doubly_node* temp = head;

    if (pos == 1)
    {
        InsertAthead(head , tail , d);
        return ;
    }
    
    for (int i = 1; i < pos; i++)
    {
        temp = temp->nex;
    }

    if (temp->nex == NULL)
    {
        Atlast( temp , head , d);
        return ;
    }
    

    doubly_node* front = temp->nex;
    // fomr things
    fomr->pre = temp;
    fomr->nex = front;

    // before's next box
    temp->nex = fomr ;

    // after's previous box
    front->pre = fomr;

    
}

void doubly_delete_position_wise(doubly_node* &head , int n){
    doubly_node* temp = head;

    if (n == 1)
    {
        head = head->nex;
        temp->nex = NULL;
        delete temp;
    }
    else
    {
        doubly_node* prev = NULL;
        for (int i = 1; i < n; i++)
        {
            prev = temp;
            temp = temp->nex;
        }
        prev->nex = temp->nex;
        (temp->nex)->pre = prev;
        (temp->nex) = NULL;
        (temp->pre) = NULL;
        delete temp;
    }        
}

void reverse_doub(doubly_node* &head , doubly_node* &tail){
    doubly_node* tem = head;
    tail = head;
    doubly_node* next = NULL;
    doubly_node* last= NULL;

    while (tem  != NULL)
    {
        next =tem->nex;
        tem->nex = last;
        tem->pre = next;
        last = tem;
        tem = next;
    }
    head = last;
}

doubly_node* recurrsive_rev_doub(doubly_node* &head, doubly_node* &tail){
    if (head == NULL || head->nex == NULL)
    {
        return head;
    }

    doubly_node* small = recurrsive_rev_doub(head->nex , tail);
    head->pre = head->nex;
    head->nex->nex = head;
    // head->front->pre = NULL;
    head->nex =NULL;
    tail = head;
    return small;

    
}

class cir_node{
    public:
    int data;
    cir_node* nx;

    cir_node(int d){
        data  = d;
        nx = NULL;
    }

    ~cir_node(){
        if (nx!= NULL)
        {
            delete nx;
            nx = NULL;
        }
        cout << "Memory is free for the data : " << data << endl;
    }
};

void print_cir(cir_node* tail){
    cir_node* temp = tail;
    // here we used do while loop becuase to cover the case of single node
    do{
        cout << temp->data << " ";
        temp = temp->nx;
    }while (temp != tail);
    cout <<endl;
}

void add_in_cir(cir_node* &tail, int num , int d){
    if (tail == NULL)
    {
        cir_node* formed = new cir_node(d);
        formed->nx = formed;
        tail = formed;
    }
    else
    {
        cir_node* formed = new cir_node(d);
        cir_node* tmep = tail;
        while (tmep->data != num)
        {
            tmep = tmep->nx;
        }
        formed->nx =tmep->nx;
        tmep->nx = formed;
    }
}

void check_circular(cir_node* &tail){
    if (tail == NULL)
    {
        cout << "Empty" <<endl;
        return ;
    }
    else if (tail->nx == tail)
    {
        cout << "It is a single element circular link list" << endl;
        return ;
    }
    
    
    cir_node* tmep = tail;
    while (tmep->nx != tail)
    {
        tmep = tmep->nx;
    }
    
}

bool check_cirucular(cir_node* &head){
    cir_node* temp = head->nx;
    if (head == NULL)
    {
        return true;
    }
    if (head->nx == head){
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
        temp= temp->nx;
    }
}



int main(){
    // doubly_node* head = new doubly_node(10);
    // doubly_node* head = NULL;
    
    
    // doubly_node* tail = NULL;
    // DOun_assign_tail(head , tail);

    // doubly_node* tail = NULL;


    // int n = 11 , p = 2;
    // InsertAthead(head, tail , 5);

    // Atlast(tail ,head, 20);

    // AnyPos( head , tail , p++ , n++);
    // AnyPos( head , tail , p++ , n++);
    // AnyPos( head , tail , p++ , n++);
    // AnyPos( head, tail , len_Of_double(head), n++);

    // printDoub(head);
    // doubly_delete_position_wise( head , 3);


    // printDoub(head);
    // write a code to manage the tail after deletion for singly and double
    // cout << "the len of the double linked list " << len_Of_double(head) << endl;
    // cout<<endl << "done" << endl;


    // int pos = 2 , n = 2;
    // cir_node* tail = NULL;
    cir_node* tail = new cir_node(1);
    // tail->nx == tail;
    // add_in_cir(tail , 1 , 1);
    int n = 1;
    add_in_cir(tail , 1 , 2);
    add_in_cir(tail , 2 , 3);
    add_in_cir(tail , 3 , 4);
    cout << "done" << endl;
    // print_cir(tail);
    if(check_cirucular(tail)){
        cout << "s" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    // tail = add

    // check_circular(tail);



    cout << "done" << endl;
    return 0; 
}