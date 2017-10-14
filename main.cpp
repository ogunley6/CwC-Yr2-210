#include <iostream>
#include <cmath>

using namespace std;

// Armstrong number calculation code



int main() {

int x;
int y;
int z;

int v[3] = {x,y,z};

/*
int x1 = v[0];
int y1 = v[1];
int z1 = v[2];
*/

cout<< "This program checks whether a 3 digit number is an Armstrong number or not \n";
cout<< "Please enter a 3 digit number as 3 single digits after each digit press Enter and type in another digit ";

cin >> x >> y >> z;

/* cin>> y;
cout<< "choose another number: \n";

cin>> z; */

//cout<<"your 3 digit number is :" <<x<<y<<z<<endl;

// Armstrong number calculation
int ax1 = pow(x,3);
int ay1 = pow(y,3);
int az1 = pow(z,3);
int aSum = (ax1 + ay1 + az1);


// Calculation which works out the users number input so if they enter 5, 2 and 1 the code will then interpret that as 521
int userNumber = ((x*100) + (y*10) + (z*1));

//I need a test which checks and verifies whether the number is an Armstrong number
//If statement which verifies if aSUM - number = 0 then output of yes the number IS an Armstrong number
if (aSum == userNumber){
        cout << "The number " << userNumber << " is an Armstrong number" << endl;
}

else{
    cout<< "The number "<< userNumber<< " is not an Armstrong number" <<endl;
}
 /* An error before in my if statement I put an assignment operator instead of a comparison operator so when I was running the program every number
    was coming up as an Armstrong number when I changed it when a number was not an Armstrong number

/* cout<< ax1<<endl;
cout<< ay1<<endl;
cout<< az1<<endl;

cout <<"The number is :" << aSum<< endl; */

return 0;
}
