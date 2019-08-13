//
//  main.cpp
//  try_catch_destructor
//
//  Created by JF Zhou on 2019/8/13.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[])
{
    void fun();
    cout<<"main begin"<<endl;
    cout<<"call fun()"<<endl;
    try {
        fun();
    } catch (int n) {
        cout<<"num = "<<n<<",error!"<<endl;
    }
    cout<<"main end"<<endl;
    return 0;
}
