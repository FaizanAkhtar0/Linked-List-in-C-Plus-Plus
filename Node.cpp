#include<iostream>
template <classtype T>
class Node<T> {


private:
	T data;
	Node<T> *nextNode;

public:

	Node<T> * getNextNode() {
		return nextNode;
	}

	void setNextNode(Node<T> * node) {
		nextNode = node;
	}

	T getData() {
		return data;
	}

	void setData(T newData) {
		data = newData;
	}
};

template <classtype T>
std::ostream& operator<<(std::ostream &strm, const Node<T> &node) {
	return strm << node.getData();
}