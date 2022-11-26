#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

void print_vec(vector<int> &vec){
    for (int value: vec){
        cout << value << " ";
    }
    cout << endl;
}

int main() {
    string line("10-11-45-34-2");
    vector<int> vec;
    stringstream ss(line);
    string str;

    while(getline(ss, str, '-')){
        vec.push_back(stoi(str));
    }
    cout << "line = " << line << endl;

    print_vec(vec);

    return 0;
}