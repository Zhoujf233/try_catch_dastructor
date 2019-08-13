//
//  fun.cpp
//  try_catch_destructor
//
//  Created by JF Zhou on 2019/8/13.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#include <stdio.h>
#include "Student.hpp"

void fun()
{
    Student stud1(1101,"Tan");
    stud1.get_data();
    Student stud2(0,"Li");
    stud2.get_data();
}
