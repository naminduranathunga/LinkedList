# LinkedList
This simple library is allowing to handle linked lists more easily. The library provides necessary functions to do operations on a linked list.


## Usage

Include the library file first.

```c++
#include "dest/LinkedList.h"
```

For nodes create a class inherited from Node class.

```c++
class NodeX:public Node{
    public:
        int x;
        NodeX(int i = 100){
            x = i;
        }
};
```

Then you can assign and use it. For more info, see the documentation.

```c++
LinkedList l;
NodeX* x1 = new NodeX();
NodeX* x2 = new NodeX(200);
l.prepend(x1);
l.append(x2);

//get the value
cout<<((NodeX*)l.GetItem(2))->x<<endl;
//or you can access with following syntax
cout<<((NodeX*)l[1])->x<<endl;

//size of the list
cout<<l.size()<<endl;
```

## Documentation

The documentation is genarated using doxygen. For the documentation, see the file in "doc/html/index.html" 