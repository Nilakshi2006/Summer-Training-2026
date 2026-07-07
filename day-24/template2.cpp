//C++ program swap the two number use the template take int float and double as arg
#include<bits/stdc++.h>
using namespace std;
template<typename T>
void myswap(T &a,T &b){
   T temp = a;
    a=b;
    b=temp;
}
int main(){
    int x = 10, y = 20;
    myswap(x, y);
    cout << "Swap of two integers: " << x << "," << y << endl;

    float p = 10.2f, q = 2.0f;
    myswap(p, q);
    cout << "Swap of two floats: " << p << "," << q << endl;

    double m = 11.2, n = 22.2;
    myswap(m, n);
    cout << "Swap of two doubles: " << m << "," << n << endl;

    return 0;
}