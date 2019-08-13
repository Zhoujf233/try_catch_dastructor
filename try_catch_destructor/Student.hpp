//
//  Student.hpp
//  try_catch_destructor
//
//  Created by JF Zhou on 2019/8/13.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#ifndef Student_h
#define Student_h
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    Student(int n,string nam)
    {
        cout<<"constructor -"<<n<<endl;
        num  = n;name = nam;
    }
    ~Student()
    {
        cout<<"destructor -"<<num<<endl;
    }
    void get_data();
private:
    int num;
    string name;
};


#endif /* Student_h */
