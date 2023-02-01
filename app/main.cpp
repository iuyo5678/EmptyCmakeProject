/* -*- C++ -*- */

// Time-stamp: <2013-09-06 00:42:30 Friday by zhangguhua>

/**
 * @file main.cpp
 * @author Zhang Guhua
 */

#include <iostream>
#include <vector>
#include "lib.h"

using namespace std;

int main(int argc, char * argv[])
{
    struct Foo{
        string name;
    };
    std::vector<std::unique_ptr<Foo>> foos;
    foos.emplace_back(new Foo());
    cout <<"lib add ans : " <<  lib_add(2, 3) << endl;
}
