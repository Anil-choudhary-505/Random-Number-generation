// us_ran_num --> this varaible is use to take one randon  number from user
    
//   x --> this variable is use for taking user choise how much random number you want to generate

// abc --> this variable is use for the functionality purpose of program 

#include<iostream>
using namespace std;

int main(){

int us_ran_num,x;
int  abc=1;

//taking random number from user
cout<<"Enter any number of your choise : ";
cin>>us_ran_num;

//taking user choise how much number you want to generate
cout<<"How much numbers you want to generate : ";
cin>>x;

cout<<endl<<endl<<"Following are the random numbers : "<<endl;

// main functionality of random number generation
for(int i=1;i<=x;i++){
    if(abc %2==0){
        cout<<"3"<<endl;
        abc=1;
    }
    else if(us_ran_num % 2 == 0){
        cout<<"2"<<endl;
        us_ran_num++;
        abc++;
    }
    else if (us_ran_num % 2 != 0){
        cout<<"1"<<endl;
        us_ran_num++;
        abc++;
    }
}   
}