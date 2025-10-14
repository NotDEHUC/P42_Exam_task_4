#include <iostream>

using namespace std;

void zeroFails() {
    cout << "-------------------------------------" << endl;
    cout << " |                                |" << endl;
    cout << " |                                |" << endl;
    cout << " |" << endl;
    cout << " |" << endl; 
    cout << " |" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << "-------------------------------------" << endl;
}

void oneFails() {
    cout << "-------------------------------------" << endl;
    cout << " |                                |" << endl;
    cout << " |                                |" << endl;
    cout << " |                               ( )" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << "-------------------------------------" << endl;
}

void twoFails() {
    cout << "-------------------------------------" << endl;
    cout << " |                                |" << endl;
    cout << " |                                |" << endl;
    cout << " |                               ( )" << endl;
    cout << " |                              _---_" << endl;
    cout << " |                             |     |" << endl;
    cout << " |                             |     |" << endl;
    cout << " |                             \\_____/" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << "-------------------------------------" << endl;
}

void threeFails() {
    cout << "-------------------------------------" << endl;
    cout << " |                                |" << endl;
    cout << " |                          _     |" << endl;
    cout << " |                          \\\\   ( )" << endl;
    cout << " |                           \\\\ _---_" << endl;
    cout << " |                            \\|     |" << endl;
    cout << " |                             |     |" << endl;
    cout << " |                             \\_____/" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << "-------------------------------------" << endl;
}

void fourFails() {
    cout << "-------------------------------------" << endl;
    cout << " |                                |" << endl;
    cout << " |                          _     |     _" << endl;
    cout << " |                          \\\\   ( )   //" << endl;
    cout << " |                           \\\\ _---_ //" << endl;
    cout << " |                            \\|     |/" << endl;
    cout << " |                             |     |" << endl;
    cout << " |                             \\_____/" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << "-------------------------------------" << endl;
}

void fiveFails() {
    cout << "-------------------------------------" << endl;
    cout << " |                                |" << endl;
    cout << " |                          _     |     _" << endl;
    cout << " |                          \\\\   ( )   //" << endl;
    cout << " |                           \\\\ _---_ //" << endl;
    cout << " |                            \\|     |/" << endl;
    cout << " |                             |     |" << endl;
    cout << " |                             \\_____/" << endl;
    cout << " |                             //" << endl;
    cout << " |                            //" << endl;
    cout << " |                           //" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << "-------------------------------------" << endl;
}

void sixFails() {
    cout << "-------------------------------------" << endl;
    cout << " |                                |" << endl;
    cout << " |                          _     |     _" << endl;
    cout << " |                          \\\\   ( )   //"<< endl;
    cout << " |                           \\\\ _---_ //" << endl;
    cout << " |                            \\|     |/" << endl;
    cout << " |                             |     |" << endl;
    cout << " |                             \\_____/" << endl;
    cout << " |                             //   \\\\" << endl;
    cout << " |                            //     \\\\" << endl;
    cout << " |                           //       \\\\" << endl;
    cout << " |" << endl;
    cout << " |" << endl;
    cout << "-------------------------------------" << endl;
}

bool isContainLetter(char letter, char* word) {
    for (size_t i = 0; i < strlen(word) + 1; i++)
    {
        if (letter == word[i]) {
            return true;
        }
    }
    return false;
}

int main()
{
    const char* word = "hydrogen";
    char letter;
    int fail = 0;
    while (true)
    {
        if (fail == 0) {

        }
        cout << "Your letter: ";
        cin >> letter;
        if (isContainLetter) {

        }
        else
        {
            fail++;
        }
    }
}