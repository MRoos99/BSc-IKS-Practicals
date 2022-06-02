#include <iostream>
#include <string>

using namespace std;

bool validateInput(string);
string caseDown(string);
string caseUp(string);
string checkPrimSec(string);
int findColour(string);

const int MAX = 6;

string colours[MAX] = {"green", "yellow", "orange", "red", "purple", "blue"};

int main()
{
    string input = "";

    cout  << "Input a colour: ";
    getline(cin, input);

    if (!validateInput(caseDown(input)))
    {
        cout << "Colour not found!" << endl;
        exit(1);
    }

    int n = 0;

    cout << "Input a number: ";
    cin >> n;

    string check = checkPrimSec(input);
    string output = "";
    int pos = findColour(caseDown(input));

    if (check == "primary")
    {
        switch (n)
        {
        case 1:
            output = colours[1] + "," + colours[2] + "," + colours[3] + "," + colours[4] + "," + colours[5] + "," + colours[0];
            break;
        case 2:
            output = input;
            break;
        case 3:
            if (pos == 5)
            {
                output = colours[1];
            }
            else
            {
                output = colours[pos + 2];
            }
            break;
        default:
            break;
        }
    }

    if (check == "secondary")
    {
        switch (n)
        {
        case 1:
            output = colours[0] + "," + colours[2] + "," + colours[4];
            break;
        case 2:
            output = caseDown(input);
            break;
        case 3:
            if (pos == 4)
            {
                output = colours[0];
            }
            else
            {
                output = colours[pos + 2];
            }
            break;
        default:
            break;
        }
    }

    cout << output << endl;

    return 0;
}

bool validateInput(string in)
{
    bool result = false;

    for (int i = 0; i < MAX; i++)
    {
        if (in == colours[i])
        {
            result = true;
            break;
        }
        else
        {
            result = false;
        }
    }

    return result;
}

string caseDown(string in)
{
    string out = "";

    for (int i = 0; i < in.length(); i++)
    {
        out += tolower((in[i]));
    }

    return out;
}

string checkPrimSec(string in)
{
    string result = "";

    if (in == colours[1] || in == colours[3] || in == colours[5])
    {
        result = "primary";
    }

    if (in == colours[0] || in == colours[2] || in == colours[4])
    {
        result = "secondary";
    }

    return result;
}

string caseUp(string in)
{
    string out = "";

    for (int i = 0; i < in.length(); i++)
    {
        out += toupper((in[i]));
    }

    return out;
}

int findColour(string in)
{
    int i = 0;

    for (i = 0; i < MAX; i++)
    {
        if (in == colours[i])
        {
            break;
        }
    }

    return i;
}