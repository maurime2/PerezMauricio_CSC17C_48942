/* 
 * File:   main.cpp
 * Author: Mauricio S. Perez
 *
 * Created on September 23, 2015, 8:29 PM
 */

//System Libraries
#include<iostream>
using namespace std;

//User Libraries

//Global Variables

//Function Prototypes
int coeff(int, int, int &); //int & is a refrence variable


//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int nRows=5;
    int nCalls=0;       //Calls
    
    //Loop on rows and columns
    for(int row=1;row<=nRows;row++){
        for(int col=1;col<=row;col++){
            cout<<coeff(row,col,nCalls)<<" ";
        }
        cout<<endl;
    }
    cout<<"Number of recursive calls = "<<nCalls<<endl;
    
    //Exit Stage Right
    return 0;
}

//Functions
int coeff(int r, int c, int &n){
    if(r<1||c<1)return 0;
    if(c==1)return 1;
    if(r==c)return 1;
    int n1=0,n2=0;
    int x = coeff(r-1,c-1,n1)+coeff(r-1,c,n2);
    //cout<<"n1="<<endl
    n =n1+n2+2;
    return x;
}
