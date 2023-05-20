# include <iostream>
using namespace std;
# include <math.h>
#include <fstream>

int main()
{
    // for (int i = 0; i < 1000; i++)
    // {
    //     float x = float(rand())/RAND_MAX;
    //     float y = float(rand())/RAND_MAX;
    //     cout<<x+y<<endl;
    // }

    
    // for (int i = 0; i < 1000; i++)
    // {
    //     cout<<float(rand())/RAND_MAX<<endl;
    // }


    // double a = 0.5,t = 0 , x = 1.0 , dt = 0.01 , t_final = 10.0, N = int(t_final/dt);
    // ofstream q1;
    // q1.open("Solution.csv");
    // q1 << "x" << "," << "time" << endl;
    // for (int i = 0; i < N; i++)
    // {
    //     x += (dt)*x*(-a);
    //     t += dt;
    //     cout<<"x = "<<x << "\tt = "<<t<<endl;
    //     q1 << x << "," << t << endl;
    // }
    // q1.close();



    double t = 0,g = 9.81, l = 1.0 , dt = 0.01 , t_final = 10.0, N = int(t_final/dt), theta = 0.2 , omega = 0;
    ofstream myfile;
    myfile.open("Pendulum.csv");
    myfile << "time" << "," << "omega" << "," << "theta" << endl;
    for (int i = 0; i < N; i++)
    {
        double tep = omega;
        omega = omega - (g/l)*sin(theta)*dt;
        theta+= tep*dt;
        t+=dt;
        cout<< omega << "\t" << theta<<endl;
        myfile << t <<","<< omega << "," << theta << endl;
    }    
    myfile.close();
    cout<<"done";
    return 0 ;
}