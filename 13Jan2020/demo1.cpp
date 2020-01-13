#include<iostream>
using namespace std;


class Node{   
    public:
        int data;
        Node *next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};


class SingleLinkedList{
    public:
        Node *start;
        int length;

        SingleLinkedList(){
            this->start = NULL;
        }

        void createList(){
            Node *temp = NULL;
            int value;

            cout<<"Enter the Value"<<endl;
            cin>>value;


            while(value != -1){
                Node *newNode = new Node(value);

                if(start == NULL){
                    start = newNode;
                    temp = newNode;
                }
                else{
                    temp->next = newNode;
                    temp = newNode;
                }

                cin>>value;
                this->length++;
            }

        }

        void isLengthEvenOdd(){
            if(length %2 == 0){
                cout<<"Even length"<<endl;
            }
            else{
                cout<<"Odd length"<<endl;
            }
        }

        void display();
};

void SingleLinkedList::display(){
    Node *temp = start;

    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}



int main(){
    SingleLinkedList object;
    object.createList();
    object.isLengthEvenOdd();
    // object.display();

    return 0;
}



// Node * createList(){
//     Node *start = NULL;
//     Node *temp = NULL;

//     int value;
//     cout<<"Enter the Number"<<endl;
//     cin>>value;

//     while(value != -1){
//         Node *newNode = new Node(value);
        

//         if(start == NULL){
//             start = newNode;
//             temp = newNode;
//         }
//         else{
//             temp->next = newNode;
//             temp = newNode;
//         }

//         cin>>value;
//     }

//     return start;
// }


// void display(Node *head){
//     while(head != NULL){
//         cout<<head->data<<endl;
//         head = head->next;
//     }
// }