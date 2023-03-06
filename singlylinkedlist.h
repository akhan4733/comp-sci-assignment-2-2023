#include <memory>
#include <iostream>


//defines the node 
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {};
    ListNode(int x) : val(x), next(nullptr) {};
    ListNode(int x, ListNode *next) : val(x), next(next) {};
};

//public and private class for SinglyLinkedList
class SinglyLinkedList {
private:
    struct ListNode {
        int value;
        std::shared_ptr<ListNode> next;
        ListNode(int val) : value(val), next(nullptr) {}
    };

    std::shared_ptr<ListNode> head; //
    std::shared_ptr<ListNode> tail;

    std::shared_ptr<ListNode> find (int val) const;

public:
    SinglyLinkedList();

    void print_list () const; //print the lis
    void push_back (int val);
    void pop_back ();
    void push_front (int val);
    void pop_front ();
    size_t get_size () const;
    bool search (int val) const;
    void swap_values (int val1, int val2);
    void remove_nodes (int val);
    void reverse ();

    ~SinglyLinkedList();

};
