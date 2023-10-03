#include "DoublyLinkedList.h"
#include <iostream>

using namespace std;

DoublyLinkedList::DoublyLinkedList()
{
	m_Node = new Node;
	m_Node->next = new Node;
	m_Node->prev = new Node;

	m_Node->prev->next = m_Node;   //前の要素の次の要素として今の要素のアドレスを代入
	m_Node->next->prev = m_Node;   //次の要素の前の要素として今の要素のアドレスを代入
	head = m_Node;                 //暫定的に先頭要素を決定
	tail = m_Node;                 //暫定的に末尾要素を決定
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
	m_Node->data = _temp;          //入力された文字列を格納する
	m_Node = m_Node->next;         //現在の要素の位置を次の位置に移動させる

	//次の要素のアドレスを確保し、その要素の前の要素として今の要素のアドレスを代入
	m_Node->next = new Node;
	m_Node->next->prev = m_Node;
	tail = m_Node;                 //末尾要素を更新
}

void DoublyLinkedList::DisplayData()
{
	m_Node = head;                     //現在位置を先頭に移動させる
	while (m_Node->next)               //次の要素がnullになるまで処理を繰り返す
	{
		std::cout << m_Node->data << std::endl;
	    m_Node = m_Node->next;
	}
}


