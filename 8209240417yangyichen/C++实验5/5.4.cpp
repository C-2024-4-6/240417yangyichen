#include <iostream>
#include <string>
using namespace std;
class Score
{
public:
	string id;
	int score;
	Score(string i,int sc):id(i),score(sc){}  //通过构造函数来初始化这两个成员变量
};
void max(Score* students[], int n)
{
	int maxScore = 0;
	for (int i = 1; i < n; i++)
	{
		if (students[i]->score > students[maxScore]->score)
		{
			maxScore = i;
		}
	}
	cout << "成绩最高的学生学号是：" << students[maxScore]->id << endl;
}
int main()
{
	Score* students[5];
	students[0] = new Score("1", 90);
	students[1] = new Score("2", 91);
	students[2] = new Score("3", 94);
	students[3] = new Score("4", 93);
	students[4] = new Score("5", 92);
	max(students, 5);

	for (int i = 0; i < 5; i++)
	{
		delete students[i];
	}
	return 0;
}
