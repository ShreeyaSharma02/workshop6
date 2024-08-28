#include<iostream>
using namespace std;
int* readNumbers(){
    int* array=new int[10]; //pointer and new array_name should be same
    cout<<"enter 10 int values"<<endl;
    for(int i=0;i<10;i++){
        cin>>array[i];

    }
    return array;
}
void printnum(int* array, int n){ //first var points to the array variable and second is the size which we will declare in the main fucntion
    for(int i=0;i<n;i++){
        cout<<i<<""<<array[i]<<endl;
    }
}