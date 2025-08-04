#include <bits/stdc++.h>
using namespace std;

int main(){
 int num1, num2;
 cin>>num1 >> num2;
 int result = num1*num2;
 while(num2){
	 cout<<num1*(num2%10)<<endl;
	 num2/=10;
 }
 cout<<result;
}