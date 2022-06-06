#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

void getRow(string, int);

const int MAX_ROW = 4;
const int MAX_COL = 4;
int arr[MAX_ROW][MAX_COL];
int main()
{
    ifstream file;
    string line;

    int count = 0, total = 0;
    double avg = 0.0;

    file.open("values.txt");
    if(!file)
    {
        cout << "Error: Couldn't open values.txt" << endl;
        exit(1);
    }

    while(!file.eof())
    {
        getline(file, line);
        getRow(line, count);
        count++;
    }

    for (int i = 0; i < MAX_ROW; i++)
    {
        int total = 0;
        for (int j = 0; j < MAX_COL; j++)
        {
            total += arr[i][j];
        }

        cout << "Row Total " << i + 1 << ": " << total << endl;
    }

    for (int i = 0; i < MAX_COL; i++)
    {
        int total = 0;
        for (int j = 0; j < MAX_ROW; j++)
        {
            total += arr[j][i];
        }

        cout << "Col Total " << i + 1 << ": " << total << endl;
    }

    for (int i = 0; i < MAX_ROW; i++)
    {
        for (int j = 0; j < MAX_COL; j++)
        {
            total += arr[i][j];
        }
    }
    avg = total/(MAX_ROW * MAX_COL);
    cout << "Array Average: " << avg << endl;
    
    file.close();

    return 0;
}

void getRow(string str, int n)
{
    string subOne, subTwo, subThree, subFour;
    
    subOne = str.substr(0, str.find(','));
    arr[n][0] = stoi(subOne);
    subOne.erase();

    str.erase(0, str.find(',') + 1);
    
    subTwo = str.substr(0, str.find(','));
    arr[n][1] += stoi(subTwo);
    subTwo.erase();

    str.erase(0, str.find(',') + 1);

    subThree = str.substr(0, str.find(','));
    arr[n][2] += stoi(subThree);
    subThree.erase();

    str.erase(0, str.find(',') + 1);

    subFour = str.substr(0, str.length());
    arr[n][3] += stoi(subFour);
    subFour.erase();
}

