//cpp prog to print subsequences of a string via recursion

#include <iostream>


using namespace std;

int subseq(string a,string arr[])
{
    if(a.empty())
    {
        arr[0]="";
        return 1;
    }

    int smallno=subseq(a.substr(1),arr);
    for(int j=0;j<smallno;j++)
    {
        arr[smallno+j]=a[0]+arr[j];

    }
    return 2*smallno;
}

int main()
{
    cout << "Enter String : ";
    string a;
    cin>>a;
    string arr[2000];
    int no=subseq(a,arr);

    cout<<"the subseqs are :"<<endl;
    for(int i=0;i<no;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
