#include<iostream>
#include<iostream>
using namespace std;
int* readNumbers(){
    int* array1=new int[5]; //pointer and new array_name should be same
    //int* array2=new int[5];
    cout<<"enter 5 int values"<<endl;
    for(int i=0;i<5;i++){
        cin>>array1[i];
    }
   return array1;
}
void printnum(int* array, int n){ //first var points to the array variable and second is the size which we will declare in the main fucntion
    for(int i=0;i<n;i++){
        cout<<i<<""<<array[i]<<endl;
    }
}
bool equalsArray(int* array1,int* reversearray,int n){
    for(int i=0;i<n;i++){
        if(array1[i]!=reversearray[i]){
            return false;
        }
    }
    cout<<"they are equal"<<endl;
    return true;
}
int* reverseArray(int* array1,int n){
    //int array[]={0};
    int* reverse1=new int[n]; 
    for(int i=0;i<n;i++){
        //create new array to store the reverse values
        //array[i]=array1[i-1]; (only works for minmax simple cases)
        reverse1[i]=array1[n-1-i];
    }
    return reverse1;
}