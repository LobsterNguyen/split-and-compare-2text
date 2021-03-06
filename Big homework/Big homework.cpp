﻿#include<sstream>
#include <unordered_map> 
#include<iostream>
using namespace std;

// Prints frequencies of individual words in str 
void printFrequencies(const string& str)
{
    // declaring map of <string, int> type, each word 
    // is mapped to its frequency 
    unordered_map<string, int> wordFreq;

    // breaking input into word using string stream 
    stringstream ss(str);  // Used for breaking words 
    string word; // To store individual words 
    while (ss >> word)
        wordFreq[word]++;

    // now iterating over word, freq pair and printing 
    // them in <, > format 
    unordered_map<string, int>::iterator p;
    for (p = wordFreq.begin(); p != wordFreq.end(); p++)
        cout << "(" << p->first << ", " << p->second << ")\n";
}

// Driver code 
int main()
{
    unordered_map<string, int> wordFreq;

    // breaking input into word using string stream 
    // Used for breaking words 
    string word="a"; // To store individual words   
    wordFreq[word] = 1;
    cout << wordFreq[word];
    return 0;
}