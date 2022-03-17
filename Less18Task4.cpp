/*
�������� ����������� �������, ������� ��������� ������� ����� n ���� long long � ���������� ans, � ���������� void.
����� ���������� ������ ������� � ���������� ans ������ ��������� ���������� ������ ���� � ������ ����� n.

������:
int ans;
evendigits(9 223 372 036 854 775 806, ans);

//ans == 10

���������: 9 223 372 036 854 775 806

���-���� ��� �������� ������
������� ��������� ���������� ���� ������, ��� ������������� �������� �  void.
������� �� ���������� ��������� ����� <iostream>.
������� �����������.
������� �������� �������� �� ������.
*/

#include <iostream>
using namespace std;

void evendigits(long long num, int& ans)
{
	if (num == 0 && ans == 0) 
	{
		ans++;
	}
	if (num > 0)
	{
		if (num % 2 == 0)
			evendigits(num / 10, ++ans);
		else
			evendigits(num / 10, ans);
	}
	
	

} 

int main()
{
	int nAnswer = 0;
	evendigits(0, nAnswer); //9223372036854775806
	cout << nAnswer;
	 
}