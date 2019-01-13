#include <iostream>
#include <string>

using namespace std;

void rnd(int *arr,int size){

   // cout<<"arr received is :";
   // for(int k=0;k<size;k++)
     //   cout<<arr[k]<<"->";


    for(int i=0;i<size/2;i++){
        cout<<arr[i]<<" "<<arr[size-i-1]<<" ";
    }
    if(size%2==1){
    cout<<arr[size/2];}

}

int main()
{ int n;
  cin>>n;
  int size;
  for(int i=0;i<n;i++){
    cin>>size;
    int *arr=new int[size];
    for(int j=0;j<size;j++){
        cin>>arr[j];
    }
    rnd(arr,size);
    cout<<endl;
    delete[] arr;
  }

    return 0;
}
