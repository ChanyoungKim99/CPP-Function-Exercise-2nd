#include <iostream>

void CreateMonster(std::string koreantype, std::string koreanname, int realhp)
{
	struct type
	{
		std::string wolf;
		std::string demon;
		std::string slime;
	};

	struct monster
	{
		type monstertype;
		std::string name;
		int hp;
	};

	monster englishname{{"늑대", "악마", "슬라임"}, koreanname, realhp};

	if (koreantype == "Wolf")
	{
		std::cout << englishname.name << "(HP " << englishname.hp << ", "
			<< englishname.monstertype.wolf << ")" << std::endl;
	}
	else if (koreantype == "Demon")
	{
		std::cout << englishname.name << "(HP " << englishname.hp << ", "
			<< englishname.monstertype.demon << ")" << std::endl;
	}
	else
	{
		std::cout << englishname.name << "(HP " << englishname.hp << ", "
			<< englishname.monstertype.slime << ")" << std::endl;
	}

	// 매개변수에 사용한 이름과 로컬로 선언한 변수의 이름이 같으면 안된다!!
};

int main()
{
	CreateMonster("Wolf", "황천늑대", 10);
	CreateMonster("Demon", "디아블로", 1000);
}


