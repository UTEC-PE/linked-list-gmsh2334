#include <iostream>
#include "list.h"
#include "node.h"

using namespace std;

int main() {
    List<int> GM;
    GM.push_front(8);
    GM.push_front(2);
    GM.push_front(6);
    GM.push_front(9);
    GM.print();
    GM.print_reverse();
    GM.front();
    GM.back();
    GM.push_front(4);
    GM.push_back(7);
    GM.print();
    GM.pop_front();
    GM.pop_back();
    GM.print();
    GM.get(2);
    List<int> SH;
    SH.push_front(7);
    SH.push_front(5);
    SH.push_front(3);
    SH.push_front(1);
    SH.print();
    GM.concat(SH);
    GM.print();
    GM.empty();
    GM.size();
    GM.clear();
