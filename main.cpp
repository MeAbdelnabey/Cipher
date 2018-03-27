#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <string>
// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Baconian Cipher.cpp
// Last Modification Date: 3/3/2018
// Author1 and ID and Group: Mohamed Ahmed G14 20170364
// Teaching Assistant: Eng. : Ibrahim Zidan
// Purpose:Cipher or decipher a message

using namespace std;
int main()
{
while (true)
{

    int select;
    string xd,letter[]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    string code[]={"aaaaa","aaaab","aaaba","aaabb","aabaa","aabab","aabba","aabbb","abaaa","abaab","ababa","ababb","abbaa","abbab","abbba","abbbb","baaaa","baaab","baaba","baabb","babaa","babab","babba","babbb","bbaaa","bbaab"};
    string msg;
    int choice;
    cout<<" Ahln ya user ya 7abibi"<<endl;
    cout<<" What do you wanna today ??"<<endl;
    cout<<"1- Cipher                     2- Decipher"<<endl;
    cin>>choice;
    if (choice==1)
    {   cout<<"enter a message ... Please turn on CAPS LOCK or your message will be ignored  \n"<<endl;
        cin.ignore();
        getline(cin,msg);
        for (int ic=0;ic<msg.length();)
          { if (msg[ic]==' ')
              { cout<<" ";
                ic++;
                continue ;}
            else {string tempc ;int k=0;
               for(k;k<26;k++)
                { tempc=msg.substr(ic,1);
                if (tempc==letter[k])
                {cout<<code[k];}
                }
                ic++;}}}

    else if (choice==2)
    {

    int j=0;
    cout<<" Now you'll decipher"<<endl;
    cin.ignore();
    getline(cin,xd);
    for (int id=0; id<xd.length();)
    {
        if(xd[id]==' ')
        {
            id++;
            cout<<" ";
            continue ;
        }
        else{
            string temp = xd.substr(id,5);
            for (j=0; j < 26 ; j++){
               if (temp==code[j])
               {
                   cout<<letter[j];}}
            id+=5;}}}
    cout<<"\n";
    cout <<"Type 1 to continue or 0 to stop :       "<<endl;
    cin>>select;
    if (select==1)
        {continue;}
    else if (select==0)
    {
        break;
    }
    }
    return 0;
}
