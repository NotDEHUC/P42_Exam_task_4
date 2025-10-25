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
    int count = 0;
    for (size_t i = 0; i < strlen(word) + 1; i++)
    {
        if (letter == word[i]) {
            arr[i] = letter;
            count++;
        }
    }
    if (count > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
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



char* getWord(int r) {
    FILE* myfile;

    int c;
    int line = 0;
    char* word;
    word = new char[100];
    int i = 0;

    if (fopen_s(&myfile, "C:\\Users\\student\\source\\repos\\words.txt", "r") == NULL) {
        while (!feof(myfile))
        {
            if (line == r) {
                while (true)
                {
                    c = fgetc(myfile);
                    if (c != '\n')
                    {
                        word[i] = c;
                    }
                    else
                    {
                        return word;
                    }
                }
                return word;
            }
            else
            {
                c = fgetc(myfile);

                if (c == '\n') {
                    line++;
                }
                else
                {
                    continue;
                }
            }
        }
        return nullptr;
    }
    else
    {
        return nullptr;
    }
}



int main()
{
    //const char* word = "word";
    char letter;
    int fail = 0;

    int r = rand() % 5;

    const char* word = getWord(r);

    char* arr = new char[strlen(word) + 1];

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