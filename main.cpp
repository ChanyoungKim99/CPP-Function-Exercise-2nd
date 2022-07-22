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

	monster englishname{{"����", "�Ǹ�", "������"}, koreanname, realhp};

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

	// �Ű������� ����� �̸��� ���÷� ������ ������ �̸��� ������ �ȵȴ�!!
};

int main()
{
	CreateMonster("Wolf", "Ȳõ����", 10);
	CreateMonster("Demon", "��ƺ��", 1000);
}


