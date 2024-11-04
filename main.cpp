//  Denver Robinson 10/21/24 CH9EX2
//  The following function uses reference variables as parameters. Rewrite the function so it uses pointers instead of reference variables, and then demonstrate the function in a complete program.

#include <iostream>
using namespace std;

int doSomething(int x, int y);

int main() {
    int x, y, result;
    
    cout << "Enter value for x" << endl;
    cin >> x;
    cout << "Enter value for y" << endl;
    cin >> y;
    
    result = doSomething(x, y);
    
    cout << endl << "The result is: " << result << endl;
    
    return 0;
}

 
int doSomething(int x, int y){
    int *xptr = &x;
    int *yptr = &y;
    
    int temp = *xptr;
    *xptr = *yptr * 10;
    *yptr = temp * 10;
    
    return x + y;
}

 

/*
int main(){
    int x, y;
    
    cout << "enter value for x" << endl;
    cin >> x;
    cout << "enter value for y" << endl;
    cin >> y;
    
    int *xptr = &x;
    int *yptr = &y;
    
    int temp = *xptr;
    *xptr = *yptr * 10;
    *yptr = temp * 10;
    
    cout << "The result should be: " << x << ", " << y << endl;
    
    return 0;
}
*/
