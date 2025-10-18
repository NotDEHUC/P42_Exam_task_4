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

void showWord(char* arr, const char* word) {
    for (size_t i = 0; i < strlen(word); i++)
    {
        if(arr[i] == word[i]) {
            cout << arr[i] << " ";
        }
        else
        {
            cout << "_ ";
        }
    }
    cout << endl;
}

bool isContainLetter(char letter, const char* word, char* arr) {
    for (size_t i = 0; i < strlen(word) + 1; i++)
    {
        if (letter == word[i] && letter != arr[i]) {
            arr[i] = letter;
            return true;
        }
    }
    return false;
}

bool isWin(char* arr, const char* word) {
    for (size_t i = 0; i < strlen(word); i++)
    {
        if (arr[i] != word[i]) {
            return false;
        }
    }
    return true;
}
int main()
{
    const char* word = "word";
    char letter;
    int fail = 0;

    char* arr = new char[strlen(word)];

    while (true)
    {
        if (isWin(arr, word)) {
            cout << "Congratulations!!!";
            return false;
        }

        if (fail == 0) {
            zeroFails();
        }
        else if (fail == 1) {
            oneFails();
        }
        else if (fail == 2) {
            twoFails();
        }
        else if (fail == 3) {
            threeFails();
        }
        else if (fail == 4) {
            fourFails();
        }
        else if (fail == 5) {
            fiveFails();
        }
        else if (fail == 6) {
            cout << "Game over!:(" << endl;
        }

        showWord(arr, word);

        cout << "Your letter: ";
        cin >> letter;

        if (isContainLetter(letter, word, arr)) {
            continue;
        }
        else
        {
            fail++;
        }
    }

    //create word randomizer
}