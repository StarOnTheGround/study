#include <iostream>
#include<stack>
using namespace std;
//栈stack容器
void test01(){
    //特点：先进后出
    stack<int> s;
    //入栈操作
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout << "开始时栈的大小为：" << s.size() << endl;
    // 可以看这里面的数据，但是这不叫遍历
    // 只要栈不为空，查看栈顶并且执行出栈操作
    while(!s.empty()){
        // 查看栈顶元素
        cout << "栈顶的元素为" << s.top() << endl;
        // 出栈操作
        s.pop();
        cout << "出栈后的大小为：" << s.size() << endl;
    }
    cout << "出栈后的大小为：" << s.size() << endl;//栈为空，size为0

}

int main(){
    test01();
    system("pause");
    return 0;
}