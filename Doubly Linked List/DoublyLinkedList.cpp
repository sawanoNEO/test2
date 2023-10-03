#include "DoublyLinkedList.h"
#include <iostream>

using namespace std;

DoublyLinkedList::DoublyLinkedList()
{
	m_Node = new Node;
	m_Node->next = new Node;
	m_Node->prev = new Node;

	m_Node->prev->next = m_Node;   //�O�̗v�f�̎��̗v�f�Ƃ��č��̗v�f�̃A�h���X����
	m_Node->next->prev = m_Node;   //���̗v�f�̑O�̗v�f�Ƃ��č��̗v�f�̃A�h���X����
	head = m_Node;                 //�b��I�ɐ擪�v�f������
	tail = m_Node;                 //�b��I�ɖ����v�f������
}

DoublyLinkedList::~DoublyLinkedList()
{
	while (head != m_Node)
	{
		m_Node = m_Node->prev;
		delete m_Node->next;
	}
	delete m_Node->prev;
}


void DoublyLinkedList::push_back(std::string _temp)
{
	m_Node->data = _temp;          //���͂��ꂽ��������i�[����
	m_Node = m_Node->next;         //���݂̗v�f�̈ʒu�����̈ʒu�Ɉړ�������

	//���̗v�f�̃A�h���X���m�ۂ��A���̗v�f�̑O�̗v�f�Ƃ��č��̗v�f�̃A�h���X����
	m_Node->next = new Node;
	m_Node->next->prev = m_Node;
	tail = m_Node;                 //�����v�f���X�V
}

void DoublyLinkedList::DisplayData()
{
	m_Node = head;                     //���݈ʒu��擪�Ɉړ�������
	while (m_Node->next)               //���̗v�f��null�ɂȂ�܂ŏ������J��Ԃ�
	{
		std::cout << m_Node->data << std::endl;
	    m_Node = m_Node->next;
	}
}


