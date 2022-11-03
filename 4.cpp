#include <iostream>
using namespace std;
struct Node{
    int key;
    struct Node *next;
    Node(int n): key(n),next(nullptr){}
};
struct my_list{
    Node *Head=nullptr, *Tail=nullptr;
    int size = 0;
    bool not_empty(){
        return (Head!=nullptr) ? 1 : 0;
    }
    void insert(int n){
        Node *NewNode = new Node(n);
        if(not_empty()==false){
            Head = NewNode;
            Tail = NewNode;
            size++;
            return;
        }
        NewNode->next = Head;
        Head = NewNode;
        size++;
    }

    void remove_first(){
        if(not_empty()){
            Node *OldNode = Head;
            Head = Head->next;
            size--;
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
    int show_size(){
        return l.size;
    }


};
int main() {
    my_stack ms;
    string s;
   getline(cin,s);

    for(int i = 0; i < s.size(); i++){
        if(s[i]>='0' && s[i]<='9') ms.push((int)s[i]-48);
        switch(s[i]){
            case('+'):{
                if(ms.show_size()>=2){
                    int d1 = ms.show_head();
                    ms.pop();
                    int d2 = ms.show_head();
                    ms.pop();
                    ms.push(d1+d2);
                }
                break;
            }
            case('-'):{
                if(ms.show_size()>=2){
                    int d1 = ms.show_head();
                    ms.pop();
                    int d2 = ms.show_head();
                    ms.pop();
                    ms.push(d2-d1);
                }
                break;
            }
            case('*'):{
                if(ms.show_size()>=2){
                    int d1 = ms.show_head();
                    ms.pop();
                    int d2 = ms.show_head();
                    ms.pop();
                    ms.push(d1*d2);
                }
                break;
            }
            default:break;
        }
    }
    cout << ms.show_head();

    return 0;
}
