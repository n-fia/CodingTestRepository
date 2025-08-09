#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    if(a>=90){
        cout << 'A';
        return 0;
    }
    else if(a>=80){
        cout << 'B';
        return 0;
    }
    else if(a>=70){
        cout << 'C';
        return 0;
    }
    else if(a>=60){
        cout << 'D';
        return 0;
    }
    else{
        cout << 'F';
        return 0;
    }
}