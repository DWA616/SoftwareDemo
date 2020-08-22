#include <queue>
#include <string>

class Stack{
    public:
        Stack();
        void push(std::string s);
        void pop();
        std::string top() const;
        bool empty() const;
        int size() const;

    private:
        int count;
        std::queue<std::string> q1;
        std::queue<std::string> q2;
};