#include <iostream>
using namespace std;


// this is a micro , which means creating a constant type of variable which replaces the name with its value before compliation , and also not takes any memory space.
#define pi 3.14

void print(int *a){
    // input the pointer
    // cout <<"The value at "<< a <<" is " << * a << endl;
    
    // this changes permanently because the location is unique
    // cout << ++(*a)<<endl;
    
    // this doesn't change because the value in it is just a digit and not a unique digits
    // cout << ++a << endl;
}

void sum( int *(arr) , int n)
{
    // In the above statement , int arr[] == int *arr 

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
}

void update(int& n)
{
    n++;
}

void update2( int n)
{
    n++;
}
int main()
{
    // here , * represents the location of the variable  ,  *a = the variable (in this case n) value itself , a = the location of the variable (in this case n)
    // int n = 65;
    // int *a = &n;

    // char b = n;
    // char *ad = &b;
    // location is based on the variable name , and not on its value.
    // here , ++(a) == the next element (jump of 4 for int ,  8 for double) , ++(*a) = the variable value gets the increament
    // cout << ++(a)<<endl;
    // cout << ++(*a)<<endl;

    // here , ar and &ar[0] refers to same address , and *(array_name) = refers to the first element of the array , *(ar + k) == ar[k] == k[ar] (accessing elements).
    int ar[10] = {1,2,3,4,5,6,7,8,9,10};
    // int *nw = &ar[0];
    // cout << nw << endl;
    // cout << *(ar + 1) << endl;
    // cout << 0[ar]<< endl;
    // cout << sizeof(ar) << endl;  // output is the size of the whole array
    // cout << sizeof(nw) << endl; // output is the size of the pointer

    // char para[6] = "abcde";
    // herecout function is different for char arrays
    // cout << para << endl; // print whole array
    // char *abs = &(para[0]); // print whole array but here it prints till the null character 
    // cout <<  abs<< endl;
    // char temp = '4';
    // char *pq  = &temp;  //print the character till it finds the null character
    // cout <<  pq<< endl;

    // In char array = the elements is the copy of the strings [the strings is from the temprary memory]

    // sum(ar + 9 , 1); // here we sending the array from 8th index
    

    // double pointers
    
    // int n = 65;
    // int *a = &n;
    // int **a1 =&a;

    // cout << n << endl;
    // cout << *a <<endl ;
    // cout << **a1 <<endl ;



    // reference variable  = same value have two or more different varible names.
    // use of this is =when we call a function, then it creates a copy of the input [local scope] , so it is useful to give as a reference variable to make permanent changes.
    // int i = 5;
    // int &j= i; // here j is the reference value of i
    // cout << j++ << endl;
    // cout << i << endl;
    // int n = 10;
    // cout << "before " << n << endl;
    // update(n);  // here it changes because of the reference variable.
    // update2(n); // here it does not changes because it copied the variable.
    // cout << "after " << n << endl;


    // static =  memory assigned by stack , dynamic = memory assigned by heap   [memory of heap > stack]


}