#include<iostream>
using namespace std;
void takeInput(int a[], int size) {
    for (int i = 0; i < size; i++) {
      // for loop
        cin >> a[i];
    }
}
void swap_array(int a[],int size){
for (int i = 0; i < size / 2; i++) {
    swap(a[i], a[size - 1 - i]); // modifying the size inside the loop,
}                               //which is bad practice and unnecessary.
                                
}
int main(){
int size;
cout<<"Enter size of array:";
cin>>size;
int a[size];
takeInput(a, size);
for (int i = 0; i < size; i++)
{
  cout<<a[i]<<" ";
}
cout<<endl;
cout<<"Swapped array:"<<endl;
swap_array(a, size);
for (int i = 0; i < size; i++)
{
  cout<<a[i]<<" ";
}
return 0;
}