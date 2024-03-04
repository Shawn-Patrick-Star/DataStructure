
typedef int ElemType;

//该顺序表从位置0开始存入元素
class SqList{
public:
    SqList(const int &len):len(len){
        this->List = new ElemType[this->len];//懒汉 
    }
    ~SqList(){
        delete [] this->List;
    }

    void clear_list();
    bool is_empty();
    int get_length();

    bool get_elem(ElemType &target, const int &index);
    bool find_elem(const ElemType &target, int &index);
    bool insert_elem(const ElemType &target, const int &index);
    bool delete_elem(ElemType &target, const int &index);
private:
    int len;
    ElemType* List;//动态分配
};