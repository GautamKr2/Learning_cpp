#include<iostream>
#include<cstring>
using namespace std;

/*class Index {
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
        }

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
};*/

/*class Location {
    int longitude;
    int latitude;
    public:
        Location() {
            longitude = 0;
            latitude = 0;
        }
        Location(int lg, int lt) {
            longitude = lg;
            latitude = lt;
        }
        Location operator+(Location l2) {
            Location temp;
            temp.longitude = longitude + l2.longitude;
            temp.latitude = latitude + l2.latitude;
            return temp;
        }
        void show() {
            cout<<"Longitude : "<<longitude<<endl;
            cout<<"Latitude : "<<latitude<<endl;
        }
};*/

class Concatanate {
    string str;
    public:
        Concatanate() {}
        Concatanate(string s) {
            str = s;
        }
        void show() {
            cout<<"String : "<<str<<endl;
        }
        Concatanate operator+(Concatanate cat2) {
            Concatanate temp;
            temp.str = str + " " + cat2.str;
            return temp;
        }
};

int main() {
    /*Index idx1, idx2;
    cout<<idx1.getIndex()<<endl;
    idx2.nextIndex();
    cout<<idx2.getIndex()<<endl;*/

    /*Index idx1, idx2;
    idx1++;
    idx1++;
    idx2++;
    cout<<idx1.getIndex()<<endl;
    cout<<idx2.getIndex()<<endl;*/

    /*Location loc1(8, 12), loc2(4, 28);
    loc1.show();
    loc2.show();
    loc1 = loc1 + loc2;
    loc1.show();*/

    Concatanate cat1("New"), cat2("Delhi");
    cat1.show();
    cat2.show();
    cat1 = cat1 + cat2;
    cat1.show();

    return 0;
}