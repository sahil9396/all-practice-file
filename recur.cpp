#include <iostream>
using namespace std;
#include <string>
#include <vector>
void print_arr( int *arr , int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int my_first_rec_two_power(int n ){
    // here the maximum interger capacity is ((2 to the power of 31) -1 ) , so 0<= n <= 31 is valid for this recurssion.
    if (n == 0)
    {
        return 1 ;
    }
    return (2*my_first_rec_two_power(n-1));
}

int facto( int n){
    if (n ==0)  // this is called base case/condition
    {
        return 1 ;
    }
    return n * facto(n-1);
    // if base is not written, then this function will continue to run till it fills the stack memory  and after fillling the memory , it will give error
}

int print_all_number_my_approch(int n ){
    if (n == 1)
    {
        cout << 1 << " ";
        return 1;
    }
    cout << n << " " ;
    print_all_number_my_approch(n-1);
}

int fibonacii( int n){
    // if (n == 1)
    // {
    //     return 0 ;
    // }
    // if (n == 2)
    // {
    //     return 1 ;
    // }
    // return (fibonacii(n-1) + fibonacii(n-2));
    
    // iterative

    int a = 0 , b = 1 , c , temp;
    for (int i = 0; i < n; i++)
    {
        c = a ;
        temp = b;
        b +=a;            
        a = temp;
    }
    return c;
    

}

int n_c_r(int n , int r){
    int n_fator = facto(n) , r_fac = facto(r) , n_r_fac = facto(n-r);
    int results = n_fator/(r_fac * n_r_fac);
    return results;
}

int number_of_distanct_steps(int n){
    if (n  < 0)
    {
        return 0 ;
    }
    if (n == 0)
    {
        return 1 ;
    }
    
    return (number_of_distanct_steps(n-1) + number_of_distanct_steps(n-2));
        
}

string letters[10] = {"zero" ,"one" , "two" ,"three","four" , "five","six","seven" , "eight","nine" };

int say_numbers_by_me( int n ){
    if (n == 0)
    {
        // cout << letters[n%10]<<" " ;
        return 1 ;
    }
    
    say_numbers_by_me(n/10);
    cout << letters[n%10]<<" " ;
}

int sorted_array ( int arr[] , int n )
{
    if (n == 0)
    // if (arr[0] < arr[1])
    {
        return 1 ;
    }
    
    sorted_array( arr , n-1);   

    if (arr[n-1] < arr[n])
    {
        return 1;
    }
}

void JustPrinting_Rever_Str_Rec( string any  , int n){
    if (n == 0)
    {
        return ; 
    }

    // cout << endl <<any <<"   "<< "n = " << n<<"  ";
    cout << any[n-1] ;
    JustPrinting_Rever_Str_Rec( any ,  n - 1 );
    return ; 
}

void Revers_the_actual_str( string& any, int s ,  int n){
    if (s > n)
    {
        return  ;
    }
    swap( any[s] ,any[n]);
    Revers_the_actual_str(any , s+1 ,n-1);
    return ; 
    
}

void Using_single_pointer_rever( string& any , int n ){
    if (n < (any.size())/2)
    {
        return ; 
    }
    cout << any[n] << " ";
    swap ( any[ 0] , any[n]);
    Using_single_pointer_rever( any , --n);
    
}

bool Palindrome ( string any, int s  , int n){
    // cout << any[s] << " " << any[n] << endl;
    if (s > n)
    {
        return true;
    }
    if (any[s] != any[n])
    {
        return false;
    }
    else
    {
        return Palindrome( any , ++s , --n);
        // return true;   
    }
}

int Any_power( int m ,int n){
    if (n == 0)
    {
        return 1 ;
    }
    if (n == 1)
    {
        return m ;
    }
    int pow = Any_power( m ,n/2);
    if (n%2 == 1)
    {
        return (m * (pow * pow));
    }
    else
    {
        return (pow * pow);
    }
}

void bubble_sort_short_number_of_repetation( int* arr , int n){
    print_arr( arr, n);
    if (n == 0|| n == 1)
    {
        return ;
    }
    
    for (int j = 0; j < n - 1; j++)
    {
            if (arr[j] > arr[j+1])
            {
                swap ( arr[j] , arr[j+1]);
            }
    }

    bubble_sort_short_number_of_repetation( arr  ,--n);
}

void buuble_sort_long_number_of_repetation( int *arr ,int j  , int n){
    if (j == (n-1) || j == n)
    {
        return ; 
    }
    
    if (arr[j] > arr[j+1]){
        swap ( arr[j] , arr[j+1]);
        // print_arr( arr  ,n); 
        buuble_sort_long_number_of_repetation ( arr, 0 , n);
    }

    buuble_sort_long_number_of_repetation ( arr, ++j , n);
}


bool isPowerOfTwo ( int n , int count = 0){
    cout << n << " ";
    if (n == 0 ){
            return false;
        }

    if (n == 1){
            return true;
        }

    if ((n&1) == 1){
            count++;
        }
    
    cout << count << endl;

    if (count < 1){
        return isPowerOfTwo( n>>1 , count);
    }
    return false;
}

bool isPowerOfFour ( int n , int count = 0){
    if (n == 0)
    {
        return false;
    }

    if (n == 1)
    {
        return true;
    }

    if ((n&1) == 0 && ( ((n >> 1)&1) == 1 ))
    {
        return false;
    }
    if ( (n&1) == 1)
    {
        count++;
    }
    

    if (count < 1)
    {
        return isPowerOfFour(n >> 2 , count);
    }

    return false;
    
}

// int monkey_problem( int n , int i = 0){
//     if (n == 0 || n == 1)
//     {
//         return 0;
//     }
//     int clock = (i +1)/n; 
//     int anti = (i -1 + n)/n; 
//     return (monkey_problem(n , clock) + monkey_problem(n, anti));    
// }

void Combine( int *arr , int s , int e){
    int m = s + (e-s)/2;

    int len1 = m -s + 1;
    int len2 = e-m;

    int *f = new int[len1];
    int *seno = new int[len2];

    int k = s;
    for (int i = 0; i < len1; i++)
    {
        f[i] = arr[k++];
    }
    cout << "This is f" << endl;
    print_arr( f , len1);
    k = m+1;
    for (int i = 0; i < len2; i++)
    {
        seno[i] = arr[k++];
    }
    cout << "This is seno" << endl;
    print_arr( seno, len2);

    int i = 0, j = 0;
    k = s;

    while (i < len1 && j < len2)
    {
        if (f[i] < seno[j])
        {
            arr[k++] = f[i++];
        }
        else
        {
            arr[k++] = seno[j++];
        }

        while (i < len1)
        {
            arr[k++] = f[i++];
        }

        while (j < len2)
        {
            arr[k++] = seno[j++];
        }
    }

    delete [] f;
    delete [] seno;
}

void Merge_sort( int *arr , int s , int e){
    if (s >= e)
    {
        return ;
    }

    int m = s + (e-s)/2;

    Merge_sort(arr , s , m);
    

    Merge_sort(arr , m +1  ,e);

    Combine( arr ,  s ,  e);
    
}

void quick_sort( int *arr , int s , int e){
    if (s >= e)
    {
        return ;
    }

    int c = 0 ;
    int py = s;
    for (int i = py +1 ; i <= e ; i++)
    {
        if (arr[py] > arr[i])
        {
            c++;
        }        
    }
    int pivot_index = s + c;
    

    swap( arr[pivot_index] , arr[py]);

    int i = s , j = e;
    while ( i < pivot_index && j > pivot_index)
    {
        while (arr[pivot_index] >= arr[i])
        {
            i++;
        }
        while (arr[pivot_index] < arr[j])
        {
            j--;
        }
        if (i < pivot_index && j > pivot_index)
        {
            swap( arr[i++] ,arr[j--]);
        }
    }
    
    quick_sort( arr, s ,pivot_index-1);

    quick_sort( arr , pivot_index + 1 , e);
    
}


void power_set(vector <int> num , vector < vector <int> >&ans , int index ,vector <int> output  ){
    if (index >= num.size())
    {
        ans.push_back(output);
        return ;
    }

    // exclude
    power_set( num , ans , index+1 , output);
    
    // include
    int leem = num[index];
    output.push_back(leem);
    power_set( num , ans , index+1 , output);
}

vector<vector <int> > subsets ( vector <int> nums){
    vector<vector <int> > ans ;
    vector <int> output;
    power_set( nums , ans ,0 , output);
    return ans;

}

// my method
void algo_of_key_pad(string end , vector <string> &ans , int i  , string out){
        if ( i >= end.size())
        {
            return ;
        }
        // exclude
        algo_of_key_pad( end , ans , i +1 , out);
        // include 
        char rn  ;
        rn = end[i];
        out.push_back(rn);
        ans.push_back(out);
    }
vector <string> key_pad( string start , string end){
        vector <string> ans;
        int i = 0 ;
        string out ;
        for (int j = 0; j < start.size(); j++)
        {
            out = start[j];
            algo_of_key_pad(end , ans , i ,out);        
        }
        return ans;
    }
    
void my_method_of_key_pad(){
    vector <string> number_leters ={"" , "" , "abc" , "def" ,"ghi" ,"jkl", "mnop" , "qrs" , "tuv" ,"wxyz"};
    int n   ,m;
    cin >> n>>m;
    vector <string> fi ;
    fi =  key_pad( number_leters[n ] , number_leters[m ]);
    for (int i = 0; i < fi.size(); i++)
    {
        cout << fi[i] << " ";
    }
}

// bhaiyas method
void solve ( vector <string> & ans , int id , string output , string digit , vector <string> listt){
    if ( id  >= digit.size())
    {
        ans.push_back(output);
        return; 
    }

    int num = digit[0] - '0';
    string value = listt[num];

    for (int i = 0; i < value.size(); i++)
    {
        output.push_back(value[i]);
        solve(ans , id+1 , output , digit ,listt);
        output.pop_back();
    }
        
}

vector <string> key_pad2 ( string digit){
    vector <string> number_leters ={"" , "" , "abc" , "def" ,"ghi" ,"jkl", "mnop" , "qrs" , "tuv" ,"wxyz"};
    vector <string> ans;
    if (digit.size()  == 0)
    {
        return ans;
    }
    
    string output  = "";
    int i =0;
    solve(ans , i , output , digit , number_leters);
}

void elimination_array( int* arr){
    if (sizeof(arr)/4 == 1 || sizeof(arr)/4 == 0)
    {
        return ;
    }

    for(int i = 0; i <sizeof(arr)/4 ;i+=2){
        arr[i] = '\0';
    }
    elimination_array(arr+1);
}

int main(){
    int what[5] = {0,1 ,2,3,4};
    int i  =5;
    what[1] = '\0';
    what[2] = '\0';
    // delete what[1];
    print_arr(what ,i);
    // cout << "How many do you want to display"<<endl;
    // cin >> n;
    // string namet = "This is a practice from love babbar channel";
    // string namet = "abbccbba";
    // int arrt[10] = {5,3,2,1,4 , 6, 8, 9, 7 , 10};
    // vector <int> arrt = {1,2,3};
    
}