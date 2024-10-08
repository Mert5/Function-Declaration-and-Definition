#include <iostream>

// REFERENCE => https://www.youtube.com/watch?v=8jLOx1hD3_o

int max(int x, int y);  // Function declaration, prototype

int min(int x, int y);  // variable names aren't really important in function declaration side.

int inc_mult(int , int );   // you can even leave variable names empty in declaration

int main(){

    int m{66};
    int n{56};
    int compare = max(m,n);
    int little = min(m,n);

    std::cout << "Maximum is : " << compare << std::endl;
    
    std::cout << "Minimum is : " << little << std::endl;

    std::cout << "Multiplication of " << m+1 << " and " << n+1 << " is : " << inc_mult(m,n) << std::endl;

    return 0;
}

int max(int x, int y){  // Function definition - shows up after main
    if(x>y)
        return x;
    else
        return y;
}

int min(int x, int y){  // variable names are important in function definition side.
    if(x>y)
        return y;
    else
        return x;
}

int inc_mult(int x, int y){

    int result = (++x) * (++y);

    return result;      // or just =>  return (++x) * (++y);

}
