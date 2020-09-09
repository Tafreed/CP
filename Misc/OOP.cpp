#include<bits/stdc++.h>
using namespace std;

class base{
    private:
        int b1;
    public:
        base() :b1(0){
            //cout << "Base Constructor Initialized \n";
        };
        base(int x): b1(x){
            //cout << "Base Constructor Initialized \n";
        }
        void getValueb(){
            cout << "b1: " << b1 << endl;
        }
        ~base(){
            //cout << "Base Destructed \n";
        }

};

class child1 : virtual public base{
    private:
        int c1;
    public:
        child1() :c1(0){
            //cout << "Child1 Constructor Initialized \n";
        };
        child1(int x): c1(x){
            //cout << "Child1 Constructor Initialized \n";
        }
        void getValuec1(){
            cout << "c1: " << c1 << endl;
        }
        ~child1(){
            //cout << "Child 1 Destructed \n";
        }

};
class child2 : virtual public base{
    private:
        int c2;
    public:
        child2() :c2(0){
            //cout << "Child2 Constructor Initialized \n";
        };
        child2(int x): c2(x){
            //cout << "Child2 Constructor Initialized \n";
        }
        void getValuec2(){
            cout << "c2: " << c2 << endl;
        }
        ~child2(){
            //cout << "Child 2 Destructed \n";
        }

};
class grandchild : public child1, public child2{
    private:
        int g1;
    public:
        grandchild() :g1(0), child1(0), child2(0), base(0){
            //cout << "Grandchild Constructor Initialized \n";
        };
        grandchild(int x, int y, int z, int b): g1(x), child1(y), child2(z), base(b){
            //cout << "Grandchild Constructor Initialized \n";
        }
        grandchild(grandchild &g){
            g1=g.g1;
        }
        void getValueg1(){
            cout << "g1: " << g1 << endl;
            getValuec1();
            getValuec2();
            getValueb();
        }
        ~grandchild(){
            //cout << "Grandchild Destructed \n";
        }
        void operator -(){
            g1=-g1;
        }
        grandchild operator +(grandchild & g){
            grandchild temp;
            temp.g1 = g1 + g.g1;
            return temp;
        }

        

};

int main(){
    grandchild G(1,2,3,4),G1(5,6,7,8),G2;
    //-G;
    G.getValueg1();
    G2 = G1 + G;
    cout << endl;
    G2.getValueg1();

}
