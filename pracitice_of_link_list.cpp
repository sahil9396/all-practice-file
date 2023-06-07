#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this-> data = data;
        this->next = NULL;
    }

    ~Node(){
        if (this->next !=NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Deleted for : " << this->data << endl;
        
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

void add_circualar_to_nxt_head(Node* &tail , int d){
    if (tail == NULL)
    {
        Node* tem = new Node(d);
        tail = tem;
        tail->next = tail;
        return ; 
    }
    Node* tem = new Node(d);
    Node* temp = tail;
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
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail && temp != NULL);
    
    cout << endl;    
}

int length(Node* head){
    Node* tem = head;
    int c = 0;    
    do{
        c++;
        tem = tem->next;
    }while (tem != head && tem != NULL);
    return c;
}

void singly_last_using_tail(Node* &tail  , int d){
    if (tail == NULL)
    {
        Node* temp = new Node(d);
        tail= temp;
        return ;
    }
        
    Node* temp = new Node(d);
    tail->next = temp;
    tail= temp;
}

void singly_headjoint( Node* &head ,Node* &tail, int data){

    // a temparary
    if (head == NULL)
    {
        Node* temp = new Node(data);
        head = temp;
        tail = head;
        return ;
    }
    
    Node* temp = new Node(data);

    temp->next = head;
    head = temp;
}

void singly_anyPosition( Node* &head,Node* &tail , int n , int d){
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

    Node* temp = new Node(d);
    Node* t = head;
    for (int i = 1; i < n-1; i++)
    {
        t = t->next;
    }
    if (t->next == NULL)
    {
        singly_last_using_tail(tail , d);
        return ; 
    }    
    Node* front = t->next;
    t->next = temp;
    temp->next = front;
}

void connect( Node* &head,Node* &tail , int n){
    Node* tem = head;
    for (int i = 1; i < n; i++)
    {
        tem = tem->next;
    }
    tail->next = tem;
}

int detect_lloops(Node* &head,Node* &tail , int i = 1){
    if (tail->next == head)
    {
        return i;
    }
    return detect_lloops(head->next ,tail , i+1);
}

Node* algo_for_detect_loops(Node* head){
    if (head == NULL)
    {
        return head;
    }
    
    Node* slow = head;
    Node* fast= head;

    while (slow !=  NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast->next != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (fast == slow)
        {
            // cout << "The start of the loop is from : "<<slow->data << endl;
            return fast;
        }
    }
    return NULL;
}

Node* starting_of_loop(Node* head){
    if (head == NULL)
    {
        cout << "Empty list" << endl;
        return NULL;
    }
    Node* slow = head;
    Node* fast= algo_for_detect_loops(head);

    if (fast == NULL)
    {
        return NULL;
    }
    while (slow != fast)
    {
        slow = slow->next;
        fast= fast->next;
    }
    return slow;
}

void remove_loop(Node* head){
    if (head == NULL)
    {
        cout << "Empty list" << endl;
        return ;
    }
    Node* temp = starting_of_loop(head);
    Node* tail = temp->next;
    while (tail->next != temp)
    {
        tail = tail->next;
    }
    tail->next = NULL;
}

void remove_duplicate_sorted(Node* &head ){
    if (head == NULL || head->next == NULL)
    {
        return ;
    }

    Node* pre = head;
    Node* tem = head->next;
    while (pre->next != NULL)
    {
        if (pre->data == tem->data)
        {
            pre->next = pre->next->next;
            Node* destroy = tem;
            tem = pre->next;
            destroy->next = NULL;
            delete destroy;
        }
        else
        {
            pre = tem;
            tem = tem->next;
        }
    }
    show(head);   
    
}

void opti_remove_dupli_sorted(Node* &head){
    if (head == NULL || head->next == NULL)
    {
        return;
    }

    Node* pre = head;
    Node* cur= head->next;
    if (pre->data == cur->data){
        opti_remove_dupli_sorted(pre->next);


        // seng pre forward
        pre->next = pre->next->next;

        // created a node at node which you want to delete.
        Node* destroy = cur;

        // cur is send is front of pre
        if (pre != NULL)
        {
            cur = pre->next;
        }
        else
        {
            cur = pre;
        }      
        

        // deletion of node
        destroy->next = NULL;
        delete destroy;
    }
    else
    {
        opti_remove_dupli_sorted(pre->next);
    }
    
}

void brutforce_duplicate_unsorted(Node* &head){
    if (head == NULL)
    {
        return  ;
    }

    Node* tem = head;
    Node* cur = NULL;
    for (; tem!= NULL ; tem = tem->next)
    {
        cur = tem->next;
        while(cur != NULL)
        {
            if (cur->next != NULL  &&  cur->next->data==tem->data)
            {
                Node* destroy = cur->next;
                cur->next =cur->next->next;

                destroy->next = NULL;
                delete destroy;
            }
            else
            {
                cur = cur->next;
            }
        }
    }    
    show(head);
}

void map_duplicate(Node* &head){
    if (head == NULL)
    {
        return ;
    }    
}

Node*  break_circular(Node* &head){
    if (head == NULL || head->next == head)
    {
        return head;
    }
    
    Node* tem = head;
    Node* tail= head;
    int n = length(head);
    while (tail->next != head)
    {
        tail = tail->next;
    }

    n++;
    n/=2;
    for (int i = 1; i < n; i++)
    {
        tem = tem->next;
    }
    tail->next = tem->next;
    tem->next = head;

    return tail->next;
}

Node* Middle(Node* head){
    Node* fast= head->next;
    Node* slow= head;
    while (fast!= NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}

void sort(Node* &head){
    Node* tem = head;
    Node* cur = NULL;
    Node* pre = NULL;
    int n = length(head);
    int fi = 0 , se = 0;

    while (tem != NULL)
    {
        if (tem->data > tem->next->data)
        {
            tem->next = head;
        }
        
        tem = tem->next;
    }
    
    
}

Node* merge_1st_appro(Node* &head , Node* &head1 ){

    if (head == NULL)
    {
        return head1;
    }
    if (head1 == NULL)
    {
        return head;
    }
    

    Node* upper= head;
    Node* lower= head1;

    Node* realhead = NULL;
    Node* temp= realhead;
    
    while (upper != NULL && lower != NULL)
    {
        if(upper->data > lower->data && upper != NULL && lower != NULL){
            if (realhead == NULL)
            {
                realhead = lower;
                temp = realhead;
            }
            else{            
                temp->next = lower;
                temp = lower;
            }
            lower = lower->next;
        }
        else if(upper->data <= lower->data && upper != NULL && lower != NULL){
            if (realhead == NULL)
            {
                realhead = upper;
                temp = realhead;
            }   
            else{         
                temp->next = upper;
                temp = upper;
            }
            upper = upper->next;
        }


    }
        while(upper!= NULL) {
            temp->next = upper;
            temp = upper;
            upper = upper->next;
        }
        while(lower != NULL){ 
            temp->next = lower;
            temp = lower;
            lower = lower->next;
        }
    
    return realhead;
}

Node* merge_2nd_appro(Node* &head , Node* &head1){
    
    if (head == NULL)
    {
        return head1;
    }
    if (head1 == NULL)
    {
        return head;
    }
    

    Node* upper= head;
    Node* lower= head1;

    Node* realhead = new Node(-1);
    Node* temp= realhead;

    while (upper != NULL && lower != NULL)
    {
        if(upper->data > lower->data){
            temp->next = lower;
            temp = lower;
            lower = lower->next;
        }
        else{
            temp->next = upper;
            temp = upper;
            upper = upper->next;
        }

        
        if (lower == NULL) temp->next = upper;
        else if ( upper == NULL) temp->next = lower;

        // while (upper != NULL  && lower == NULL)
        // {
        //     temp->next = upper;
        //     temp = upper;
        //     upper = upper->next;
        // }
        // while (lower != NULL &&  upper == NULL)
        // {
        //     temp->next = lower;
        //     temp = lower;
        //     lower = lower->next;
        // }
    }

    temp = realhead;
    realhead = realhead->next;
    temp->next = NULL;
    delete temp;
    return realhead;


}

Node* merge_3rd_appro(Node* &head , Node* &head1){
    
    if (head == NULL)
    {
        return head1;
    }
    if (head1 == NULL)
    {
        return head;
    }
    Node* upper= head;
    Node* lower= head1;

    Node* realhead  = NULL;
    Node* temp = NULL;
    if(upper->data < lower->data){
        realhead = new Node(upper->data);
        temp= realhead;
        upper = upper->next;
    }
    else
    {
        realhead = new Node(lower->data);
        temp= realhead;
        lower = lower->next;
    }
    while (upper != NULL && lower != NULL)
    {
        if(upper->data < lower->data)
        {
            singly_last_using_tail(temp , upper->data);
            upper = upper->next;
        }
        else
        {
            singly_last_using_tail(temp , lower->data);
            lower = lower->next;
        }
    }

    while(upper!= NULL) {
            singly_last_using_tail(temp , upper->data);
            upper = upper->next;
        }
        while(lower != NULL){ 
            singly_last_using_tail(temp , lower->data);
            lower = lower->next;
        }


    return realhead;
}

Node* merge_recur( Node* &h1 ,Node* &h2){
    if (h1 == NULL)
    {
        return h2;
    }
    if (h2 == NULL)
    {
        return h1;
    }
    
    Node* upper = h1;
    Node* lower = h2;

    Node* ans;

    if (upper->data > lower->data)
    {
        ans = lower;
        ans->next = merge_recur(upper , lower->next);
    }
    else
    {
        ans = upper;
        ans->next = merge_recur(upper->next , lower);
    }
    
    return ans;
    
}

Node* sir_s_merge( Node* &h1 ,Node* &h2){
    if (h1 == NULL)
    {
        return h2;
    }
    if (h2 == NULL)
    {
        return h1;
    }
    
    Node* upper= h1;
    Node* upper2 = upper->next;
    Node* lower = h2;
    Node* lower1 = lower->next;

    while (upper2 != NULL)
    {
        if( (upper->data <= lower->data) && (upper2->data > lower->data)){
            upper->next = lower;
            lower->next = upper2;
            lower = lower1;
            lower1 = lower->next;
            upper = upper->next;
            upper2 = upper->next;
        }
        else
        {
            upper = upper->next;
            upper2 = upper->next;
            lower = lower->next;
        }
        
    }

    if (upper2 == NULL)
    {
        upper2->next = lower;
    }
    
    

    Node* ans;

}

Node* support(Node* &h1 ,Node* &h2){
    if (h1->data > h2->data)
    {
        sir_s_merge(h2,h1);
        return h2;
    }
    else{
        sir_s_merge(h1,h2);
        return h1;
    }
    
}

void reverse(Node* &head){
    if (head == NULL || head->next == NULL)
    {
        return ;
    }
    
    Node* cur= head;
    Node* pre=NULL;
    Node* front= NULL;

    while (cur != NULL)
    {
        front = cur->next;
        cur->next = pre;
        pre = cur;
        cur = front;
    }

    head = pre;
    
}

bool sirs_palindrome(Node* head){
    // middle
    Node* fast= head->next;
    Node* slow= head;
    while (fast!= NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }

    reverse(slow->next);
    // show(head);
    // slow = slow->next;
    // Node* tem= head;
    // while (tem != slow)
    // {
    //     if (tem->data != slow->data)
    //     {
    //         return false;
    //     }
        
    //     tem = tem->next;
    //     slow = slow->next;
    // }
    
    return true;
    
}

Node* own_But_brutalsum_of_elements(Node* h1 , Node* h2){
    reverse(h1);
    reverse(h2);

    Node* upper= h1;
    Node* lower= h2;

    Node* dummy = NULL;
    Node* tail = dummy;

    int d = 0 , carry = 0;

    while (upper != NULL && lower != NULL)
    {
        d =  upper->data + lower->data + carry;
        carry = d/10;
        d = d%10;
        
        singly_last_using_tail(tail , d);
        if (dummy == NULL)
        {
            dummy = tail;
        }
        
        upper = upper->next;
        lower= lower->next;
    }

    if (upper == NULL)
    {
        while (lower != NULL){
            d = lower->data  + carry;
            carry = d/10;
            d = d%10;
            
            singly_last_using_tail(tail, d);
            lower = lower->next;
        }
    }
    else if (lower == NULL){
        while (upper != NULL){
            d = upper->data  + carry;
            carry = d/10;
            d = d%10;
            
            singly_last_using_tail(tail, d);
            upper = upper->next;
        }
    }

    if (carry != 0)
    {
        singly_last_using_tail(tail , carry);
    }
    

    // delete -1

    reverse(dummy);
    reverse(h1);
    reverse(h2);

    return dummy;

}

Node* more_optimizesum_of_elements (Node* h1 , Node* h2){
    reverse(h1);
    reverse(h2);

    Node* upper= h1;
    Node* lower= h2;

    Node* dummy = NULL;
    Node* tail = dummy;

    int d = 0 , carry = 0;

    while (upper != NULL|| lower != NULL || carry != 0){

        int v1 = 0;
        if (upper != NULL)
        {
            v1 = upper->data;
        }
        
        int v2 = 0;
        if (lower != NULL)
        {
            v2 = lower->data;
        }

        d =  v1 + v2 + carry;
        carry = d/10;
        d = d%10;
        
        singly_last_using_tail(tail , d);
        if (dummy == NULL)
        {
            dummy = tail;
        }
        
        
        if (upper != NULL) upper = upper->next;
        if (lower != NULL) lower= lower->next;
    }

    reverse(dummy);
    return dummy;
}

Node* Merge_sort(Node* head ){
    if (head == NULL || head->next == NULL)
    {
        return head; 
    }

    Node* mid = Middle(head);
    Node* left = head;
    Node* right = mid->next ;
    if (right == NULL)
    {
        right = mid;
        left->next = NULL;  
    }
    
    mid->next = NULL;

    left = Merge_sort(left);
    right = Merge_sort(right);

    Node* ans = merge_1st_appro(left , right);

    return ans;
    
}

void swapInPair(Node* &head , Node* pre = NULL){
    if (head == NULL || head->next == NULL)
    {
        return ;
    }

    // Node* front =head->next->next;
    // Node* nt =head->next;
    // head->next->next = head;
    // head->next =front;
    // if (pre != NULL)    pre->next = nt;
    swapInPair(head->next->next , head->next);
    Node* front = head->next;
    head->next = front->next;
    front->next = head;
    if (pre != NULL)  pre->next = front;
    head = front;
}

int main(){

    Node* head = NULL;
    Node* tail = head;

    // Node* h = NULL;
    // Node* t = h;
    // Node* side_tail = head;
    // add_circualar_to_nxt_head(head , 0);

    for (int i =5; i >= 1; i--)
    {
        // add_circualar_to_nxt_head(head , i);
        singly_headjoint(head, tail , i);
    }

    swapInPair(head);
    show(head);

    // for (int i = 4; i >= 2; i-=2)
    // {
    //     singly_headjoint(h , t,i);
    // }
    
    
    // show(h);
    // Node* em = support(h , head);
    // show(em);
    cout << "done" << endl;
    // Node* sor = Middle(head);

    return 0 ;
}