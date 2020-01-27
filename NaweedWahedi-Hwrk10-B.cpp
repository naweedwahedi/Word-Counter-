// Naweed Wahedi
// Homework-10B
// This program  accepts a pointer to a C-string as an argument 
// and returns the number of words contained in the string. 

#include <iostream>
#include <cstring>
using namespace std;
int cw( char *cunt )
{
     int count=1;
     while( *cunt )
     {
         if(*cunt == ' ')
         {
           count++;
         }
         cunt++;
     }
     // Return back to counter function.
     return count;
}
int main()

{
    char max[100];       //Max number of words
    cout <<"\n\tNaweed Wahedi " <<endl;
    cout <<"Enter a string, 100 or less characters: \n" ;
    cin.getline(max, 100);
    int charac =cw(max);
    cout <<"\nThe number of words in that string is:  "<< charac <<endl<<endl;

    //return 0 to mark successful termination
    return 0;

}



