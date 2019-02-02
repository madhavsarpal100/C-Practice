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
   
//for c..use 
//printf("%.3f",f);

printf("%.3f",d);

//int precision=3;
//if the decimal precision is stored in a variable then use

printf("%.*f",precision,f);

//the width field is similar and works for other formats too such as strings

 printf("%.*s",6,"rat");
    
//if the var in width field is negative then the string gets left aligned rather than right
    
       return 0;
}

