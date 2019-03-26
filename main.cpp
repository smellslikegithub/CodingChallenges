#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class Solution
{

public:
    void ReversingMemory(char collection[])
    {
        char temp = ' ';
        int counter = 0;
        for(int i=strlen(collection)-1; i>strlen(collection)/2; i--)
        {
            temp = collection[i];
            collection[i] = collection[counter];
            collection[counter] = temp;
            counter++;
        }

        cout<<counter;
    };

    int countSubstring(string originalString, string subString)
    {
        if (subString.length() == 0)
            return 0;
        int count = 0;
        for (int offset = originalString.find(subString); offset != originalString.npos;
                offset = originalString.find(subString, offset + subString.length()))
        {
            ++count;
        }
        cout<< count;
    }

    int countSubstringR(string originalString, string subString)
    {

        int sizeOfOriginalString = originalString.length();
        int sizeOfSubstring = subString.length();

        if(sizeOfOriginalString < sizeOfSubstring)
        {
            return 0;
        }

        else if (originalString.substr(0,sizeOfSubstring) == subString)
        {

            return countSubstringR(originalString.substr(sizeOfSubstring-1), subString) + 1;
        }

        else{

            return countSubstringR(originalString.substr(sizeOfSubstring-1), subString);
        }


    }
};



int main()
{

    Solution mySolution;
    //char collection[] = { 'H', 'e', 'l', 'l', 'o',' ', 'W', 'O','R','L','D' };

    //mySolution.ReversingMemory(collection);
    //mySolution.countSubstring("Appendix","p");


    return 0;
}
