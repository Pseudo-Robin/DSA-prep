#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    char name[20]= "Robin Singh";

    int size=0;
    char temp;

    for(int i=0;name[i]!='\0';i++) {
        size++;
    }

    for(int i=0;i<size/2;i++) {
        swap(name[i],name[size-i-1]);
    }

    for(int i=0;name[i]!='\0';i++) {
        cout<<name[i];
    }


    return 0;
}