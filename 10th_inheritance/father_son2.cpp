
#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

class Father {
private:
	int money;

protected:
	int room_key;
	
public:
	void it_skill(void)
	{
		cout<<"father's it skill"<<endl;
	}

	int getMoney(void)
	{
		return money;
	}

	void setMoney(int money)
	{
		this->money = money;
	}
};

class Son : public Father {
private:
	int toy;
public:
	void play_game(void)
	{
		int m;
		
		cout<<"son paly game"<<endl;

		/* money -= 1; 
		 * 错: 不能直接拿父亲的私房钱
		 */

		/*
		 * 但是可以问他要
		 */
		m = getMoney();
		m--;
		setMoney(m);

		/* 外人不能拿父亲的房间钥匙
		 * 儿子可以
		 */
		room_key = 1; 
	}
};


int main(int argc, char **argv)
{
	Son s;

	s.setMoney(10);
	cout << s.getMoney()<<endl;

	s.it_skill();
	s.play_game();

	//s.room_key = 1;
	
	return 0;
}


