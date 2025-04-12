#include <iostream>
using namespace std;

// i dont know what is the problem .....

template <T>

class parent{
    protected:
        virtual void Add(T a, T b){
            return a+b;
        }
};

class child: parent<int>{
    public:
        void Add(int a , int b) override{
            int c = :: Add(5,10);
            return c +20;
        }
};

// the backup
// #include <iostream>
// using namespace std;

// class test {
//     public:
//         test(int a,int b){}
//         int Add(int a, int b){
//             return a+b;
//         }

// };



// int main() {

//     test a1(2,4);
//     cout<<endl;
//     cout<<a1.Add(2,8);

//     return 0;

// }