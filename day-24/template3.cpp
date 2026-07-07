//passing multiple argument in template
#include<bits/stdc++.h>  
using namespace std;
template<class X,class Y>   //instead of typename u can also write class
void myswap(T &a,T &b){
 T temp = a;
    a=b;
    b=temp;
}

int main(){
    int x = 10;
    char y='A';
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