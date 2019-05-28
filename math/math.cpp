#include "math.h"

int sum (int a, int b) {
    return a + b;
}

int diff (int a, int b) {
    return a - b;
}

int multiply (int a, int b) {
    return a * b;
}

int pow (int a, int b) {
   int result = 1;
   int i = 0;
   while( i < b ){
       result = result * a;
       i++;
   }
    return result;
}

int is_odd(int a) {
    if( a % 2 ){
        return true;
    }
    return false;

}

int max (int a, int b){
    if (a > b){
        return a;
    }
    return b;

}

int min (int a, int b){
    if (a < b){
        return a;
    }
    return b;

}

int abs (int a) {
    if (a > 0){
        return a;
    }
    return -a;
}

