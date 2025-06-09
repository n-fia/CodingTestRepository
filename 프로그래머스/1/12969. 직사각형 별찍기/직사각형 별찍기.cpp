#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    string str(a,'*');
    for(int i=0; i<b; ++i){
        cout << str << endl;
    }
    return 0;
}