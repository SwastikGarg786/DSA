//C++ Program to print
//the traingle pattern
//for alphabets (not fixed)

#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"How many lines do you want to print: ";
    cin>>n;
    char ch = 'A';

    //Shradha Didi's Logic
    for(i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}