#ifndef STUDENTNAME_H
#define STUDENTNAME_H
#include <cstring>
#include <iostream>
using namespace std;


class StudentName
{
    private:
        string name;
    public:
        StudentName(string);
        string getName();
        void print();
        string Replace (int,int);

};

#endif // STUDENTNAME_H
