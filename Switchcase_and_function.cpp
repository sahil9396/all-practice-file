// switch_case = despite of writing many lines of if and else if, we use this method
// fuction = it is same as python but here instead of def we use int,bool,char according to type of output it is giving
// pass by value = same as global maxima and global minima in python

#include<iostream>
using namespace std;


int factorial(int num)
{
    // int num;cout<<"Enter the number to find the factorial of it\n"; cin>>num;
    switch (num)
    {
        case 0:
            return 1;
            break;
        
        default:
            int a = 1, b = 1;
            for(;b<=num;b++){
                a = a  * b;
            }
            // cout<<a<<endl;
            return a;
            break;
    }
}

int nCr()
{
    int a,b;cout<<"Enter the numbers with given space in between them\tThe first number that you will enter is n\tsecond number will be r\t n>=r\n";cout<<"n = ";cin>>a;cout<<"r = ";cin>>b;
    int n = factorial(a),dem = factorial(a-b) * factorial(b);
    cout<<"The nCr of n = "<<a<<" and r = "<<b<<" is ";
    return n /dem;
}

void Isprime(int nom)
{
    int a = 2,decision = 0;
    for (; a < nom; a++)
    {
        int div = nom % a;        
        if (div == 0)
        {
            decision = 1;
            cout<<"It is not a prime number\n";
            break;
        }
    }
    if (decision == 0)
    {
        cout<<"It is a prime number\n";
    }        
}

bool IsPrime(int n)
{
    for (int i = 2;i<n;i++)
    {
        if (n%i == 0)
        {
            return 0;
        }        
    }
    return 1;
}

int update(int n)
{
    n = n/2;
    return n;
}

void Ap()
{
    int n;cout<<"Enter the term number\tnth term\t";cin>>n;
    cout<<"The value of nth term = "<<3*n+ 7<<endl;
}

int count_no_of_bits()
{
    int a,b;cout<<"Enter the number to find out their total no.of bit [1]\n";cout<<"Enter 'a'\t";cin>>a;cout<<"Enter 'b'\t";cin>>b;
    int total_bits = 0, a1= a,b1 =b;
        
    for (; a != 0;a = a>>1)
    {
        int bits_of_a = (a&1);
        if (bits_of_a == 1)
        {
            total_bits++;
        }            
    }
    for (; b != 0; b = b>>1)
    {
        int bits_of_b = (b&1);
        if (bits_of_b == 1)
        {
            total_bits++;
        }            
    }
    
    // while (1)
    // {
    //     int bita = (a&1),bitb = (b&1);
    //     if (bita == 1)
    //     {
    //         total_bits++;
    //         a = a>>1;
    //     }
    //     if (bitb == 1)
    //     {
    //         total_bits++;
    //         b = b>>1;
    //     }
    //     if (a==0 & b == 0)
    //     {
    //         cout<<"No.of ones present in "<<a<<" and "<<b<<" is "<<total_bits<<endl;
    //         break;
    //     }                
    // }    
    cout<<"No.of ones present in "<<a1<<" and "<<b1<<" is "<<total_bits<<endl;        
}

int fibonacci_series()
{
    int a =0,b= 1;
    int n;cout<<"Which term number do you want to see\t";cin>>n;
    for (int i = 0; i < n; i++)
    {
        a =b;
        b = a+b;
    }
    cout<<"The nth term of asked series is "<<b<<endl;
}


int main()
{
    
    // switch_case = here sahil can only be int or char
    // char sahil = 'a';
    // switch (sahil){
        // case 1:cout<<"this is not what you are looking for\n";
        // break;
        // case 2:cout<<"this is not\n";
        // break;
        // case 4:cout<<"this is what you are looking for\n";
        // break;
        // default:cout<<"see this is a default case\n";
        // break;
        // }

    // while (1)
    // {
    //     int nom;cout<<"Enter the number to find if it is prime or not\n";cin>>nom;
    //     Isprime(nom);        
    //     char call;cout<<"\nDo you want to end\n";cin>>call;
    //     if (call == 'y')
    //     {
    //         break;
    //     }        
    // }

    // function call stack

    // 0 1 1 2 3 5 8 13 
    // fibonacci_series();
    
    // int rows;cout<<"How many rows do you want to print\t";cin>>rows;int col = 2*rows;int i = 1;
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= col; j++)
    //     {
    //         int g = j - rows;
    //         if (j == rows - i +1)
    //         {
    //             cout<<"*";
    //         }
    //         else if (g == i)
    //         {
    //             cout<<"*";
    //         }            
    //         else
    //         {
    //             cout<<" ";
    //         }
    //     }        
    //     cout<<endl;
    // }

    
}