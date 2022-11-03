#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Node{
    char key;
    struct Node *next;
    Node(char n): key(n),next(nullptr){}
};

struct my_list{
    Node *Head=nullptr, *Tail=nullptr;

    bool not_empty(){
        return (Head!=nullptr) ? 1 : 0;
    }
    void insert(char n){
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
            cout << pointer->key;
            pointer = pointer->next;
        }
    }
};

struct my_stack{
    my_list l;

    void push(char n){
        l.insert(n);
    };
    void pop(){
        l.remove_first();
    }
    int show_head(){
        if(l.not_empty()){
            return l.Head->key;
        }
        return NULL;
    }
};
struct my_queue{
    my_list l;

    void push(char n){
        Node *NewNode = new Node(n);
        if(l.not_empty()==false){
            l.Head = NewNode;
            l.Tail = NewNode;
            return;
        }
        l.Tail->next = NewNode;
        l.Tail = NewNode;
    }

    void pop(){
        if(l.not_empty()){
            Node *OldNode = l.Head;
            l.Head = l.Head->next;
            delete(OldNode);
        }
    }
    int first(){
        return l.Head->key;
    }
};
int main() {
    my_stack ms;
    int status[500];
    int i=0;
     string s;

    while(cin >> s){

        for(int j = 0; j < s.size(); j++){
            if(s[j]=='(' || s[j]=='[') {
                ms.push(s[j]);
            }else if(s[j]==')' && ms.show_head()=='(') {
                ms.pop();
            }else if(s[j]==']' && ms.show_head()=='['){
                ms.pop();
            } else {
                ms.push(s[j]);
                break;
            }

        }
        if(ms.l.not_empty()==false) status[i++]=1;
        if(ms.l.not_empty()) status[i++]=0;

        while(ms.l.not_empty()) ms.pop();
    }

    for(int j = 0; j < i; j++) {
       if(status[j]==1) cout << "YES\n";
       if(status[j]==0) cout << "NO\n";
    }
    return 0;
}
