#include <iostream>
#include <cstdlib> // 包含system()函数

using namespace std;

int main() 
{
   cout <<"欢迎使用关闭极域程序，请将程序放入D盘防止重启删除
int main() {
    // 执行taskkill命令终止studentmain.exe进程
    int result = system("taskkill /f /im studentmain.exe");
    
    // 根据执行结果输出提示信息
    if (result == 0) {
        cout << "成功终止了studentmain.exe进程。" << endl;
    } else {
        cout << "终止进程失败，可能原因：" << endl;
        cout << "1. 进程未运行" << endl;
        cout << "2. 缺少管理员权限" << endl;
        cout << "3. 被杀毒软件阻止" << endl;
    }
    
    // 保持窗口停留（仅调试时需要）
    // system("pause");
    return 0;
}