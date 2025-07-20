//butterfly pattern
#include<iostream>
using namespace std;
int main(){
    int n = 4;
    //top
    for(int i = 0; i < n; i++ ){
        //stars
        for(int j = 0; j < i+1; j++){
            cout << "*";
        }
        //spaces
        for(int j = 0; j < 6-2*i; j++){
            cout << "_";
        }
        //stars
        for(int j = 0; j < i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
    //bottom
    for(int i = 0; i < n; i++){
        //stars
        for(int j = 0; j < n-i; j++){
            cout << "*";
        }
        //spaces
        for(int j = 0; j < 2*i; j++){
            cout << "_";
        }
        //stars
        for(int j = 0; j < n-i; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}