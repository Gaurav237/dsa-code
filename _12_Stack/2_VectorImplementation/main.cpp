#include <iostream>
#include <vector>
using namespace std;

class myStack{
private:
    vector<int> v;
public:
    void push(int x){
        v.push_back(x);
    }
    int pop(){
        // int res = v[v.size() - 1];
        int res = v.back();
        v.pop_back();
        return res;
    }
    int peek() const{
        return v.back();
    }
    int size() const{
        return v.size();
    }
    int isEmpty() const{
        return v.empty();
    }

};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
