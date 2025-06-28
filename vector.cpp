#include<iostream>
#include<vector>
using namespace std;
int main(){
//ways to create vector
vector<int>vec={1,4,2,5,6}; //1st
cout<<vec[3]<<endl;


vector<int>vect;   //2nd


vector<int>vecto(5,4);  //3rd here left is size of vector and right side is the value which is in vector at all indexes 

for(int value : vecto){ //here value is not index of vector but the value stored in that index and "value" must be of same datatype as of vector which you have created
cout<<value<<" ";
}
cout<<endl;
//chracter vector
vector<char>alpha={'a','b','c','d','e','f'};
for(char value:alpha){
cout<<value<<" ";
}
return 0;
}