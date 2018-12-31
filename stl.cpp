//stl basics demonstartion
#include <iostream>
#include<vector>
#include<string>
#include<utility>
#include<set>
#include<map>
#include<unordered_map>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    /////////vector////////

    vector<int> a;

    a.push_back(7);
    a.push_back(8);
    a.push_back(11);
    a.push_back(4);
    a.push_back(886);
    cout<<"elements pushed into vector"<<endl;

    vector<int>::iterator it;
    cout<<"the elements pushed are :";
    for(it=a.begin();it!=a.end();it++)
    {
        cout<<"..."<<*it<<endl;
    }

    ///////////////string///////

    string s ="catmouse";
    string s1(s,3,5);
    cout<<s1<<endl;

    string s2;
    s2=s.substr(1,4);
    cout<<s2<<endl;

    //////////////////////pair/////

    pair<int,char> p;
    pair<int,char> p2(1,'a');

    p=make_pair(2,'b');

    cout<<"the pairs are:"<<endl;

    cout<<p.first<<" , "<<p.second<<endl;
    cout<<p2.first<<" , "<<p2.second<<endl;

    ///////////set///////////

    set<int> q;

    q.insert(1);
    q.insert(8);
    q.insert(5);
    q.insert(1);
    q.insert(1);
    q.insert(1);
    q.insert(8);

    cout<<"elements inserted in the set are : "<<endl;

    set<int>::iterator uv;
    for(uv=q.begin();uv!=q.end();uv++)
    {
        cout<<*uv<<endl;
    }

    if(q.find(4)==q.end())
    {
      cout<<"4 not found ";
    }
    if(q.find(5)==q.end())
    {
      cout<<"5 not found "<<endl;
    }
    else
    {
        cout<<" 5 found"<<endl;
    }

    ////////////////map///////

    map<int,int> m;
     int arr[]={1,9,5,7,9,5,8,2};
     int si=sizeof(arr)/sizeof(arr[0]);

     for(int i=0; i!=si;i++)
     {

         m[arr[i]]=m[arr[i]]+1;

     }
     cout<<"map after insertion is : ";

     map<int,int>::iterator mit;
     for(mit=m.begin();mit!=m.end();mit++)
     {
         cout<<mit->first<<" : "<<mit->second<<endl;
     }

     cout<<"frequency of 5 is : "<<m[5]<<endl;

     m.erase(5);

    cout<<"map after deletion of 5 is : "<<endl;

    for(mit=m.begin();mit!=m.end();mit++)
     {
         cout<<mit->first<<" : "<<mit->second<<endl;
     }


     ////////unordered map///////

     unordered_map<char,int> um;

     pair<char,int> pa;
     pa=make_pair('a',23);

     um.insert(pa);

     char ar[]={'r','f','s','v','f','r'};
     int size=sizeof(ar)/sizeof(ar[0]);
     for(int i=0;i<size;i++)
     {
         um[ar[i]]+=1;
     }

     cout<<"the unordered map is : "<<endl;
     unordered_map<char,int>::iterator mait;
     for(mait=um.begin();mait!=um.end();mait++)
     {
         cout<<mait->first<<" : "<<mait->second<<endl;
     }








    return 0;
}

