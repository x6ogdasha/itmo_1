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
};
struct my_stack{
    my_list l;

    void push(int n){
        l.insert(n);
    };
    void pop(){
        l.remove_first();
    }
    int show_head(){
        return l.Head->key;
    }


};
int main() {
    my_stack ms;
   int n,key,count_deleted=0,deleted[1000000];
   char cmd;
   cin >> n;
   for(int i = 0; i < n; i++){
       cin >> cmd;
       switch(cmd){
           case '+':{
               cin >> key;
               ms.push(key);
               break;
           }
           case '-':{
               deleted[count_deleted++] = ms.show_head();
               ms.pop();
               break;
           }
           default: break;
       }
   }
   for(int i = 0; i < count_deleted; i++){
       cout << deleted[i] << "\n";
   }
    return 0;
}
