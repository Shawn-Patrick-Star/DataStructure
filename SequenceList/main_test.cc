#include <iostream>
#include "SequenceList.h"



int main(){
    SqList L(100);
    L.insert_elem(2, 0);
    L.insert_elem(4, 1);
    L.insert_elem(6, 2);
    L.insert_elem(8, 3);
    L.insert_elem(10, 4);
    for(int i = 0; i < 100; i++){
        std::cout << L.get_elem(i) << '\n';
    }

    return 0;
}