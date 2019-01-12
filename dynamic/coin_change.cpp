#include<iostream>
using namespace std;



int doit(int deno[],int no,int value,int **arr){
  cout<<"no is "<<no<<"and value is :"<<value<<endl;
   cout<<"arr[no][value] is :"<<arr[no][value]<<endl;
  if(no==0){ cout<<"returning value-->"<<no<<" denoms for value"<<value<<":"<<0<<endl;
                     return 0;}
  if(value<0){cout<<"returning value-->"<<no<<"denoms for value"<<value<<":"<<0<<endl;
                 return 0;}

  if(value==0){cout<<"returning value-->"<<no<<"denoms for value"<<value<<":"<<1<<endl;
                return 1;}

  if(arr[no][value]>-1){ cout<<"returning stored value-->"<<no<<"denoms for value"<<value<<":"<<arr[no][value]<<endl;
        return arr[no][value];}


    int ans1=doit(deno+1,no-1,value,arr);
    int ans2=doit(deno,no,value-deno[0],arr);
  arr[no][value]=ans1+ans2;
    cout<<"returning calculated value-->"<<no<<"denoms for value"<<value<<":"<<ans1+ans2<<endl;
  return ans1+ans2;


}



int countWaysToMakeChange(int denominations[], int numDenominations, int value){

  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */
  //int arr[numDenominations+1][value+1];

  int **arr=new int*[numDenominations+1];
  for(int i=0;i<=numDenominations+1;i++){
    arr[i]=new int[value+1];
  }
  for(int i=0;i<=numDenominations;i++){
    for(int j=0;j<=value;j++){
      arr[i][j]=-1;
    }
  }


  return doit(denominations,numDenominations,value,arr);

}



int main(){

  int numDenominations;
  cin >> numDenominations;
  int* denominations = new int[numDenominations];
  for(int i = 0; i < numDenominations; i++){
    cin >> denominations[i];
  }
  int value;
  cin >> value;

  cout << countWaysToMakeChange(denominations, numDenominations, value);

}


