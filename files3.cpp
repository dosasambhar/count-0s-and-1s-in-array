#include <iostream>
using namespace std;
int main(){
  int a[5]={1,1,0,1,0};
   int numzero=0;
   int numone=0;
  int n=5;
  for(int i=0; i<n; i++){
    if(a[i]==0){
      numzero++;
    }
     if(a[i]==1){
      numone++;
  }
}
  cout<<"number of 0's"<<numzero<<endl;
  cout<<"number of 1's"<<numone<<endl;
}
