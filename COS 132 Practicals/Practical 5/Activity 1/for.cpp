#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool validate_Input(string);
bool validate_Number(string);
char get_Symbol(string);
int get_Number(string);
int perform_Calculation(char, int);

int main()
{
    string input;
    int result = 0;

    cout << "Enter a pair: "; //Ask the user to enter a calculation and a number.
    getline(cin, input);

    if (!validate_Input(input))
    {
        cout << "Invalid input received." << endl;
        exit(1);
    }

    result = perform_Calculation(get_Symbol(input), get_Number(input));

    cout << "Result: " << result << endl;

    return 0;
}

bool validate_Input(string in)
{
    bool result = false;

    if ((in[0] == '-') || (in[0] == '+') || (in[0] == '*'))
    {
        if (in[1] == ',')
        {
            if (validate_Number(in))
            {
                result = true;
            }
            else
            {
                result = false;
            }
        }
        else
        {
            result = false;
        }
    }
    else
    {
        result = false;
    }

    return result;
}

bool validate_Number(string in)
{
    string number = "";
    bool result = false;

    for (int i = 2; i < in.length(); i++)
    {
        number += (in[i]);
    }

    for (int i = 0; i < number.length(); i++)
    {
        if (!isdigit(number[i]))
        {
            result = false;
        }
        else
        {
            result = true;
        }
    }

    return result;
}

char get_Symbol(string in)
{
    char result = in[0];
    return result;
}

int get_Number(string in)
{
    string number = "";
    stringstream N;
    int result = 0;

    for (int i = 2; i < in.length(); i++)
    {
        number += (in[i]);
    }

    N << number;
    N >> result;

    return result;
}

int perform_Calculation(char sym, int num)
{
    int result = num;

    if (sym == '+')
    {
        for (int i = 0; i < num; i++)
        {
            result += num;
        }
    }

    if (sym == '-')
    {
        for (int i = 0; i < num; i++)
        {
            result -= num;
        }
    }

    if (sym == '*')
    {
        for (int i = 0; i < num; i++)
        {
            result *= num;
        }
    }

    return result;
}