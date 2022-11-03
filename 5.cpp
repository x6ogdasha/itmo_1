#include <iostream>
using namespace std;
struct Node{
    int key;
    struct Node *next;
    Node(int n): key(n),next(nullptr){}
};
struct my_list{
    Node *Head=nullptr, *Tail=nullptr;

    bool not_empty(){
        return (Head!=nullptr) ? 1 : 0;
    }
    void insert(int n){
        Node *NewNode = new Node(n);
        if(not_empty()==false){
            Head = NewNode;
            Tail = NewNode;
            return;
        }
        NewNode->next = Head;
        Head = NewNode;
    }

    void remove_first(){
        if(not_empty()){
            Node *OldNode = Head;
            Head = Head->next;
            delete(OldNode);
        }
    }
    void print(){
        if(not_empty()==false) return;
        Node *pointer = Head;
        while(pointer){
            cout << pointer->key << " " << endl;
            pointer = pointer->next;
        }
    }
    int show_head(){
        return Head->key;
    }
};
struct my_stack{
    my_list l,l_max;


    void push(int n){
        l.insert(n);
        if(l.Head==l.Tail){
            l_max.insert(n);
            return;
        }
        if(n>l_max.show_head()) l_max.insert(n);
        else l_max.insert(l_max.show_head());
    };
    void pop(){
        l.remove_first();
        l_max.remove_first();
    }
    int show_max(){
        return l_max.show_head();
    }



};
int main() {
    my_stack ms;
    int n,key,max_list[1000000],max_count=0;
    char cmd[5];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> cmd;
        switch(cmd[0]){
            case '+':{
                cin >> key;
                ms.push(key);
                break;
            }
            case '-':{
                ms.pop();
                break;
            }
            case 'm':
            {
                max_list[max_count++] = ms.show_max();
                break;
            }
            default: break;
        }
    }

    for(int i = 0; i < max_count; i++){
        cout << max_list[i] << "\n";
    }
    return 0;
}
