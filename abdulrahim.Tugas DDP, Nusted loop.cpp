#include <iostream>
using namespace std;

int main()
{
	
	
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i % 3 == 0 || j % 3 == 0) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
    return 0;
}

