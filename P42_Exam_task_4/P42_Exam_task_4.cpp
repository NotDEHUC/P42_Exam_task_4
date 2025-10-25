#include <iostream>
#include <string>
#include <vector>

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

void showWord(char* arr, const char* word, int length) {
    for (size_t i = 0; i < length; i++)
    {
        if(arr[i] == word[i]) {
            cout << arr[i] << " ";
        }
        else if (word[i] == ' ')
        {
            cout << "  ";
        }
        else
        {
            cout << "_ ";
        }
    }
    cout << endl;
}

bool isContainLetter(char letter, const char* word, char* arr, vector<char>& used, int length) {
    int count = 0;



    for (size_t i = 0; i < used.size(); i++)
    {
        if (letter == used[i]) {
            cout << "Already used!!!" << endl;
            return true;
        }
    }



    used.push_back(letter);



    for (size_t i = 0; i < length; i++)
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

bool isWin(char* arr, const char* word, int length) {
    for (size_t i = 0; i < length; i++)
    {
        if (arr[i] != word[i]) {
            return false;
        }
    }
    return true;
}

char* getWord(int r, int& length) {
    FILE* myfile;

    int c;
    int line = 0;
    char* word;
    word = new char[100];

    if (fopen_s(&myfile, "D:\\words.txt", "r") == NULL) {
        while (!feof(myfile))
        {
            if (line == r) {
                while (true)
                {
                    c = fgetc(myfile);
                    if (c == -1) {
                        cout << "Game cracked... ";
                        return 0;
                    }

                    if (c != '\n')
                    {
                        if ((char)c == 'x')
                        {
                            c = 'a';
                        }
                        else if((char)c == 'y')
                        {
                            c = 'b';
                        }
                        else if ((char)c == 'z')
                        {
                            c = 'c';
                        }
                        else if(c != ' ')
                        {
                            c += 3;
                        }
                        
                        word[length] = c;
                        length++;
                    }
                    else
                    {
                        return word;
                    }
                }
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

int linesCount() {
    FILE* myfile;

    int line = 0;
    char* text = new char[100];

    if (fopen_s(&myfile, "D:\\words.txt", "r") == NULL)
    {
        while (!feof(myfile)) 
        {
            fgets(text, 100, myfile);
            line++;
        }
    }
    else
    {
        fopen_s(&myfile, "D:\\words.txt", "w");
        fprintf(myfile, "xmmib\n");
        fprintf(myfile, "qlaxv fp x dlla axv ql qxhb x txih");
        fprintf(myfile, "zlksbopxqflk\n");
        fprintf(myfile, "coxkzb\n");
        fprintf(myfile, "tfkalt\n");
        fprintf(myfile, "bjmilvbb\n");
        fclose(myfile);
        line = 7;
    }

    return line - 1;
}



int main()
{
    srand(time(0));

    char letter;
    int fail = 0;
    int length = 0;


    int r = rand() % linesCount();

    const char* word = getWord(r, length);

    char* arr = new char[length];
    vector<char> used;

    while (true)
    {
        if (isWin(arr, word, length)) {
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



        showWord(arr, word, length);

        for (size_t i = 0; i < used.size(); i++)
        {
            cout << used[i] << " ";
        }
        cout << endl;



        cout << "Your letter: ";
        cin >> letter;



        if (isContainLetter(letter, word, arr, used, length)) {
            continue;
        }
        else
        {
            fail++;
        }
    }

    //create word randomizer
}