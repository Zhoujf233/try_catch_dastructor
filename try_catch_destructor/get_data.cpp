//
//  get_data.cpp
//  try_catch_destructor
//
//  Created by JF Zhou on 2019/8/13.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#include <iostream>
using namespace std;
#include "Student.hpp"

void Student::get_data()
{
    if(num ==0)throw num;
    else cout<<num<<" "<<name<<endl;
    cout<<"in get_data()"<<endl;
}
