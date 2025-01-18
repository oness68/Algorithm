using namespace std;
long long solution(int price, int money, int count)
{
    long long answer = -1;
	long long totalMoney = 0;

	for (int i = 1; i <= count; i++)
	{
		totalMoney += price * i;
	}

	answer = money - totalMoney;

	if (answer < 0)
	{
		return answer * -1;
	}
	else
	{
		return 0;
	}
}