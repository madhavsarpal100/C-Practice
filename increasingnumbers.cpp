#include<string>
void findStrictlyIncreasingNum(int start, string out, int n) 
{ 
   
    if (n == 0) 
    { 
        cout << out << " "; 
        return; 
    } 
  
   
    for (int i = start; i <= 9; i++) 
    { 
       
        string str = out + to_string(i); 
  
       
        findStrictlyIncreasingNum(i + 1, str, n - 1); 
    } 
} 

void printIncreasingNumbers(int n) {
	

      findStrictlyIncreasingNum(1,"",n);

   


}


