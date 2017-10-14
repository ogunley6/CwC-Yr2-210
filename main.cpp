#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

//two non negative integers m is the number that divides into n!

int main(){
    int m;
    int n;
    unsigned long long factorial = 1;

    cout<< "Enter 2 numbers (m and n) both can be any positive integer of your choice \n";
    cout<< "The program will then run and see whether the first digit m divides into the second digit of your choice n!"<<endl;

    cout<<"Enter your first choice of number \n";
    cin>>m;

    cout<<"Now enter your second \n";
    cin>>n;

    for(int i = 1; i <=n; ++i)
    {
        factorial *= i;
    }

// test to see if factorial function works
    //cout<< factorial <<endl;

    //uDS = (factorial/m)
    cout<<"The factorial of "<< n <<" is "<< factorial<<endl;

    unsigned long long uRI = (factorial % m);

    if (uRI == 0){
        cout<< "Yes " << m << " goes into " << n <<"!"<<endl;
    }

    else{
        cout<< "No " << m << " doesn't go into " << n <<"!" <<endl;
    }




return 0;
}
