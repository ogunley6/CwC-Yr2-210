#include <iostream>

using namespace std;

int userValue;
int au1();
int au2();


int main(){

    int cu; //The maximum mass is 7kg
    int plastic; //The maximum mass is 15kg
    int au; //The maximum mass is 4kg

//The unit cost of each material

    int uCopper = 65;
    int uPlastic = 15;
    int uGold = 100;

    cout <<"Please enter a number no bigger than 26. \n";
    cin >> userValue;

//if statement to make sure user never goes above Maximum available mass.
    if(userValue > 26){
            cout <<"Sorry you can't input above the total of 26kg"<<endl;
    }

    if(userValue <= 4){
        cout << au1();
    }

    else if(userValue > 4 || userValue <=11 ){
        cout << au2();
    }


return 0;
}

//au1 function is for if userValue entered is 4 or below

int au1(){
    int au1R = (userValue * 100);
    return au1R;
}

// Calculation for anything above 4 kg
//temporary calculation for now until they are all put in a class so can use the same variables

int au2(){
    int auL = (userValue - 4 );
    int cuL = (auL * 65);
    int total = cuL + (4*100);
    return total;
 }


