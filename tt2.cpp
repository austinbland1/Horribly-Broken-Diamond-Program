#include <sstream>
using namespace std;

void printSpaces(int howMany) {
    for(int i = 0; i < howMany; i++) cout << " ";
}

void figure(int size) {
    bool oddSize = size % 2 == 1;
    int center = size / 2;
    int spaces = size / 2;
    // If figure is of an odd size adjust center
    if (oddSize) {
        center++;
    } else { // Else if figure is of even size adjust spaces
        spaces--;
    }

    for (int i = 1; i <= center; i++) {
        printSpaces(spaces);
        for(int j = 0; j <  1 + (i - 1) * 2; j++) cout << "*";
        cout << endl;
        spaces--;
    }

    spaces = oddSize ? 1 : 0; // If the figure's size is odd number adjust spaces to 1
    center -= oddSize ? 1 : 0; // Adjust center if it's an odd size figure
    for(int i = center; i >= 1; i--) {
        printSpaces(spaces);
        for(int j = 0; j <  1 + (i - 1) * 2; j++)
           cout << "*";
        cout << endl;
        spaces++;
    }

}

int main() {
    int value = 0;
    while(value < 3) {
        cout << "Please enter in a value (>= 3): ";
        cin >> value;
        cout << endl;
    }
    figure(value);
    return 0;
}