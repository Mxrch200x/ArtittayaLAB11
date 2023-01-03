#include <iostream>
#include <iomanip>
#include<fstream>
#include<cstdlib>
#include<cmath>
#include<string>
using namespace std;

int main(){
    double N = 0;
    double sum = 0, Mean, Standarddeviation, MM;
    ifstream source;
    source.open("score.txt");

    string textline;
    while (getline(source, textline))
    {
        sum += stod(textline);
        MM += pow(stod(textline),2);
        N++;
    }
    Mean = sum / N;
    Standarddeviation = sqrt(((1/N)*MM) - pow(Mean,2));

    cout << "Number of data = "<< N << endl;
    cout << setprecision(3);
    cout << "Mean = "<< Mean << endl;
    cout << "Standard deviation = "<< Standarddeviation;
    return 0;
}