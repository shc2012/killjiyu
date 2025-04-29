#include <iostream>
#include <cstdlib> 

using namespace std;

int main() 
{
    cout << "欢迎使用关闭极域程序，请将程序放入D盘防止重启删除，谢谢。" << endl;
    
    // 终止极域进程
    int killResult = system("taskkill /f /im studentmain.exe");
    if (killResult == 0) {
        cout << "成功终止了studentmain.exe进程。" << endl;
    } else {
        cout << "终止进程失败，可能进程未运行或权限不足。" << endl;
    }

    // 检查进程是否仍在运行
    int checkResult = system("tasklist /FI \"IMAGENAME eq studentmain.exe\" | findstr /i studentmain.exe >nul");
    if (checkResult == 0) {
        cout << "\n⚠️ 警告：检测到极域服务仍在运行！" << endl;
    }

    // system("pause");  // 调试时可取消注释
    return 0;
}