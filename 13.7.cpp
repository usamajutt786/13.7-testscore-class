#include<iostream>
#include<string>
using namespace std;
// making class of testscore 
class testscore
{
private:
	double score1, score2, score3;
public:
	//constructors of class call automaically set score to zero
	testscore()
	{
		score1 = 0;
		score2 = 0;
		score3 = 0;
	}
	//assigning values to constructors
	testscore(double n1, double n2, double n3)
	{
		score1 = n1;
		score2 = n2;
		score3 = n3;
	}
	//mautators  settet functions 
	void setScore1(double n1)
	{
		while (n1 < 0)
		{
			cout << "invalid score score cannot be negative " << endl;
		}
		score1 = n1;
	}
	void setScore2(double n2)
	{
		while (n2 < 0)
		{
			cout << "invalid score score cannot be negative " << endl;
		}
		score2 = n2;
	}
	void setScore3(double n3)
	{
		while (n3 < 0)
		{
			cout << "invalid score score cannot be negative " << endl;
		}
		score3 = n3;
	}
	//accesors...return the value ....

	double getScore1()
	{
		return score1;
	}
	double getScore2()
	{
		return score2;
	}
	double getScore3()
	{
		return score3;
	}
	double averageScore()
	{
		return (score1 + score2 + score3) / 3;
	}
};
int main()
{
	//object of class testscore .............
	testscore t1;
	double sc1, sc2, sc3;
	cout << "enter score 1:";
	cin >> sc1;
	cout << "enter score 2:";
	cin >> sc2;
	cout << "enter score 3:";
	cin >> sc3;
	t1.setScore1(sc1);
	t1.setScore2(sc2);
	t1.setScore3(sc3);
	cout<<"Average score is  "<<t1.averageScore();
	return 0;
}