#include <iostream>
#include "../dest/LinkedList.h"

using namespace std;

class NodeX:public Node{
    public:
        int x;
        NodeX(int i = 100){
            x = i;
        }
};


int main(){
    LinkedList l;
    NodeX* x = new NodeX();
    NodeX* x2 = new NodeX(200);
    NodeX* x3 = new NodeX(300);
    l.prepend(x);
    l.prepend(x2);
    l.prepend(x3);

    NodeX* n = (NodeX*)l.GetItem(0);
    cout<<((NodeX*)l.GetItem(0))->x<<endl;
    cout<<((NodeX*)l.GetItem(1))->x<<endl;
    cout<<((NodeX*)l.GetItem(2))->x<<endl;
    cout<<((NodeX*)l[1])->x<<endl;
    cout<<l.size()<<endl;
    return 0;
}