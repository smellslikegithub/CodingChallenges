#include <stdio.h>

unsigned int numBitsSet(unsigned int value)
{
// ToDo: implement function
    unsigned int counter = 0;
    while(value){
       counter += value & 1;
        value >>= 1;
    }
    return counter;
}
int main(int argc, char** argv)
{
    unsigned int count;
    for (count = 0; count<32; count++)
    {
        printf("Number of bits in %d: %u\n", count, numBitsSet(count));
    }
    return 0;
}
