#include <iostream>
using namespace std;
int main(){
    //bitwise operators
    //convert into binary, do ops and back to decimal
    cout<<(4&5)<<endl; //only 1&1=1, others 0
    cout<<(4|5)<<endl; //only 0|0=0 others 1
    cout<<(4^5)<<endl; //XOR, same=0, diff=1

    cout<<(4<<2)<<endl; //leftshift 4 (in binary) by 1 place and fill empty with 0
    //if 4=a, 2=b, a<<b means a* (2 power b)

    cout<<(10>>1)<<endl; //rightshift......
    ////if 10=a, 1=b, a>>b means a/ (2 power b)

    // IMP: for eg 10 -> 1010>>1, [0101]0. First zero is to fill the space of 1,
    // last zero is of 10. Binary filled from right to left, so last 0 has no space
    // and it gets out.
    //long int, long long int, short int etc
    //signed int range- -2^32 to 2^31-1
    //unsigned int range- 0 to 2^32-1 (only positive numbers)
    return 0;
}