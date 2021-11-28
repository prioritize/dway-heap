//
// DHNode is the node of a DHeap. It is less verbose than std::pair
//

#ifndef DWAY_HEAP_DHNODE_H
#define DWAY_HEAP_DHNODE_H
#include <string>

using std::string;

class DHNode {
public:
    string key;
    int priority;
    int index;
    DHNode(string key, int priority) : key(std::move(key)), priority(priority){

    }


};


#endif //DWAY_HEAP_DHNODE_H
