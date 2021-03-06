ADV-77 算法提高 统计平均成绩
有4个学生，上4门课，要求输入全部学生的各门课成绩，并分别求出每门课的平均成绩。(保留2位小数)
　　括号里是解释内容，不用输入输出。输入的所有数都为0到100之间（包括端点）的整数
样例输入
(输入第1个学生的4门课成绩) 94 78 87 96
(输入第2个学生的4门课成绩) 66 87 75 69
(输入第3个学生的4门课成绩)100 98 89 77
(输入第4个学生的4门课成绩) 82 73 67 54
样例输出
(第1门课的平均成绩是) 85.50
(第2门课的平均成绩是) 84.00
(第3门课的平均成绩是) 79.50
(第4门课的平均成绩是) 74.00

#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    double c1 = 0.0, c2 = 0.0, c3 = 0.0, c4 = 0.0;
    double t1, t2, t3, t4;
    for(int i = 0; i < 4; i++) {
        cin >> t1 >> t2 >> t3 >> t4;
        c1 += t1;
        c2 += t2;
        c3 += t3;
        c4 += t4;
    }
    printf("%.2lf\n%.2lf\n%.2lf\n%.2lf", c1 / 4, c2 / 4, c3 / 4, c4 / 4);
    return 0;
}