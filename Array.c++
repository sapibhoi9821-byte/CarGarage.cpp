#include <iostream>
using namespace std;

int main() {
    string cars[3];
   int carcount = 3;
    for(int i = 0; i< carcount;i++) {
        cout<<"What car do you want in your garage: ";
        cin>>cars[i];
        
    }
    cout<<"These are the cars in your parking slot: \n";
    for(int i = 0; i< carcount;i++) {
        cout<<i+1<<". "<<cars[i]<<" ";
    }

    int pick;
    cout<<"\nWhat car do you want to drive?(1-3)";
    cin>>pick;
    cout<<"You choose this car to drive:"<< cars[pick-1];


    int m = 0;
    int s = 2;
    while(m<s) {
        swap(cars[m], cars[s]);
        s--;
        m++;
    }
    for(int i = 0; i< carcount;i++) {
        cout<<"\n"<<i+1<<". "<<cars[i]<<" ";
    }
    
}