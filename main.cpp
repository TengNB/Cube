#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class Cube{
public:
    //设置长 获取长
    void setL(int length){
        m_L = length;
    }
    int getL(){
        return m_L;
    }
    //宽
    void setW(int width){
        m_W = width;
    }
    int getW(){
        return m_W;
    }
    //高
    void setH(int height){
        m_H = height;
    }
    int getH(){
        return m_H;
    }


    //获取立方体的面积
    int calculateS(){
        return 2*m_L*m_W + 2*m_H*m_W + 2*m_L*m_H;
    };

    //获取立方体的体积
    int calculateV(){
        return m_H * m_W * m_L;
    };

    bool isSameByClass(Cube &c){
        if (m_L == c.getL()
            && m_W == c.getW()
            && m_H == c.getH()
        ){
            return true;
        }
        return false;
    }


private:
    //属性 长 宽 高
    int m_L; //长
    int m_W; //宽
    int m_H; //高

};

int main() {

    Cube c1;

    c1.setL(10);
    c1.setH(10);
    c1.setW(10);

    cout << "C1的面积为" <<c1.calculateS()<<endl;
    cout << "C1的体积为" <<c1.calculateV()<<endl;

    //创建第二个立方体
    Cube c2;
    c2.setL(10);
    c2.setH(10);
    c2.setW(11);

    //利用成员函数进行判断
    bool result = c1.isSameByClass(c2);
    if (result){
        cout << "Same" << endl;
        return true;
    }
    else{
        cout << "Different" << endl;
        return false;
    }



}
