#include<iostream>
using namespace std;
#include <vector>
// keeping the lenght of array as variable, keep it as larger as possible like arr[1000000000], it is good , but keeping is keeping variable is bad.

int To_take_input_for_arr(int pra[], int sized)
{
    int Ith_element;
    for (int i = 0; i < sized; i++)
    {
        cout<<"enter the element with index "<<i<<"\t";
        cin>>Ith_element;
        pra[i] = Ith_element;
    }
}

// int repeat_the_function(funt())
// {
//     while (1)
//     {
//         funt;
//         int option;cout<<"1 for end\tany for repeat\n";
//         if (option == 1)
//         {
//             cout<<"Bye\n";
//             break;
//         }    
//     }   
// }

void printarr(int arr[] , int sixe)
{
    for (int i =0; i < sixe ; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void pri_vector(vector <int> vax)
{
    for (int i : vax)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

// int to_take_input_and_add_in_llist(int arr[])
// {
//     cout<<"How many elements do you want to enter\n";int elemnts;
//     int sixe;cin>>sixe;
//     for (int i = 0; i < elemnts; i++)
//     {
//         cout<<"Enter the element whose index is "<<i<<endl;
//         cin>>elemnts;
//         arr[i] == elemnts;
//     }    
// }

int Get_min(int arr[],int sized,int start)
{
    int mini =__INT_MAX__;
    for (int itis = start; itis < sized; itis++)
    {
        if ( arr[itis] < mini)
        {
            mini = arr[itis];
        }        
    }
    // cout<<"The max element"<<min<<endl;
    return mini;
}

int Get_max(int arr[],int sized)
{
    int max = -(__INT_MAX__)-1;
    for (int i = 0; i < sized; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }        
    }  
    cout<<"The min element"<<max<<endl;  
}

int find_element_in_the_arr(int arr[], int sized)
{
    To_take_input_for_arr(arr, sized);
    int decision = 0;
    int find_the_element;cout<<"Enter the element that you want to find in the array\n";cin >> find_the_element;
    for (int i = 0;i < sized;i++)
    {
        if (find_the_element == arr[i])
        {
            cout<<"Yes it is present in array, with the index "<<i<<endl;
            decision == 1;
            break;
        }                
    }
    if (decision == 0)
    {
        cout<<"Sorry, It is not present in the array\n";
    }
}

int updat(int arr[],int sized)
{
    int elem;int inde;
    cout<<"Enter the index\n";
    cin >> inde;
    cout<<"Enter the element\n";
    cin >> elem;    
    arr[inde - 1] = elem;
}

void one_and_zero_swap( vector <int> ram)
{
    int s = 0 , e = ram.size() - 1;
    while (s <e)
    {
        if (ram[s] == 1 && ram[e] == 0)
        {
            swap( ram[e] ,  ram[s]);
        }

        if ( ram[s] == 0)
        {
            s++;
        }
        if ( ram[e] == 1)
        {
            e--;
        }
    }

    pri_vector(ram);
    
}

int add_elements_in_array_for_how_many_elements_that_you_will_enter(int arr[],int sized)
{
    To_take_input_for_arr(arr,sized);
    int sumt = 0;
    for (int i = 0; i < sized; i++)
    {
        sumt += arr[i];
    }
    cout<<sumt<<endl;    
}

int revers_the_elements_in_the_array(int arr[], int sized)
{
    if ((sized&1)==1)
    {
        for (int i = 0; i < (sized - 1)/2; i++)
        {
            int store = arr[i];
            arr[i] = arr[sized - i- 1 ];
            arr[sized - 1 - i] = store;
        }    
    }
    else if ((sized&1) == 0)
    {
       for (int i = 0; i < (sized)/2; i++)
        {
            int store = arr[i];
            arr[i] = arr[sized - i- 1 ];
            arr[sized - 1 - i] = store;
        }           
    }
    printarr(arr,sized);
}

int swap_the_alternate_elements(int arr[], int size)
{
    for (int i = 0; i < size; i+=2)
    {
        if (i+1 < size)
        {
            int sace = arr[i];
            arr[i]  = arr[i+1];
            arr[i+1] = sace;
        }        
    }
    printarr(arr,size);
}

int unique_element(int arr[] , int size)
{
    int ocu = 0;
    for (int i = 0; i < size; i++)
    {        
        ocu == ocu ^ arr[i];
    }
    cout<<"The unique element in the array is"<<endl<<ocu<<endl;
}

int find_duplicate(int rap[] , int n)
{
    int a = 0;
    // my method
    // for (int i = 0; i < sizw; i++)
    // {
    //     for (int j = 0; i < sizw; j++)
    //     {
    //         if ( ((rap[j])&(rap[i]) == rap[j]) & ((rap[i] != 1) or (rap[j] != 1)) & (j != i) )
    //         {
    //             cout<<"The number that is repeated is "<<rap[j]<<endl;
    //             a++;
    //             break;
    //         }
    //     }     
    //     if (a == 1)
    //     {
    //         break;
    //     }           
    // } 
    for (int i = 0; i < n; i++)
    {
        a == a ^ rap[i];
    }
    for (int k = 1; k < n; k++)
    {
        a == a ^ k;
    }    
    cout<<a<<endl;           
}

int intersection_with_best_approach(int arr[], int siz , int arr1[], int siz1)
{
    int i=0,j=0;
    while (i<siz && j < siz1)
    {
        if (arr[i] < arr1[j])
        {
            i++;
        }
        else if (arr[i] > arr1[j])
        {
            j++;
        }
        else
        {
            cout<<arr[i]<<" ";
            i++,j++;
        }                
    }
    
}

int intersection_worst_approach(int arr[], int siz , int arr1[], int siz1)
{
    int wallhall = 0;
    for (int i = 0; i < siz; i++)
    {
        for (int j = 0; j < siz1; j++)
        {
            if (arr1[j] == arr[i]) //don't use xor function
            {
                cout<<arr1[j]<<" ";
                arr1[j] == __INT_MAX__;
                wallhall++;
                break;
            }
            else if ((arr[i] < arr1[j]))
            {
                break;
            }
            
        }
    }
    if (wallhall == 0)
    {
        cout<<-1<<endl;
    }
      
}

void sortingthe_arr(int arr[], int size)
{
    // int arr23[6] = {1,2,2,1,1,3};
    // int arr23[7] = {1,2,2,1,1,7,3};
    // for (int i = 0; i < size; i++)
    {
        int i = 0;
        int j = size - 1;
        while (j > i)
        {
            if (arr[i] > arr[j])
            {
                swap( arr[i] , arr[j]);
            }  
            i++;
            j--;          
        }        
    }
    printarr(arr,size);
}

bool leetcode_problem_same_as_above_one_unique(int arr[] , int size)
{
    
}

int binarseatch_practice( int arr[], int size, int number)
{
    // only applicable for sorted arrays [non - decreasing array]
    int s = 0 , e = size -1,mid = s + (e -s)/2;
    while (s <= e)
    {
        if (number == arr[mid])
        {
            return mid;
        }
        else if (number > arr[mid])
        {
            s = mid +1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e -s)/2;
    }
    return 0;
}

int firstindex(int arr[],int size,int k) {
	int s= 0,e = size-1,m = s + (e-s)/2,some_number;
	while(s<=e)
	{
	    if(arr[m] == k)
	    {
	        e = m -1;
	        some_number = m;
	    }
	    else if(arr[m] < k)
	    {
	        s =m+1;
	    }
	    else
	    {
	        e = m-1;
	    }
	    m = s + (e-s)/2;
	}
	return some_number;
}

int lastindex(int arr[],int size,int k){
	int s= 0,e = size -1,m = s + (e-s)/2,some_number;
	while(s<=e)
	{
	    if(arr[m] == k)
	    {
	        s = m +1;
	        some_number = m;
	    }
	    else if(arr[m] < k)
	    {
	        s =m+1;
	    }
	    else
	    {
	        e = m-1;
	    }
	    m = s + (e-s)/2;
	}
	return some_number;
}

int find_the_peak_the_element(int arr[],int siz)
{
    int s = 0,e = siz - 1,m = s + (e-s)/2;
    while(s <e)
    {
        if (arr[m] < arr[m+1])
        {
            s = m+1;
        }
        else
        {
            e =m;
        }
        m = s + (e-s)/2;
        return s;
    }
}

int get_pivot(int arr[],int n){
    int s =0,e = n-1,m =s+(e-s)/2;
    while(s<e){
        if (arr[m] > arr[0]){
            s = m+1;
        }
        else{
            e = m;
        }
        m =s+(e-s)/2;
    }
    return s;
}

// int bin(int arr[] , int star , int end , int k){
//     int s = star;e= end,m1 = s+ (e-s)/2;
//     while(s<=e){
//         if (arr[m1] == k){
//             return m1;
//         }
//         else if(arr[m1] > k){
//             e = m-1;
//         }
//         else{
//             s = m1+1;
//         }
//         m1 = s+ (e-s)/2;
//     }
//     return -1;
// }

// int find(int arr[] , int n,int k){
//     int pivot = getpivot(arr,n);
//     if (arr[pivot] <= k && k <= arr[n-1]){
//         cout<<bin(arr,pivot,n-1,k)<<endl;
//     }
//     else{
//         cout<<bin(arr,0,pivot-1,k)<<endl;   
//     }
// }

bool isPossible(int arr[],int m, int size,int no_of_students){

    int pagesum =0,student_count =1;
    for (int i = 0; i < size; i++)
    {
        if (pagesum + arr[i] <= m)
            {
                pagesum+=arr[i];
            }
        else
            {
                // pagesum = arr[i];
                student_count++;
                if (student_count > no_of_students || arr[i] > m )
                {
                    return false;
                }
                pagesum = arr[i];
            }            
    }
    return true;
}

int allocation_problem(int arr[],int no_of_books, int no_of_students){
    int s =0,e = 0;
    for (int i = 0; i < no_of_books; i++)
    {
        e += arr[i];
    }
    int mid = s+ (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if (isPossible(arr,mid,no_of_books,no_of_students))
        {
            ans = mid;
            e= mid-1;
            
        }
        else{
            s = mid+1;
        }
        mid = s+ (e-s)/2;
    }
    return ans;
}

int isPo(int arr[] , int size , int no_of_books , int students , int mid){
    int page_sum = 0, student_coutn = 1;
    for (int i = 0; i < no_of_books; i++)
        {
            if ( arr[i] + page_sum < mid)
            {
                page_sum++;
            }
            else
            {
                page_sum = arr[i];
                student_coutn++;
                if (student_coutn > students || arr[i] > mid)
                {
                    break;
                }                
            }            
        }
}

int Practice_of_book_allocation(int arr[], int no_of_books, int students){
    int s =0,e = 0;
    for (int i = 0; i < no_of_books; i++)
    {
        e += arr[i];
    }
    int mid = s+ (e-s)/2;
    int ans = -1;    
    while (s<=e)
    {
        
        
        

        // if (/* condition */)
        // {
        //     /* code */
        // }
        
        mid = s+ (e-s)/2;        
    }
    
}

int sor_sele(int arr[] , int n){
    for (int i = 0 ; i < n-1;i++){
        int min_index = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[min_index] , arr[i]);
    }
}

int bublle_sort(int arr[] , int n){
    // int rap3[6] = {7,8,9,1,2,3};
    // for (int i = 0; i < n -1; i++)
    for (int i = 1; i < n ; i++)
    {
    //     int start = i;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j+1] , arr[j]);
                // j++;
            }
        }
    }
}

int insertion_sort(int arr[] , int n){
    // reason of this type of sorting is : Another types of sorting are required to compaer in whole array, but in this, it is done if the comparing term is greather than the number which are comparing.
    // stable alogitham
    // time comp = O of one O(1)
    // best case : O(n) and worst case : O(n^2)
    // int rap3[6] = {7,8,9,1,2,3};
    for (int i = 1; i < n; i++)
    {
        int the_term = arr[i];
        int j = i - 1;
        for (; j  >= 0; j--)
        {
            if ((arr[j] > the_term))
                {
                    arr[j+1] = arr[j];
                }
            else
                {
                    break;
                }        
        }
        arr [j +1 ]  = the_term;
    }
    // printarr(arr,n);
}

int old_main()
{
    // arrays=  list in which elements are of same type
    // int satrt[2] = {0,1};
    // homework = how to initialize entire array with one element
    // cout<<endl<<satrt[1]<<endl;
    int arr[7] = {1,2,3,4,5,6,7};
    int arr1[6] = {1,2,3,4,5,6};
    // printarr(arr,5);
    // int size_of_arr = sizeof(arr)/sizeof(int);
    // cout<<size_of_arr;
    int pra[100] = {};
    // To_take_input_for_arr(pra,10);
    // cout<<"Enter the how many elements do you want to add but it should be less than 100\n";int sized;cin >> sized;
    // find_element_in_the_arr(pra,sized);
    // to_take_input_and_add_in_llist(pra);
    // cout<<pra[10];
    // Get_max(pra,5);
    // Get_min(pra,5);
    // updat(pra , 10);
    // revers_the_elements_in_the_array(arr,7);
    // int size;cout<<"Enter the size\n";cin>>size;
    // int New_arr[100] = {};
    // for (int i = 0; i < size; i++)
    //     {
    //         New_arr[i] = arr[size - i -1];
    //     }
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<New_arr[i]<<" ";
    // }
    // to swap the diagonal elements
    // printarr(arr,6);
    // cout<<endl;
    // int Ne_ser[100] = {};
    // for (int i = 0; i < 6; i++)
    // {
    //     int decc = (i&1);
    //     if (decc == 1)
    //     {
    //         Ne_ser[  i  ] = arr[i - 1];
    //     }
    //     else if (decc == 0)
    //     {
    //         Ne_ser[  i  ] = arr[ i + 1];
    //     }                
    // }
    // swap_the_alternate_elements(arrl,6);
    // int rap[9] = {0,1,2,3,4,5,6,7,8};
    // int rap1[3] = {1,7,8};
    // int arr23[6] = {1,2,2,1,1,3};
    // int rap3[6] = {7,8,9,1,2,3};
    // int the_miniaised = rap3[2];
    // for (int i = 0; i < 6; i++)
    // {
    //     if (rap3[i] < the_miniaised)
    //     {
    //         the_miniaised = rap3[i];
    //     }
    // }
    // cout<<the_miniaised<<endl;
    // find_duplicate(rap,9);
    // intersection_with_best_approach(rap,9,rap1,3);
    // sortingthe_arr(arr23,6);    
    // cout<<endl<<firstandlastelementofthesortedarray(rap,9,8);
    // cout<<endl<<"the operation is ended\n";
    // cout<<get_pivot(rap3,6)<<endl;
    // cout<<binary_search_from_sorted_array(rap3,6)<<endl;
    // cout<<find(rap3,6,2)<<endl;
    // int arrr[4] = {10,20,30,40};
    // cout<<allocation_problem(arrr,4,2)<<endl;
    // sor_sele(rap3,6);
    // printarr(rap3,6);


    int rap3[6] = {7,8,9,1,2,3};
    // bublle_sort(rap3,6);
    // printarr(rap3,6);
    // insertion_sort(rap3,6);


    // vector<int> a;  // just done created a array/vector
    // // cout<<a.capacity();
    // a.push_back(1);
    // a.push_back(2);
    // a.push_back(3);
    // a.push_back(4);
    // // cout<<a.capacity();
    // cout<<endl;
    // cout<<a.at(0); // it shows the element at the nth index

    // cout<<a.front()<<endl; // shows the first element
    // cout<<a.back()<<endl; // shows the last element
    
    // for (int i : a)
    // {
    //     cout<<i<<" ";
    // }
    
    // a.pop_back();
    // cout<<"\nAfter poping out\n";

    // for ( int i : a)
    // {
    //     cout<<i<<" ";
    // }
    
    // a.clear();  //clear entire thing
    // cout<<a.capacity()<<endl;  // after clearing the items the capacity is same as previous just the elements are removed
    // cout<<a.size()<<endl; // the current space taken by the elements are shown by size

    // vector <int> a (4,1); // format of (a,b) = a  is size ,b = element to give in all space
    // vector <int> las(a); // las is the copy of a with format of name_of_vector(a) , where a = the vector to copy

    // deque <int> abs;
    // abs.push_back(1);
    // abs.push_back(2);
    // abs.push_back(3);  // adds the element to the last as added to the deque
    // abs.push_front(4);  //send the element to the '0' the index, means at the first

    // abs.pop_front(); // removes the first element
    
    // for ( int i : abs)
    // {
    //     cout<<i<<"\n";
    // }

    // cout<<abs.back(); // same as vector
    // abs.clear();  // same


    // abs.erase(abs.begin() , abs.begin() +1 );

    // deque = It is a complex thing, but have same characteristic of vector (dynamic)
    // in addition to that = we can add and remove elements from the only last or front as many

    // stack <string> abs;// the last thing we add, it will be the first thing to get removed

    // abs.push("1");
    // abs.push("2");
    // abs.push("sahil");

    // abs.pop();
    // cout << abs.top();


    // queue <string> s;
    // s.push("sahil");
    // s.push("sa");
    // s.push("ram");
    // cout<<s.front();
    // s.pop();


    // maximum heap = the element you going to show is the greatest of all elements present in the queue
    // priority_queue <int> mazi;

    // // minimum heap = the element you going to show is the smallest of all elements present in the queue
    // priority_queue <int , vector<int> , greater<int> > im;

    // mazi.push(2);
    // mazi.push(1);
    // mazi.push(3);
    // mazi.push(0);

    // im.push(1);
    // im.push(3);
    // im.push(2);
    // im.push(0);

    // cout<<mazi.size();
    // int n =mazi.size();
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<mazi.top()<<endl;
    //     mazi.pop();
    // }
    
    // int na = im.size();
    // for (int i = 0; i < na; i++)
    // {
    //     cout<<im.top()<<endl;
    //     im.pop();
    // }
    // cout<<im.empty();


    // set< int> s;
    // // it stores the unique elements despite of many types of repreative elements entered and sort them automatically

    // s.insert(1);
    // s.insert(5);
    // s.insert(3);
    // s.insert(1);
    // int am = s.size();
    // for (int i : s)
    // {
    //     cout<<i<<endl;
    // }
    // // cout<<s.count(1);  // it tells, if the given element is present or not
    // set <int> :: iterator itna = s.find(5);
    // cout << *itna ;


}

int THird_highiest(int arr[] , int n){

    insertion_sort(arr,n);
    if (n < 3)
    {
        cout<<arr[n-1];
    }
    else
    {
        cout<<arr[n-3];
    }
    
}

float giving_the_greatest_avg_from_the_array(int array[], int n, int k)
{
    float minima = -100000;
    for (int i = 0; i < n/2; i++)
    {
        vector <int> new_var;
        for (int l = i; l - i < k; l++)
        {
            new_var.push_back(array[l]);
        }
        
        float avg = 0;

        for (int i : new_var)
        {
            avg += i;
        }
        avg = avg/4;
        if (avg > minima)
        {
            minima = avg;
        }
    }

    return minima;
    
}

int reverse_the_elements(int arr[] , int n)
{
    for (int i = 0; i < n/2; i++)
    {
        swap(arr[i],arr[n-i -1]);
    }
    for (int j = 0; j < n; j++)
    {
        cout<<arr[j]<<endl;
    }
}

vector <int> reverse_through_vector( vector <int> v , int the_index)
{
    int s=the_index+1,e = v.size()-1;
    while (s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    
    return v;
}

vector <int> sorted_vector (vector <int> the_one)
{
    // 0 7 1 4 56 16 10
    for (int i = 1; i < the_one.size(); i++)
    {
        int the_min = the_one[i];
        int j = i-1;
        for (; j >=0; j--)
        {
            if (the_one[j] > the_min)
            {
                the_one[j+1]  = the_one[j];
            }
            else
            {
                break;
            }
        }
        the_one[j+1]  = the_min;
    }

    return the_one;
}

vector <int> combine(vector <int> fi , vector <int> se)
{
    vector <int> thi;
    for (int i : fi)
    {
        thi.push_back(i);
    }
    for (int j : se)
    {
        thi.push_back(j);
    }

    // pri_vector(thi);

    return sorted_vector(thi);;
}

void merged(vector <int> ar1 , vector <int> ar2)
{
    int i =0, j = 0, maz_len = max(ar1.size(),ar2.size());
    vector <int> thiee;
    while (i < ar1.size() && j < ar2.size())
    {
            // 0 1 4 7 10 16 56 
            // 2 3 4
            int f_ele =  ar1.at(i);
            int s_ele = ar2.at(j);
            cout<<f_ele << " " << s_ele << endl;
            if ( f_ele < s_ele)
            {
                thiee.push_back(f_ele);
                i++;
            }

            else if (f_ele > s_ele)
            {
                thiee.push_back(s_ele);
                j++;
            }

            else
            {
                thiee.push_back(f_ele);
                i++;
                j++;
            }
    }


    for (int ai = i; ai < ar1.size(); ai++)
    {
        thiee.push_back(ar1.at(ai));
    }
    for (int i = j; i < ar2.size(); i++)
    {
        thiee.push_back(ar2.at(i));
    }
    
    
    
    pri_vector(thiee);
    
}

void move_zeroes(int arr[] , int n)
{
    // for (int i = 0; i < n-1; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {        
    //         if (arr[i] == 0 && arr[j] != 0)
    //         {
    //             swap(arr[i], arr[j]);
    //         }
    //     }
    // }

    // or the below one is sir's method

    int non = 0;
    for (int k = 1; k < n; k++)
    {
        if (arr[non] == 0 && arr[k] !=0)
        {
            swap(arr[non],arr[k]);
            non++;        
        }
    }
    

    printarr(arr,n);
    
}

int pairing( int boys [ ] , int girls[] , int N)
{
    int pair;
    vector <int> sumoffirst;
    for (int i = 0; i < N; i++)
    {
        sumoffirst.push_back(boys[0]*girls[i]);
    }

    for (int i = 1; i < N-1; i++)
    {
        int decision = 0;
        for (int j = 0; j < N; j++)
        {
            int temp = boys[i] * girls[j];
            for (int k : sumoffirst)
            {
                if (k == temp)
                {
                    // i++;
                    decision = 1;
                    pair = k;
                    break;
                }
            }
        }
        if (decision == 0)
        {
            return -1;
        }
    }

    return pair;
}

int matching( int boys [ ] , int girls[] , int N){
    vector <int> pari;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int temp = boys [ i] * girls[j];
            pari.push_back(temp);
        }
    }
}

vector <int> my_method_rotated(vector <int> a1 , int k)
{
    int n = a1.size();
    cout<<"Enter how many times do you want to rotate the elements\n";
    cin>>k;
    vector <int> temp(n);
    for (size_t i = 0; i < n; i++)
    {
        if (i+k < n)
        {
            temp[i+k] = a1[i];
        }
        else
        {
            temp[i+k - n] = a1[i];
        }
    }

    return temp;
    
}

vector <int> sirs_method_rotated(vector <int> a1 , int k)
{
    int n = a1.size();
    // cout<<"Enter how many times do you want to rotate the elements\n";
    // cin>>k;
    vector <int> temp(n);
    for (size_t i = 0; i < n; i++)
    {
        temp[(i+k)%n] = a1[i];
    }

    return temp;
}

bool check_for_sorted_array(vector <int> a2)
{
    int n2 = a2.size();
    for (int i = 0; i < n2-1; i++)
    {
        if (a2[i] > a2[i+1])
        {
            return false;
        }
    }
    return true;
}

bool check_for_rotated_array(vector <int> a2)
{
    int n1 = a2.size();
    for (int i = 0; i < n1; i++)
    {
        a2 = sirs_method_rotated(a2 , i);
        if (check_for_sorted_array(a2))
        {
            return true;
        }
    }
    return false;
    
}

bool sorted_and_rotated( vector <int> any)
{
    if (check_for_sorted_array(any))
    {
        cout<<"It is sorted vector\n";
    }
    else
    {
        cout<<"It is not sorted vector\n";
    }
    
}

bool shortMethod( vector <int> some){
    int count , n = some.size();
    for (int i = 1; i < n; i++)
    {
        if (some[i-1] > some[i])
        {
            count++;
        }
    }
    if (some[0] < some[n-1])
    {
        count++;
    }
    
    return count <= 1 ;
    
}

int length_of_string( char string[] )
{
    int count = 0;
    for (int i = 0; string[i] != 0; i++)
    {
        count++;
    }

    // my method
    // for (int i = 0; i < n; i++)
    // {
    //     if (string[i] != 0 )
    //     {
    //         count++;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    return count;
    
}

void reverse_a_string(char string[])
{
    int s = 0 , e = length_of_string(string)-1;
    while (s <= e)
    {
        swap(string[s] , string[e]);
        s++,e--;
    }
    
}


char loweer_the_character ( char any)
{
    if (any >= 'a' && any<= 'z')
    {
        return any;
    }
    else
    {
        int change = any - 'A' + 'a';
        return change;
    }
    
}

void stringpalindrome( char string[])
{
    // here if is the character upper or lower case, then they are different
    int s = 0,c =0 , e = length_of_string(string) -1;
    while (s<=e)
    {
        if (loweer_the_character(string[s]) != loweer_the_character(string[e]))
        {
            c++;
            break;
        }
        // else
    }
    if (c == 0)
    {
        cout<<"It is a palindrome\n";
    }
    else
    {
        cout<<"It is not";
    }
}

string reversing(string any)
{
    int s = 0 , e = any.size()-1;
    while (s<=e)
    {
        swap(any[s++] , any[e--]);
    }
    return any;
    
}

string only_words_reversing( string what)
{
    string s = "",v = "";
    int n = what.size();
    for (int i = 0; i <= n; i++)
    {
        if (what[i] == ' ' or i == n)
        {
            string new_str = reversing(s);
            for (int j = 0; j < new_str.size(); j++)
            {
                v.push_back(new_str[j]);                
            }
            if (i != n )
            {
                v.push_back(' ');
            }         
            s.clear();
        }
        else
        {
            s.push_back(what[i]);
        }
    }

    return v;
}

void maximum_element(string s)
{
    int alphabets[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        int index;
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            index = s[i] - 'a';
        }
        else
        {
            index = s[i] - 'A';
        }
        alphabets[index]++;
    }
    
    int the_index_of_maximum, base= -1;
    char letter;
    for (int j = 0; j < 26; j++)
    {
        if (alphabets[j] > base)
        {
            base = alphabets[j];
            letter = j+'a';
        }
    }
    cout<<"The letter : " <<letter << " ,which occured : " << base<<" times"<<endl;
    
}

string replace_space( string s)
{
    string withoutspace = "";
    for (int i = 0; i < s.size(); i++)
    {
        char element = s[i];
        if (element !=  ' ')
        {
            withoutspace.push_back(element);
        }
        else
        {
            withoutspace.push_back('@');
            withoutspace.push_back('4');
            withoutspace.push_back('0');
        }
    }
    
    return withoutspace;
}

string remove_particular_pattern( string s)
{
    int n = s.size();
    string temp = "";
    for (int i = 0; i < n-2; i++)
    {
        temp.push_back(s[i]);
        temp.push_back(s[i+1]);
        temp.push_back(s[i+2]);

        if (temp == "abc")
        {
            s[i] = s[i+1]= s[i+2] = '\0';
        }
    }

    remove_particular_pattern(s);
    
}

bool permutation_in_string(string a , string b){
    int length = min(a.size() , b.size()), loop_lenghth = max(a.size() , b.size());
    string smallone , bigone;
    if (length == a.length())
    {
        smallone = a;
        bigone = b;
    }
    else
    {
        smallone = b;        
        bigone = a;
    }
    
    
    string temp;
    for (int i =0 ; i < loop_lenghth  -1; i++)
    {
        temp.push_back(bigone[i]);
        temp.push_back(bigone[i+1]);
        // cout<<temp<<endl;
        if (temp == smallone | temp == reversing(smallone))
        {
            return true;
        }
        temp.clear();
    }
    return false;
}

void remove_adjustend_hw( string s){
    int count[26] = {0};
    char element;
    for (int i = 0; i < s.length(); i++)
    {
        int index = s[i] - 'a';
        count[index]++;
    }

    for (int j = 0; j < 26; j++)
    {
        if (count[j] > 1)
        {
            element = j;
            // s.replace(element,'\0');
        }
    }
    
}

int string_compression( int initial[] , int size){
    int count[26] = {0};
    for (int i = 0; i < size; i++)
    {
        int index = (char) initial[i] - 'a';
        count[index]++;
    }

    
}

void printtwod( int any[][4] , int rows , int col)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << any[i][j] << " ";
        }
        cout << endl;
    }
    
}

void my_method_wave_Print( int any[][3] , int rows , int col)
{
    int i = 0, j = 0 ;
    while (j < col)
    {
        if (i == rows )
        {
            for ( i-- ; i >= 0 ; i--)
            {
                cout << any[i][j] << endl;
            }
        }
        else if ((i == 0 ) | (i == -1))
        {
            for ( i = 0 ; i < rows ; i++)
            {
                cout << any[i][j] << endl;
            }
        }
        j++;
    }
    
}

void transposefunction( int any[][3] , int rows , int col){
    for (int j = 0; j < col; j++)
    {
        if (j&1)
        {
            for (int i = rows -1 ; i >= 0 ; i--)
            {
                cout << any[i][j] << " ";
            }
        }
        else{
            for (int i = 0; i < rows; i++)
            {
                cout << any[i][j] << " ";
            }
        }
        cout << endl;
    }
    
    
}

vector <int> spiralprint( int matrix[][3] ,int rows , int col){

    // complixicity = totoal
    vector <int> ans;
    int startingCol = 0 , startingRow = 0 , endingRow = rows -1  , endingCol = col -1;

    int count = 0 , total = rows * col;
    while (total > count)
    {
    
        // printing first row
        for (int i = startingCol; total > count && i <= endingCol; i++)
        {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;

        // print lastcol
        for (int i = startingRow;total > count && i <= endingRow; i++)
        {
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;

        // print lastrow
        for (int i = endingCol;total > count && i >= startingCol; i--)
        {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;

        // print firstcol
        for (int i = endingRow;total > count && i >= startingRow; i--)
        {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingRow++;
        
        return ans;
    }
    
}

void rotate_ninty_degree(int matrix[][3] ,int rows , int col){
    // vector <int> ans;
    // for (int j = 0; j < col; j++)
    // {
    //     for (int i = rows - 1; i >= 0; i--)
    //     {
    //         ans.push_back( matrix[i][j]);
    //     }
    // }
    // for (int i = 0; i < 9; i++)
    // {
    //     cout << ans[i];
    //     if ((i+1)%3 ==0 )
    //     {
            // cout<<endl;
    //     }
    // }

    for (int j = 0; j < col; j++)
    {
        for (int i = rows - 1; i >= 0; i--)
        {
            cout << matrix[i][j] << " ";
        }
        cout<<endl;
    }
    
}

int binary_operation_twod(int ma[][3] ,int rows , int col , int target){
    int s = 0 , e = rows*col-1 , m = s + (e-s)/2;
    while (s<=e)
    {
        if (ma[s/col][s%col] == target)
        {
            return 1;
        }
        else if (ma[s/col][s%col] >= target)
        {
            e = m-1;
        }
        else
        {
            s = m+1;
        }
        m = s + (e-s)/2;
    }
    return 0;    
}

int bisecond(int ma[][3] , int rows , int col , int target){
    int rt;
    for (int i = 0; i < rows; i++)
    {
        if (ma[i][0] < target && target < ma[i][col-1])
        {
            rt = i;
        }
    }

    
}

int main(){
    
    vector <int> ram;
    // ram = {2 , 3 , -3 , 3 , -2};
    
    // ram = {1,0,0,1,0,1,0,1,1,0,1,0};
    // pri_vector(ram);
    // ram.push_back(0);
    // ram.push_back(1);
    // ram.push_back(4);
    // ram.push_back(7);
    // ram.push_back(10);
    // ram.push_back(16);
    // ram.push_back(56);
    // ram.push_back(58);
    // vector <int> second;
    // second.push_back(2);
    // second.push_back(3);
    // second.push_back(4);
    // int ram1[7] = {20,100,10,1,5,4};
    // int new_lasi[2] = {3,1};
    // int ar[7] = {1,2,2,4,5,6,7};
    int n = 5;
    int *p = &n;

    int *p1;
    // p1 = &n;
    
    cout << p1 <<endl;
    cout << *p <<endl;
    // cout << ++(*p) == 6 <<endl;


    // int zeros[10] = {0,2,0,1,0,0,3,0,0,10};  
    // int ar[4][4] = {1,4,7,11,2,5,8,12,3,6,9,16,10,13,14,17};
    // printtwod(ar , 4,4);
    // cout << binary_operation_twod(ar , 3,3 , 01);
    cout << "\ndone";
    
}