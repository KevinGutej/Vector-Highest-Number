#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>
#include <fstream>
#include <cstdlib>
using namespace std;

void random_data(vector<int>&data1,vector<int>&data2)
{
    srand(time(NULL));
    for(int i=0;i<10;i++)
    {
        data1[i]=rand()%11;
    }
    srand(time(NULL));
    for(int i=0;i<10;i++)
    {
        data2[i]=rand()%9;
    }
}
int sort_data1(vector<int>&data1)
{
    int max=*max_element(data1.begin(), data1.end());
    cout <<  max<< endl;
    return max;
}


int sort_data2(vector<int>&data2)
{
    int max= *max_element(data2.begin(), data2.end());
    cout <<max<< endl;
    return max;
}

int math(int base,int power)
{

    if (power!= 0)
        return (base*math(base, power-1));
    else
        return 1;
}

int main()
{
    vector<int>data1(10);
    vector<int>data2(10);
    fstream file;
    int base;
    int i;
    random_data(data1,data2);
    cout << "VECTOR DATA1: " << endl;
    for(int i=0;i<data1.size();i++)
    {
        cout << "Element number " << i << ": " << data1[i] << endl;
    }
   int maxa= sort_data1(data1);
    cout << endl;
    cout << "VECTOR DATA2: " << endl;
    for(int i=0;i<data2.size();i++)
    {
        cout << "Element number " << i << ": " << data2[i] << endl;
    }
    int maxb=sort_data1(data2);

    file.open("Math_outcome.txt",ios::out);
    {
        file << "Base number is: " << base << endl;
    }
    file.close();
    system("pause");
    return 0;
}
