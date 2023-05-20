#include<iostream>
#include<math.h>
using namespace std;

int fibo()
{
    int n;cout<<"Enter number untill the digit you want to see\n";cin>>n;
    int a = 0;int b= 1;
    for (int i = 1; i <= n; i++)
    {
        int store = b;
        b = a + b;
        // cout<<a<<" ";
        a = store;
    }
    cout<<endl<<a<<endl;
}


int main(){
    // int n;
    // cin >> n;
    // // cout << "here cin is like input taking command\n" << "here the number which you entered" << n << endl;

    // if (n>0)
    // {
    //     cout << "yes it is positive\n" ; 
    // }
    
    // else{
    //     cout << "yes it is negative\n" ; 
    // }

    // int a ;
    // int b ;
    // cin >> a;
    // cin >> b;

    // int a,b;
    // cout << "enter the number a\n";
    // cin >> a;
    // cout << "enter the number b\n";
    // cin >> b;

    // if (a>b){
    //     cout << "a is greater than b" ;
    // }

    // else{
    //     cout << "b is greater than a" ;
    // }

    // int n;
    // cin >> n;
    // int i = 1;
    // while (i<=n)
    // {
    //     cout << i <<" ";
    //     i = i+1;
    // }
    
    //finding the sum of first n numbers

    // int a;
    // cout << "Enter the number till where you want to take sum \n";
    // cin >> a;
    // int sum = 0;
    // int b = 1;
    // while (b<=a)
    // {
    //     sum = sum + b;
    //     // cout<<"the sum of the numbers "<< sum<<"\n";
    //     b+=1;
    // }
    // if (b>a)
    // {
    //     cout<<"the sum of the numbers "<< sum<<"\n";
    // }

    // int a;
    // cin >> a;
    // int n = (a+1)*a/2;
    // cout << "the sum of the numbers till a is "<< n <<endl;

    //finding the prime number
    
    // int pr;
    // cout<< "Enter the number till where you want to find the prime numberes\n";
    // cin >> pr;
    // int start = 1;
    // while (start<=pr)
    // {
    //     if (start%2!=0)
    //     {
    //         if (start%3!=0)
    //         {
    //             if (start%5!=0)
    //             {
    //                 cout << start << " It is a prime number\n";
    //             }                
    //         }            
    //     }
    //     start += 1;
    // }
        
    // To find the input character in which case
    
    // char take;
    // cout<<"Enter the char\n";
    // cin>>take;
    // int type_casting = take;
    // int small = 97;
    // int big = 65;
    // int n = 47;
    // while (small<=122)
    // {
    //     if (small == type_casting)
    //     {
    //         cout<<"It belongs to lower case\n";
    //     }        
    //     small += 1;
    // }
    // while (big<=90)
    // {
    //     if (big == type_casting)
    //     {
    //         cout<<"It belongs to UPPER case\n";
    //     }
    //     big +=1;
    // }
    // while (n<=57)
    // {
    //     if (n==type_casting)
    //     {
    //         cout<<"It is a number between 0 and 9\n";
    //     }
    //     n +=1;
    // }
    
    // i -=1 can also be written as i-- (post decreament) and --i (pre decreament)
    // int a = 5;
    // int b = a++;
    // cout<<b<<endl;
    // cout<<a;
    // int c = ++a;
    // cout<<c<<endl;
    // cout<<a<<endl;

    // for loop
    // int n;cout<<"enter the number\n";cin>>n;
    // for (int i = 0; i <=n; i++)
    // {
    //     cout<<i<<" ";
    // }

    // int a = 0;
    // for(;;){
    //     if (a<=n)
    //     {
    //         cout<<a<<" ";
    //     }
    //     else{
    //         break;
    //     }
    //     a++;
    // }

    // cout<<"Here it is the for loop"<<endl;
    // for (int a= 0,b=11; a!=b;a++,b--)
    // {
    //     cout<<a<<" "<<b<<endl;
    // }

    // int c=2; int d = 11;
    // for (;;){
    //     if (c!=d){
    //         cout<<c<<" "<<d<<endl;
    //     }
    //     else{
    //         break;
    //     }
    //     c++,d--;

    // sum of n numbers using for loops
    // int n;cout<<"enter the number\n";cin>>n;    
    // for (int i =0,sum = 0;i<=n;i++){
    //     sum+=i;
    //     if (i==n){
    //         cout<<sum;
    //     }
    // }    
        
    // int n ;cout<<"Enter the number which you want to find it is prime or not\n";cin>>n;int a = 0;
    // for (int i = 2; i <(n); i++)    
    // {
    //     if (n%i==0)
    //     {
    //         // cout<<"It is not a prime number\n";
    //         a = 1;
    //         break;
    //     }     
    //     else{
    //         // nothing should be written here because we have to check all
    //     }   
    // }
    // if (a == 0){
    //     cout<<"It is a prime number\n";
    // }
    // else{
    //     cout<<"Not a prime number\n";
    // }
    
    // continue = the codes underneth of continue statement is unreachable
    // for (int i =0;i<=10;i++){
    //     cout<<"hi\n";
    //     // cout<<"go\n";
    //     continue;
    //     cout<<"oooooooooooo";
    // }
 
    //  the difference between product and sum of digits
    // int n;cout<<"Enter the number\n";cin>>n;int pro = 1 ,sum =0;
    // for (int remainder;;)
    // {
    //     remainder = n%10;        
    //     pro = pro*remainder,sum +=remainder;
    //     n = n/10;
    //     if (n/10 == 0)
    //     {
    //         pro = pro*n,sum +=n;
    //         break;
    //     }        
    // }
    // cout<<"The product of the digits are "<<pro<<endl<<"The addition of the digits are "<<sum<<"\nThe difference between the product and sum is "<<pro-sum;
    
    // cout<<"Enter the binary input\n";int n;cin>>n;
    // int ream = 0;
    
    
}