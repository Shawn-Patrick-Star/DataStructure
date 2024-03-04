#include "SequenceList.h"

void SqList::clear_list(){
    this->len = 0;
}

bool SqList::is_empty(){
    return this->len == 0;
}

int SqList::get_length(){
    return this->len;
}

bool SqList::get_elem(ElemType &target, const int &index){
    if(index < 0 || index >= this->len)
        return false;
    target = this->List[index];
    return true;
}   

bool SqList::find_elem(const ElemType &target, int &index){
    for(int i = 0; i < index; i++){
        
    }
}
bool SqList::insert_elem(const ElemType &target, const int &index){

}
bool SqList::delete_elem(ElemType &target, const int &index){

}