#include<iostream>
using namespace std;
extern int* readNumbers();
extern void hexDigits(int* array,int n);
int main(){
    int* number=readNumbers();
    hexDigits(number,10);
    delete[] number;
    return 0;
}