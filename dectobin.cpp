#include<iostream>
#include<math.h>
using namespace std;


// to print the given in the same order, we code ans = 10*ans + digit
// to print the given digits in the reverse order, ans = ans + (digit*pow(10,i))

int main()
{
    cout<<"Enter the dicimal\t";
    int n;cin>>n;
    int ans = 0;int i =0;
    while (n!=0)
    {
        // Here some problem is coming, the output is not what we expecting
        int bit = n&1;
        ans = ans*10 + bit;
        // ans = ans + bit*pow(10,i);
        n = n>>1;i++;
    }
    cout<<"The answer is\t"<<ans<<endl;
    
    // 1's compliment = take negatation of the all the bits
    // 2's compliment = take 1's compliment and then add 1 at the last bit

    cout<<"enter the binary number\t";
    int bs;cin>>bs;int ans1 = 0;int i1= 0;
    while (bs!=0)
    {
        // int bits = (bs&1); here we assuming that the input is binary, but the computer is taking as integer, so it converts into binary,
        // ex: 10 according to us it is binary, but for computer it is ten and then it converts to 1010
        int bits = bs %10;
        if (bits !=0)
        {
            ans1 = ans1 + (bits*pow(2,i1));
        }        
        bs = bs/10;i1++;        
    }
    cout<<"the decimal number is\t"<<ans1<<endl;
}