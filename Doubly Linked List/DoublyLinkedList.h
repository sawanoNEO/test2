#pragma once
#include <string>

struct Node
{
	std::string data;      //�f�[�^�i�[�p�̕ϐ�
	Node* prev = nullptr;  //�O�̗v�f�̃A�h���X
	Node* next = nullptr;  //���̗v�f�̃A�h���X 
};

class DoublyLinkedList
{
private:

	Node* m_Node;   //���ݎw�肳��Ă���v�f�̃A�h���X
	Node* head;     //�擪�v�f�̃A�h���X
	Node* tail;     //�����v�f�̃A�h���X
public:
	DoublyLinkedList();
	~DoublyLinkedList();

	void push_back(std::string);     //���݈ʒu�̗v�f�Ƀf�[�^���i�[���A�A�h���X�����̈ʒu�Ɉړ�������
	void DisplayData();              //�i�[����Ă���f�[�^���i�[���ꂽ���Ԃɕ\������

};

////
////template <typename T>
////DoublyLinkedList<T>::DoublyLinkedList(void)
////{
////	m_Node = 0;
////	m_Node.Num = 0;
////	head = &m_Node;
////}
//
//template<typename T>
//void DoublyLinkedList<T>::push_back(T temp)
//{
//	Node<T>* dummy = new Node<T>;
//	dummy = m_Node;
//	m_Node->data = temp;
//	m_Node->prev = m_Node;
//	m_Node = dummy->next;
//	if (m_Node->next)
//	{
//		m_Node = mNode->next;
//	}
//}
//
//template<typename T>
//void DoublyLinkedList<T>::emplace_back()
//{
//}
