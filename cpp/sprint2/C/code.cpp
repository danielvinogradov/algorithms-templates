// ! Remove define before submitting !
#define local

#ifndef local
#include "solution.h"
#endif
#ifdef local
#include <cassert>
#include <string>
#endif



#ifdef local

struct Node {  
    std::string value;  
    Node* next;  
    Node(const std::string &value, Node* next) : value(value), next(next) {
        
    }
};
#endif


Node* solution(Node* head, int idx) {
    // Your code
    // ヽ(´▽`)/
}

#ifdef local
void test() {
    Node node3("node3", nullptr);
    Node node2("node2", &node3);
    Node node1("node1", &node2);
    Node node0("node0", &node1);
    Node* new_head = solution(&node0, 1);
    assert(new_head == &node0);
    assert(new_head->next == &node2);
    assert(new_head->next->next == &node3);
    assert(new_head->next->next->next == nullptr);
    // result is : node0 -> node2 -> node3
}

int main() {
    test();
}
#endif