// PRECOMPILER DIRECTIVES
#include <cstdlib>
#include <iostream>
#include <cstring>

// GLOBALS
const char *NUM_WORD[] = {"zero", "one", "two", "three", "four", "five",
                                       "six", "seven", "eight", "nine"};

// MAIN
int main(int argc, char *argv[])
{
    using namespace std;

    int stringLen;

    // Print instructions if no arguements
    if(argc < 2)
    {
        cout << "txt2rgn <string> <string> ... <string> " << endl;
        return EXIT_FAILURE;
    }

    // Convert to regional indicator
    for(int j = 1; j < argc; j++)
    {
        stringLen = strlen(argv[j]);
        for(int i = 0; i < stringLen; i++)
        {
            // Uppercase alpha
            if((int)argv[j][i] >= 'A' && (int)argv[j][i] <= 'Z')
            {
                cout << ":regional_indicator_";
                cout << (char)tolower(argv[j][i]);
                cout << ": ";
            }
            // Lowercase alpha
            else if((int)argv[j][i] >= 'a' && (int)argv[j][i] <= 'z')
            {
                cout << ":regional_indicator_";
                cout << argv[j][i];
                cout << ": ";
            }
            // Numberical
            else if((int)argv[j][i] >= '0' && (int)argv[j][i] <= '9')
            {
                cout << ':' << NUM_WORD[(int)argv[j][i] - '0'] << ": ";
            }
        }
        cout << ' ';
    }
    cout << endl;
    return EXIT_SUCCESS;
}