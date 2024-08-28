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
void hexDigits(int* array,int n){
   for (int i = 0; i < n; ++i) {
        char hexDigit;
        switch (array[i]) {
            case 0: hexDigit = '0'; break;
            case 1: hexDigit = '1'; break;
            case 2: hexDigit = '2'; break;
            case 3: hexDigit = '3'; break;
            case 4: hexDigit = '4'; break;
            case 5: hexDigit = '5'; break;
            case 6: hexDigit = '6'; break;
            case 7: hexDigit = '7'; break;
            case 8: hexDigit = '8'; break;
            case 9: hexDigit = '9'; break;
            case 10: hexDigit = 'A'; break;
            case 11: hexDigit = 'B'; break;
            case 12: hexDigit = 'C'; break;
            case 13: hexDigit = 'D'; break;
            case 14: hexDigit = 'E'; break;
            case 15: hexDigit = 'F'; break;
            default: hexDigit = '?'; // Should not happen with valid input
        }
        cout << i << " " << array[i] << " " << hexDigit <<endl;
   }
}