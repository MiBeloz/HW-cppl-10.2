#pragma once

#include <iostream>
#include <memory>


class node
{
public:
    int m_value;
    std::shared_ptr<node> parent;

    node(int value) : m_value{ value } {};

    ~node() { std::cout << "destructor called\n"; }
};
