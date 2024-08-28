#include<iostream>
using namespace std;
extern int* readNumbers();
extern bool equalsArray(int* array1,int* array2,int n);
int main(){
    int* num1=readNumbers();
    int n=5;
    equalsArray(num1,num1,n);
    delete[]num1;
    return 0;
}