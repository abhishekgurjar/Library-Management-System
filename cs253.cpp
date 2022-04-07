#include<bits/stdc++.h>
using namespace std;

class User
{
    public: 

    string Name;
    long int ID;
    string password;



}


class Professor : public User
{
    public:
    
    int Fine_amount;
    string[] Books;

    int Calculate_fine();
    void Clear_fine_amount();


}

class Student : public User
{
    public:
    
    int Fine_amount;
    string[] Books;

    int Calculate_fine();
    void Clear_fine_amount();
    

}

class Librarian : public User
{
    
}