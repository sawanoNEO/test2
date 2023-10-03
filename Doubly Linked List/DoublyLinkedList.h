#pragma once
#include <string>

struct Node
{
	std::string data;      //データ格納用の変数
	Node* prev = nullptr;  //前の要素のアドレス
	Node* next = nullptr;  //次の要素のアドレス 
};

class DoublyLinkedList
{
private:

	Node* m_Node;   //現在指定されている要素のアドレス
	Node* head;     //先頭要素のアドレス
	Node* tail;     //末尾要素のアドレス
public:
	DoublyLinkedList();
	~DoublyLinkedList();

	void push_back(std::string);     //現在位置の要素にデータを格納し、アドレスを次の位置に移動させる
	void DisplayData();              //格納されているデータを格納された順番に表示する

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
