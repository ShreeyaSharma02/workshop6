#include<iostream>
using namespace std;
extern int* readNumbers();
extern void printnum(int* array, int n);
extern int secondSmallestSum(int* array,int n);
int main(){
    int n=3;
    int* newnum=readNumbers();
    printnum(newnum,n);
    int secondsum=secondSmallestSum(newnum,n);
    cout << "Second smallest sum: " << secondsum << endl;
    delete[]newnum;
    return 0;
}