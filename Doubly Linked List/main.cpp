#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include "DoublyLinkedList.h"

#include <stdio.h>
using namespace std;

int main(void)
{
	DoublyLinkedList doublelist;        //�o�������X�g�̐錾
	const char* FileName = "Scores.txt";//�X�R�A�f�[�^�̃t�@�C����
	std::ifstream ScoreData(FileName);  //�X�R�A�f�[�^���i�[����N���X
	list<string> ScoreList;             //ScoreData�̒��ɂ���f�[�^���i�[����o�������X�g
	string line;                        //ScoreData��ScoreList�̋��n���̂��߂̕ϐ�



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
		doublelist.push_back(line);
	}

	doublelist.DisplayData();

	//Enter�L�[�ŏI��
	cout << "Enter�������ďI�����܂�";

	cin.get();
}