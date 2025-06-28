//vector fuctions

#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>vec;
//1.size
cout<<"Intial size:"<<vec.size()<<endl;
for(int value:vec){
cout<<value<<" ";
}

//2.Push_back "to push element"
vec.push_back(25);
vec.push_back(35);
vec.push_back(45);
vec.push_back(55);
cout<<"After pushing elements size of vector="<<vec.size()<<endl;
for(int value:vec){
cout<<value<<" ";
}
cout<<endl;
//3.Pop_back "to pop last element"
vec.pop_back();
cout<<"After poping element size of vecor"<<vec.size()<<endl;
for(int value:vec){
cout<<value<<" ";
}


return 0;
}