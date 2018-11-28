#include <iostream> // this gets the input output stream
using namespace std; // this uses the standard namespace
// this is whitespace
int main() // this gets the main c++ library
{ // this is an open bracket
    int i,j,k,space=40; // to print the pyramid in center, you can also increase the # of spaces
//this is whitespace
for (int i=0;i<=15;i++) // this does stuff - start of original code
{ // this is an open bracket
    for (int k=0;k<space;k++) // this also does stuff
{ // this is another open bracket, get used to it you see them a lot
    cout<<" "; // this makes a blank space
} // another closed bracket
for (int j=0;j<2*i-1;j++) // this does some stuff
{ // this is an open bracket
    cout<<"*"; // this prints asterisks to the screen
} // this is an closed bracket
    space--; // this makes a negative space?
    cout<<endl; // this ends the line
} // this is a closed bracket
// this is whitespace
for (int i=15;i>=0;i--) //Duplicated - change i = 0 to i = 15 and i<=15 to i>=0 and i++ to i--
{ // this is an open bracket
    for (int k=48;k>=space;k--) // change k=0 to k=48, k<space to k>=space and k++ to k--
{ // this is an open bracket
    cout<<" "; // this makes a blank space
} // this is a closed bracket
for (int j=0; j<2*i-1; j++) // this stays the same, im not sure what this does
{ // this is an open bracket
    cout << "*"; //this makes the asterisks
} // this is a closed bracket
    space--; // idk about this either
    cout << endl; // this ends the line
} // this is a closed bracket
//cin.get(); /*use this to wait for a keypress*/
//}
return 0; // this REALLY ends the program for good
} // this is a closed bracket