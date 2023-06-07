#include <iostream>
#include <queue>
using namespace std;

class B_tress{
    public:
    int data;
    B_tress* Left;
    B_tress* Right;

    B_tress(int data){
        this->data = data;
        Left = Right = NULL;
    }
};

B_tress* Build(B_tress* &root){
    cout << "Enter the data to enter : "<<endl;

    int d;
    cin >> d;
    root = new B_tress(d);

    if (d == -1)
    {
        return NULL ;
    }

    cout << "Enter the datat to add to the left of : " << d<<endl;
    root->Left = Build(root->Left);
    cout << "Enter the datat to add to the right of : " << d<<endl;
    root->Right = Build(root->Right);

    return root;
}

void Level_order_Traversal(B_tress* root){

    if (root == NULL)
    {
        cout << "This is a empty a tree" << endl;
        return;
    }
    queue <B_tress*> q;
    q.push(root);
    q.push(NULL);


    B_tress* tem= NULL;
    while (!q.empty())
    {
        tem = q.front();
        q.pop();

        if (tem == NULL)
        {//here it means the previous depth or level is completed
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << tem->data << " ";
            if (tem->Left)
            {
                q.push(tem->Left);
            }
            if (tem->Right)
            {
                q.push(tem->Right);
            }
        }
    }
}

void Inorder_Traversal_LNR(B_tress* root){
    if (root == NULL) return ;
    
    Inorder_Traversal_LNR(root->Left);    
    cout << root->data << " ";
    Inorder_Traversal_LNR(root->Right);
}

void Pre_order_Traversal_NLR(B_tress* root){

    if (root == NULL) return ;
    
    cout << root->data << " ";
    Pre_order_Traversal_NLR(root->Left);    
    Pre_order_Traversal_NLR(root->Right);
}

void Post_order_Traversal_LRN(B_tress* root){
    if (root == NULL) return ;
    
    Post_order_Traversal_LRN(root->Left);    
    Post_order_Traversal_LRN(root->Right);
    cout << root->data << " ";

}

B_tress* Build_from_level_order(B_tress* &root){
    
    queue <B_tress*> q;
    
    cout << "Enter the data for the root" << endl;
    int n ;cin >> n;

    root = new B_tress(n);
    q.push(root);

    B_tress* tem =  NULL;
    while (!q.empty())
    {
        tem = q.front();
        q.pop();

        cout << "Enter the data for the left for : "<< tem->data << endl;
        int leftdata ;cin >> leftdata;
        if (leftdata != -1)
        {
            tem->Left = new B_tress(leftdata);
            q.push(tem->Left);
        }
        cout << "Enter the data for the Right for : "<< tem->data << endl;
        int rightdata ;cin >> rightdata;
        if (rightdata != -1)
        {
            tem->Right = new B_tress(rightdata);
            q.push(tem->Right);
        }
    }
}

int no_Of_leaf_node_by_me(B_tress* root , int c = 0){

    if (  root->Right == NULL && root->Left == NULL)
    {
        c++;
        return c;
    }
    
    // left checking
    int one = no_Of_leaf_node_by_me(root->Left , c);

    // right checking
    int two = no_Of_leaf_node_by_me(root->Right,c);

    return one + two;
}

void height_of_BT_by_me( B_tress* root , int &c){
    if (root == NULL)
    {
        return ;
    }
    queue <B_tress*> q;
    q.push(root);
    q.push(NULL);


    B_tress* tem= NULL;
    while (!q.empty())
    {
        tem = q.front();
        q.pop();

        if (tem == NULL)
        {//here it means the previous depth or level is completed
            c++;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            if (tem->Left)
            {
                q.push(tem->Left);
            }
            if (tem->Right)
            {
                q.push(tem->Right);
            }
        }
    }

}

void heightOfBT_my_method(B_tress* root , int c , int &ans){
    if (root ==NULL) return;
    if (root->Left == NULL && root->Right == NULL ){
        ans = c >ans?c:ans;
        return ;
    }

    heightOfBT_my_method(root->Left , 1+c ,ans);

    heightOfBT_my_method(root->Right, 1+c,ans);
}

int sirs_height(B_tress* root){ //space comp = O(height) in normal cases and in worst case O(n) [worst case is when binary tree is like link-list]
    if (root == NULL) return 0;
    int one = sirs_height(root->Left );
    int two = sirs_height(root->Right);
    return (one>two?one:two) + 1;
}

int Diameter_my_logic(B_tress* root){
    if (!root) return ;
    int ans= 0,granted = 0;
    ans = sirs_height(root->Left) + sirs_height(root->Right) + 1;
    return ans;
    // O(n*n) is the time complexity
    
}

pair<int,int> sir_diameter(B_tress* root){
    if (root == NULL)
    {
        pair<int,int> p = make_pair(0,0);  //first block is for diameter and second one is for the height
        return p;
    }

    pair<int,int> left = sir_diameter(root->Left);
    pair<int,int> rg = sir_diameter(root->Right);

    int leftdia = left.first;
    int rgdia = rg.first;

    int dia_including_root = ((left.second>rg.second)?(left.second):(rg.second)) + 1;

    pair<int , int > ans;
    ans.first = max(leftdia , rgdia , dia_including_root);
    ans.second = max(left.second , rg.second) +1 ;
    return ans;   
    // O(n) is the time complexity
    // space = O(height) , worst is O(n)

}

bool balanced_tree_mine(B_tress* root){
    if (root == NULL)
    {
        return true;
    }

    bool lef = balanced_tree_mine(root->Left);
    bool rg = balanced_tree_mine(root->Right);
    
    if (!(lef && rg))
    {
        return false;
    }
    

    int lef = sirs_height(root->Left);
    int right = sirs_height(root->Right);
    int difference =  abs(lef-right);
    if (difference > 1)
    {
        return false;
    }
    return true;
    
}

pair<bool, int> my_method_balanced_using_sir(B_tress* root){
    if (!root)
    {
        pair<bool ,int> p = make_pair(1,0);
        return p;
    }

    pair<bool, int> left = my_method_balanced_using_sir(root->Left);
    pair<bool, int> ri= my_method_balanced_using_sir(root->Right);

    if (!(left.first)  || !(ri.first) || !((left.second - ri.second) > 1))
    {
        return make_pair(0,max(left.second, ri.second)+1);
    }
    
    pair < bool , int> ans;
    ans.first = 1;
    ans.second = max(left.second, ri.second)+1; 
    return ans;  

    // time = O(n)  ; n= no.of nodes
    // space = O(height)
}

bool indentical(B_tress* r1 , B_tress* r2){
    if ((r1 == NULL && r2  == NULL) || (r1->Left == NULL && r2->Right == NULL && r1->Right == NULL && r2->Left == NULL && r1->data == r2->data)) return 1;
    else if ((r1 == NULL && r2 != NULL ) || (r1 != NULL && r2 == NULL) || (r1->data != r2->data) ) return 0;

    bool case1 = (r1->Left->data == r2->Right->data)&&(r2->Left->data == r1->Right->data);
    bool case2 = (r1->Left->data == r2->Left->data)&&(r2->Right->data == r1->Right->data);
    if( !(case1 || case2)){
        return false;
    }
    else
    {
        if (case1)
        {
            bool c1 = indentical(r1->Left , r2->Right);
            bool c2 = indentical(r1->Right , r2->Left);
            return c1 && c2;
        }
        else
        {
            bool c2 = indentical(r1->Left , r2->Left);
            bool c1 = indentical(r1->Right , r2->Right);
            return c1 && c2;
        }
    }
}

bool sirs_indentical(B_tress* r1 , B_tress* r2){
    if (r1 == NULL && r2  == NULL) return 1;
    else if ((r1 == NULL && r2 != NULL ) || (r1 != NULL && r2 == NULL)) return 0;

    bool c1 = sirs_indentical(r1->Left , r2->Left);
    bool c2 = sirs_indentical(r1->Right , r2->Right);

    bool val = (r1->data == r2->data);
    if (c1 && c2 && val)    return true;
    else    return 0;
}

void zig_zag(B_tress* r){
    
}

int main(){
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
// 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
// 1 2 4 -1 -1 7-1 8 -1 -1 3 -1 5 -1 6 -1 -1
// 1 2 -1 -1 -1
    B_tress* root = NULL;
    int c = 1, ans =0 ;

    // root = Build_from_level_order(root);
    root  = Build(root);
    // Level_order_Traversal(root)
    ans = Diameter_my_logic(root);
    cout <<"The height of the tree is : "<< ans;


    // cout << endl;
    // Inorder_Traversal_LNR(root);
    // cout << endl;
    // Pre_order_Traversal_NLR(root);
    // cout << endl;
    // Post_order_Traversal_LRN(root);


    return 0;
}