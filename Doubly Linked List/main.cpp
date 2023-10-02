#include <iostream>
#include <fstream>
#include <list>
#include <string>

using namespace std;

int main(void)
{
	const char* FileName = "Scores.txt";//�X�R�A�f�[�^�̃t�@�C����
	std::ifstream ScoreData(FileName);  //�X�R�A�f�[�^���i�[����N���X
	list<string> ScoreList;             //ScoreData�̒��ɂ���f�[�^���i�[����o�������X�g
	string line;                        //ScoreData��ScoreList�̋��n���̂��߂̕ϐ�
	int i = 0;                          //�E�B���h�E����͂ݏo��Əo�͂��ꂽ���ʂ��\������Ȃ��Ȃ錻�ۂւ̑΍��p�̕ϐ�

	//�e�L�X�g�t�@�C����������Ȃ���΃G���[�\��
	if (!ScoreData)
	{
		cout << "�t�@�C����������܂���" << endl;
	}
	//�e�L�X�g�t�@�C�����J����Ȃ���΃G���[�\��
	if (!ScoreData.is_open())
	{
		cout << "�t�@�C�����J���܂���" << endl;
	}
	
	//�e�L�X�g�t�@�C���̕�����𒊏o���ă��X�g�Ɋi�[����
	while (getline(ScoreData, line))
	{
		ScoreList.push_back(line);
	}

	//���X�g�̐擪���珇�ɏo�͂���
	for (auto itr = ScoreList.begin(); itr != ScoreList.end(); ++itr)
	{
		std::cout << *itr << "\n";
		i++;
		if (i % 20 == 0)//�\������Ȃ��Ȃ錻�ۂ̑΍�
		{
			cout << "Enter�Ŏ���" << endl;
			cin.get();
		}
	}
	//Enter�L�[�ŏI��
	cout << "Enter�������ďI�����܂�";

	cin.get();
}