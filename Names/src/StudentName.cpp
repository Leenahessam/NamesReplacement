#include "StudentName.h"
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

StudentName::StudentName(string n)
{
    string lastname;
    int counter=0;
    for (int i=0;i<n.size();i++){
        if (n[i]==' ')
        counter++;
    }
    if (counter<2){
        int k;
        for (int i=0;i<n.size();i++){
            if (n[i]==' '){
              k=i+1;
             break;
             }
             }
          lastname=n.substr(k,n.size());
          name=n+" "+lastname;
            }
    else {
        name=n;
         }
}


string StudentName::getName(){
 return name;
}



void StudentName::print(){
 int num=0;
 int step=0;
 for (int i=0;i<name.size();i+=step){
   num++;
   cout<<num<<") ";
   step=0;
   for (int j=i;j<name.size();j++){
    if (name[j]!=' '){
        cout<<name[j];
        step++;
    }
    else if (name[j]=' '){
        cout<<endl;
        step++;
        break;;
    }
   }
 }
 cout<<endl;
}


string StudentName::Replace(int i,int j){
    string temp = "";
    vector <string> string2;
    for (int k = 0; k < name.size() ; k++){
        if (name[k]==' '){
          string2.push_back(temp);
          temp = "";
        }
        else {
            temp += name[k];
        }}
    string check;
    if (i-1 > string2.size() || j-1 > string2.size() || i == 0 || j == 0 || i == j || i > j){
        check="false";
        return check;
    }
    else {
    check = "true";
    cout << check <<endl;
    string temp2;
    temp2       = string2 [i-1];
    string2[i-1]= string2 [j-1];
    string2[j-1]= temp2;
    name = "";
    for (int k =0 ; k < string2.size(); k++)
        name+=string2[k]+" ";


    return (name);
}}





