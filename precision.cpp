#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

// cout.setf( std::ios::fixed ); sets the decimal precision to a fixed value
//  std::cout.precision(3);   is used to set the precision
// cout.unsetf(ios::fixed); removes this fixed precision

int main() {
    
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl<<b<<endl<<c<<endl;
    std::cout.precision(3);
    cout.setf( std::ios::fixed );
    cout<<d<<endl;
    std::cout.precision(9);
    cout.setf( std::ios::fixed);
    cout<<e;
    return 0;
}

