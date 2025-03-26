#include<iostream>
using namespace std;

class Index {
    /*private:
        int index;
    public:
        Index() {
            index = 0;
        }
        int getIndex() {
            return index;
        }
        void nextIndex() {
            index++;
        }*/

    private:
        int index;
    public:
        Index() {
            index = 0;
        }
        int getIndex() {
            return index;
        }
        Index operator ++ (int) {
            index = index + 1;
            //return index;
        }
};

int main() {
    /*Index idx1, idx2;
    cout<<idx1.getIndex()<<endl;
    idx2.nextIndex();
    cout<<idx2.getIndex()<<endl;*/

    Index idx1, idx2;
    idx1++;
    idx1++;
    idx2++;
    cout<<idx1.getIndex()<<endl;
    cout<<idx2.getIndex()<<endl;

    return 0;
}




/*#include <iostream>
using namespace std;

class Index {
    int value;
public:
    Index(int v = 0) : value(v) {}

    // Prefix increment
    Index& operator++() {
        ++value;
        return *this;
    }

    // Postfix increment
    Index operator++(int) {
        Index temp = *this; // Save old value
        value++;            // Increment current value
        return temp;        // Return old value
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Index idx1(5), idx2(10);

    idx1++;  // Postfix increment
    ++idx1;  // Prefix increment
    idx2++;

    idx1.display();
    idx2.display();

    return 0;
}*/