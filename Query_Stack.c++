#include <iostream>
#include <algorithm>
#include <array>
#include <stack>
#include <queue>

using namespace std;

int main(){

    int x[10] = {4, 16, 20, 48, 51, 52, 54, 65, 73, 88};
    stack <int> st;
    queue <int> qu;

    //Cetak array
    cout << "Array Normal: ";
    for(int i = 0; i < 10; i++){
        cout << x[i] << " ";
    }
    cout << endl;

cout << "<--------------------------------------------------->" << endl;

    //Pushing to stack
    cout << "Stack pushed array: ";
    for(int i = 0; i < 10; i++) st.push(x[i]);

    while(!st.empty()){
    cout << st.top() << " ";
    st.pop();
    }
    cout << endl;


cout << "<--------------------------------------------------->" << endl;

    //Enqueueing to Queue
    cout << "Queued array: ";
    for(int i = 0; i < 10; i++) qu.push(x[i]);

    while(!qu.empty()){
        cout << qu.front() << " ";
        qu.pop();
    }
    cout << endl;
    cout << endl;

    cout << "Perbedaannya adalah stack menggunakan prinsip LILO (Last in Last out) sedangkan queue menggunakan FIFO(First in First Out)";
}