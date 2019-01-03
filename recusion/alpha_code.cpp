#include <iostream>

using namespace std;

char get(int n)
{
    if(n==1)return 'a';
    if(n==2)return 'b';
    if(n==3)return 'c';
    if(n==4)return 'd';
    if(n==5)return 'e';
    if(n==6)return 'f';
    if(n==7)return 'g';
    if(n==8)return 'h';
    if(n==9)return 'i';
    if(n==10)return 'j';
    if(n==11)return 'k';
    if(n==12)return 'l';
    if(n==13)return 'm';
    if(n==14)return 'n';
    if(n==15)return 'o';
    if(n==16)return 'p';
    if(n==17)return 'q';
    if(n==18)return 'r';
    if(n==19)return 's';
    if(n==20)return 't';
    if(n==21)return 'u';
    if(n==22)return 'v';
    if(n==23)return 'w';
    if(n==24)return 'x';
    if(n==25)return 'y';
    if(n==26)return 'z';

}

void print_code(int n,string output)
{
    if(n==0)
    {
        cout<<output<<endl;
        return;
    }


    int next=n%100;
    if(next>9&&next<27)
    {
        print_code(n/100,get(n%100)+ output);
       if(next==10)return;
    }
     print_code(n/10,get(n%10)+ output);


}

int main()
{   int n;
    cout << "Enter the no :";
    cin>>n;
    print_code(n,"");
    return 0;
}
