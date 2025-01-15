#include <iostream>
using namespace std;
void pypart(int n){


for(int i = 0; i < n;i++){
for(int j = 0; j <= 2*n-1 ;j++){
if(j >= n-i && j<=n+i){
cout<<"*";
}else{
cout<<" ";
}
}
cout<<endl;
}
}

int main(){
int num;
cout<<"Enter the no. of rows : " ;
cin>>num;  
pypart(num);
return 0;
}
