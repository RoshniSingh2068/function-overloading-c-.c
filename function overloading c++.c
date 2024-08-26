// function overloading
// multiple function can have the same name with the different parameter

#include <iostream>
using namespace std;
int plusFunc(int x, int y){
return x+y;
}

double plusFuncdouble (double x, double y){ // plusFunc does not have built in function
    return x+y;
}

int main(){
    int myNum1 = plusFunc (8,5);
    double myNum2 = plusFunc(13.4, 4.6);
    cout << " Int :"<<myNum1<<"\n";
    cout << "Double:"<<myNum2 <<"\n";
    return 0;
}



