#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// Function prototype
void printHighestFrequency(map<string, int> FW, int highestFrequency);

void printFrequency(string st)
{
    // Each word is mapped to its frequency
    map<string, int> FW;

    // Used for breaking words
    stringstream ss(st);

    // To store individual words
    string Word;

    while (ss >> Word)
        FW[Word]++;

    map<string, int>::iterator m = FW.begin();
    int val = m->second;

    for (m = FW.begin(); m != FW.end(); m++)
    {
        if (val < m->second)
        {
            val = m->second;
        }
    }

    printHighestFrequency(FW, val);
}

void printHighestFrequency(map<string, int> FW, int highestFrequency)
{
    cout << "Word(s) with highest frequency:\n";
    for (auto it = FW.begin(); it != FW.end(); it++)
    {
        if (it->second == highestFrequency)
        {
            cout << it->first << "\n";
           
        }
    }
}

// Driver code
int main()
{
    string s = "hey hi hlo hi hlo hi welcome";
    printFrequency(s);
    return 0;
}
