#include<iostream>
using namespace std;

void pyramid_with_star( int  n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
            if (j < n)
            {
                if (j < n-1-i) cout << " ";
                else cout << "*";
            }
            else
            {
                if (2*n-1 - j < i)  cout << "*";
            }
        }
        cout << endl;
    }
}

void same_with_three_loops(int n){
    for (int i = 1; i <= n; i++){

        
        for (int j = 0; j < n-i; j++)
        {
            cout << "*";
        }

        for (int k = 0 ; k < i + ((i-1)/2); k++)
        {
            cout << "5";
        }
        
        cout << endl;
    }
}

int main()
{

    // same_with_three_loops(5);
    pyramid_with_star(7);
    cout << "wow";
    //my method

    // cout << "How many rows do you want to print\n";
    // int rows = 1;
    // // cin >> rows;
    // cout << "How many coloumns do you want to print\n";
    // int coloumns = 8;
    // // cin >> coloumns;
    // int r= 1;
    // while (r<=rows)
    // {
    //     if (c<coloumns)
    //     {
    //         while (c<=coloumns)
    //         {
    //             c+=1;
    //         }            
    //     }        
    //     cout<< (1)* c;
    //     r +=1;        
    // }

    // while (r<=rows)
    // {
    //     int c = 1;
    //     while (c<=coloumns)
    //     {
    //         // c = c +1;
    //         cout<<"*";
    //         c +=1;
    //     }
    //     cout<<endl;
    //     r = r+1;        
    // }
    
    //sir method

    // cout<<"What should me the order of the martix\n";
    // int n ;
    // cin>>n;
    // int i = 1;
    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=n)
    //     {
    //         cout<<i;
    //         j = j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }
    
    // new pattern

    // cout<< "Order of the martix\n";
    // int n ;
    // cin >> n;
    // int i = 1;
    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=n)
    //     {
    //         cout<<j;
    //         j += 1 ;
    //     }
    //     cout<<endl;
    //     i += 1;        
    // }
    

    //new pattern (traingle pattern)
    
    // cout<<"how many rows do you want to print or show\n";
    // int r;
    // cin >>r;
    // int new_row = r;        
    // while (r>0)
    // {
    //     int j =1;
    //     while (j<=r)
    //     {
    //         cout<<"*";
    //         j +=1;
    //     }
    //     cout<<endl;
    //     r -= 1;
    // }
    // int r1 = 1;
    // while (r1<=new_row)
    // {
    //     int j1 =1;
    //     while (j1<=r1)
    //     {
    //         cout<<"*";
    //         j1 += 1 ;
    //     }
    //     cout<<endl;
    //     r1 +=1;        
    // }
    
    // cout<<"How many rows\n";int row1;cin>>row1;
    // int r11 = 1;
    // while (r11<=row1)
    // {
    //     int j11 = 1;
    //     while (j11<=r11)
    //     {
    //         cout<<j11;
    //         j11 +=1;
    //     }
    //     cout<<endl;
    //     r11 += 1;
    // }
    
    // cout<<"How many rows";int numbers;cin>>numbers;int n1 = 1;
    // while (n1<=numbers)
    // {
    //     int j1 = 1;
    //     while (j1<=n1)
    //     {
    //         cout<<n1;
    //         j1 += 1;
    //     }
    //     cout<<endl;
    //     n1 += 1;
    // }
    
    // cout<<"How many rows\n";int row12;cin>>row12;
    // int r12 = 1;int j12 = 1;
    // while (r12<=row12)
    // {
    //     int j121 = 1;
    //     while (j121 <=r12)
    //     {
    //         cout<<j12<<"\t";
    //         j12 +=1;            // By this the elements of the rows keep on increasing
    //         j121 +=1;
    //     }
    //     cout<<endl;
    //     // j12 +=1;    //By this the elements of the rows are same
    //     r12 +=1;
    // }
    
    // cout<<"How many rows\n";int row12;cin>>row12;
    // int r12 = 1;int j12 = 1;
    // while (r12<=row12)
    // {
    //     int j121 = 1;
    //     while (j121 <=r12)
    //     {
    //         cout<<j12<<"\t";
    //         j12 +=1;            // By this the elements of the rows keep on increasing
    //         j121 +=1;
    //     }
    //     cout<<endl;
    //     j12 -=1;    //By this the (n-1)th row last element and nth row 1st element are same
    //     r12 +=1;
    // }

    // cout<<"How many rows\n";int row12;cin>>row12;
    // int r12 = 1;
    // while (r12<=row12)
    // {
    //     int j12 = r12;
    //     int j121 = 1;
    //     while (j121 <=r12)
    //     {
    //         cout<<j12<<"\t";            
    //         j12 += 1;
    //         j121 +=1;
    //     }
    //     cout<<endl;
    //     r12 +=1;
    // }
    
    // cout<<"How many rows\n";int row12;cin>>row12;
    // int r12 = 1;
    // while (r12<=row12)
    // {
    //     int j121 = 0;
    //     while (j121 <r12)
    //     {
    //         cout<<r12+j121<<"\t";            
    //         j121 +=1;
    //     }
    //     cout<<endl;
    //     r12 +=1;
    // }
    
    // cout<<"How many rows\n";int row12;cin>>row12;
    // int r12 = 1;
    // while (r12<=row12)
    // {
    //     int j12 = 0;
    //     while (j12 < r12)
    //     {
    //         cout<<r12-j12<<"\t";            
    //         j12 += 1;
    //     }
    //     cout<<endl;
    //     r12 +=1;
    // }
    
    // char sat = 65;
    // cout<<"How many rows\n";int num ; cin>>num;int i = 1;
    // while (i<=num)
    // {
    //     int j = 1;
    //     while (j<=num)
    //     {
    //         cout<<sat;
    //         j +=1;
    //     }
    //     cout<<endl;
    //     sat +=1;
    //     i +=1;
    // }
    
    // new concept
    // int av = 'a' +1;
    // char vav = av;
    // cout<<vav;
    
    // char sat = 65;
    // cout<<"How many rows\n";int num ; cin>>num;int i = 1;
    // while (i<=num)
    // {
    //     int j = 0;
    //     while (j<num) //here only less than is used
    //     {
    //         cout<<char (sat+j);
    //         j +=1;
    //     }
    //     cout<<endl;
    //     i +=1;
    // }

    // cout<<"How many rows\n";int num ; cin>>num;int i = 1;int zero = 0;
    // while (i<=num)
    // {
    //     int j = 0;
    //     // int zero = 0;
    //     while (j<num)
    //     {
    //         cout<< char (64+i+j+zero);
    //         j +=1; 
    //     }
    //     cout<<endl;
    //     zero +=2;
    //     i +=1;
    // }

    // cout<<"enter the number the rows\n";int n;cin>>n;int i = 1;
    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=n)
    //     {
    //         cout<<char(i+j-1+64);
    //         j +=1;
    //     }        
    //     cout<<endl;
    //     i +=1;
    // }
    
    // cout<<"enter the number the rows\n";int n;cin>>n;int i = 1;
    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=i)
    //     {
    //         cout<<char(i+64);
    //         j +=1;
    //     }        
    //     cout<<endl;
    //     i +=1;
    // }

    // cout<<"enter the number the rows\n";int n;cin>>n;int i = 1;
    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=i)
    //     {
    //         cout<<char(i+j-1+64);
    //         j +=1;
    //     }        
    //     cout<<endl;
    //     i +=1;
    // }

    // one of the most interesting pattern
    // cout<<"enter the number the rows\n";int n;cin>>n;int i = 1;
    // while (i<=n)
    // {
    //     int j =1;
    //     while (j<=i)
    //     {
    //         cout<<char(64+n-i+j)<<"\t";
    //         j+=1;
    //     }
    //     cout<<endl;
    //     i+=1;
    // }
    
    // cout<<"how many rows\n";
    // int n ;cin>>n;int i = 1;
    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=n)
    //     {
    //         if (j<=n-i)
    //         {            
    //             cout<<" ";
    //         }
    //         else
    //         {
    //             cout<<"*";
    //         }
    //         j += 1;            
    //     }
    //     cout<<endl;
    //     i +=1;
    // }

    // cout<<"how many rows\n";int n ;cin>>n;int i = 1;
    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=n-i+1)
    //     {
    //         cout<<"*";
    //         j +=1;
    //     }
    //     cout<<endl;
    //     i+=1;
    // }

    // cout<<"how many rows\n";int n ;cin>>n;int i = 1;
    
    // while (i<=n)
    // {
    //     int j =1;
    //     while (j<=n)
    //     {
    //         if (i-1<j and j<=n)
    //         {
    //             cout<<"*";
    //         }
    //         else
    //         {
    //             cout<<" ";
    //         }            
    //         j+=1;
    //     }
    //     cout<<endl;
    //     i+=1;
    // }
    
    // same up and down

    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=n)
    //     {
    //         if (i-j<=0)
    //         {            
    //             cout<<"*";
    //         }
    //         else
    //         {
    //             cout<<" ";
    //         }
    //         j += 1;            
    //     }
    //     cout<<endl;
    //     i +=1;
    // }
    
    // cout<<"how many rows\n";int n ;cin>>n;int i = 1;
    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=n)
    //     {
    //         if (j<n-i+1)
    //         {            
    //             cout<<" ";
    //         }
    //         else
    //         {
    //             cout<<"*";
    //         }
    //         j += 1;            
    //     }
    //     cout<<endl;
    //     i +=1;
    // }

    // cout<<"how many rows\n";int n ;cin>>n;int i = 1;
    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=n)
    //     {
    //         if (j-i<n-i-1)
    //         {            
    //             cout<<" ";
    //         }
    //         else
    //         {
    //             cout<<"*";
    //         }
    //         j += 1;            
    //     }
    //     cout<<endl;
    //     i +=1;
    // }
    
    // while (i<=n)
    // {
    //     int j =1;
    //     while (j<=n)
    //     {
    //         if (j>i-1)
    //         {
    //             cout<<i;
    //         }
    //         else{
    //             cout<<" ";
    //         }            
    //         j+=1;
    //     }
    //     cout<<endl;
    //     i+=1;
    // }

    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=n)
    //     {
    //         if (j<n-i+1)
    //         {
    //             cout<<" ";
    //         }
    //         else
    //         {
    //             cout<<i;
    //         }            
    //         j+=1;
    //     }
    //     cout<<endl;
    //     i+=1;
    // }
       
    // while (i<=n)
    // {
    //     int j =1;
    //     while (j<=n)
    //     {
    //         if (j>i-1)
    //         {
    //             cout<<j;
    //         }
    //         else{
    //             cout<<" ";
    //         }            
    //         j+=1;
    //     }
    //     cout<<endl;
    //     i+=1;
    // }

    // most interesting and hard pro

    // cout<<"how many rows\n";int n ;cin>>n;int i = 1;
    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=n)
    //     {        
    //         if (j>n-i)
    //         {
    //             int start = 1;
    //             while (j<=n)
    //             {
    //                 cout<<start;
    //                 start+=1;
    //                 j+=1;
    //             }                                       
    //         }
    //         else
    //         {
    //             cout<<" ";
    //             j+=1;
    //         }                           
    //     }
    //     cout<<endl;
    //     i+=1;
    // }
    
    // cout<<"how many rows\n";int rows ;cin>>rows;int i = 1;int col = (2*rows-1);int incn = 2;
    // while (i<=rows)
    // {
    //     int ne = 1;int j =1;
    //     while (j<=col)
    //     {
    //         if (j<=rows)
    //         {
    //             if (j<=(rows-i))
    //             {
    //                 cout<<" ";
    //             }                
    //             else
    //             {
    //                 cout<<ne;
    //                 ne += 1;
    //             }
    //         }                   
    //         else
    //         {                
    //         }
    //         j +=1;
    //     }               
    //     cout<<endl;
    //     i +=1;          
    //     }    

    // cout<<"how many rows\n";int rows ;cin>>rows;int i=1;int k = rows;int col = (2*rows-1);

    // while (i<=rows)
    // {
    //     int what_the_row_is = i;
    //     int r1 = 1;
    //     int j = 1;
    //     while (j<=col)
    //     {                        
    //         if (j<=k)
    //         {
    //             if (j>k-i)
    //             {
    //                 cout<<r1;
    //                 r1 += 1;
    //             }
    //             else
    //             {
    //                 cout<<" ";
    //             }                
    //         }
    //         else
    //         {
    //             if (what_the_row_is >1)
    //             {
    //                 what_the_row_is -= 1;
    //                 cout<<what_the_row_is;
    //             }
    //             else if (what_the_row_is == 1)
    //             {                    
    //                 break;
    //             }
    //             else
    //             {
    //                 cout<<" ";
    //             }                                             
    //         }            
    //         j += 1;
    //     }
    //     cout<<endl;
    //     i += 1;
    // }
    
    // while (i<=rows)
    // {
    //     int whatrow  = i;
    //     int j=1;
    //     int r= 1;
    //     while (j<=col)
    //     {
    //         if (j<=k)
    //         {
    //             if (j>k-i)
    //             {
    //                 cout<<r;
    //                 r+=1;
    //             }
    //             else{
    //                 cout<<" ";
    //             }
    //         }
    //         else
    //         {
    //             whatrow -= 1;
    //             if (whatrow>=1)
    //             {
    //                 cout<<whatrow;
    //                 if (whatrow ==1)
    //                 {
    //                     break;
    //                 }                    
    //             }                
    //             else{
    //                 cout<<" ";
    //             }                
    //         }            
    //         j +=1;
    //     }
    //     cout<<endl;
    //     i +=1;
    // }
    // 
    // another method
    // 
    // cout<<"How many rows\n";int n11;cin>>n11;int i= 1;int col = 2*n11-1;int k = n11;
    // while (i<=n11)
    // {        
    //     int j= 1;
    //     int g =1;int w_the_row = i-1;
    //     while (j<=col)
    //     {
    //         if (j<=n11)
    //         {
    //             if (j>k-i)
    //             {
    //                 cout<<g;
    //                 g+=1;
    //             }
    //             else
    //             {
    //                 cout<<" ";
    //             }                
    //         }
    //         else
    //         {
    //             if (w_the_row>=1)
    //             {
    //                 cout<<w_the_row;
    //                 w_the_row-=1;
    //                 if (w_the_row == 0)
    //                 {
    //                     break;
    //                 }                    
    //             }                
    //             else{                
    //                 cout<<" ";
    //             }
    //         }
    //         j+=1;
    //     }
    //     cout<<endl;
    //     i +=1;
    // }
    
    // cout<<"how many rows\n";int n1 ;cin>>n1;int i=1;int k = n1;int col = (2*n1);
    // with the hint the sir given 
    // while (i<=n1)
    // {
    //     int j = 1;
    //     int gl = 1;
    //     while (j<=col)
    //     {            
    //         if (j<=n1)
    //         {
    //             if (j<=n1+1-i)
    //             {
    //                 cout<<j;
    //             }
    //             else
    //             {
    //                 cout<<"*";
    //             }
    //         }
    //         else
    //         {
    //             int thisistheone = j-(2*gl-1);
    //             if (j-n1>=i)
    //             {
    //                 cout<<thisistheone;
    //             }
    //             else
    //             {
    //                 cout<<"*";
    //             }                                
    //             gl += 1;
    //         }            
    //         j +=1;
    //     }
    //     cout<<endl;
    //     i +=1;
    // }
    
    // int n;
    // cout<<"From which number do you want to start\n";
    // cin>>n;
    // int col = 2*n-1;
    // for (int i = 0; i < col; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         if ( i<n && j<n)
    //         {
    //             if (  i <= j)
    //             {
    //                 cout<<n-i;
    //             }
    //             else if (i > j)
    //             {
    //                 cout<<n-j;
    //             }
    //         }
    //         else if (i >= n && j<n)
    //         {
    //             if (n-j > i-n+2)
    //             {
    //                 cout<<n-j;
    //             }
    //             else
    //             {
    //                 cout<<i-n+2;
    //             }
    //         }
        
    //     }

    //     cout<<"\n";
    // }
    
    return 0;

}    