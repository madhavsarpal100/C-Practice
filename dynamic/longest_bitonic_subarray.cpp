 	
	#include<iostream>
using namespace std;
  int longestBitonicSubarray(int *input, int n) {
	
     	
       int *inc=new int[n];int *dec=new int[n]; 
      for(int i=0;i<n;i++){inc[i]=1;dec[i]=1;}
     
      inc[0]=1;dec[n-1]=1;   int max=0;
      
      for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
          if((inc[j]+1>inc[i])&&(input[j]<input[i])){
            inc[i]=inc[j]+1;
          }
        }
      }
      
      for(int i=n-2;i>=0;i--){
        for(int j=i+1;j<n;j++){
          if((dec[j]+1>dec[i])&&(input[i]>input[j])){
            dec[i]=dec[j]+1;
          }
        }
      }
    
    int a;
      for(int i=0;i<n;i++){
        //cout<<inc[i]<<" : "<<dec[i]<<endl;
       a=inc[i]+dec[i]-1;
        
        if(a>max){
         
          max=a;  
         }
      }
      delete[] inc;delete[] dec;
     
     	return max;
     	
 	}

int main() {
  int n, input[100000];
  cin>>n;
  for(int i=0; i<n; i++) {
    cin>>input[i];
  }
  cout<<longestBitonicSubarray(input, n);
  return 0;
}
