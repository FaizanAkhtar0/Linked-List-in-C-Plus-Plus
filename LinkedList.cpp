#include<iostream>
using namespace std;
template <classtype T>
class List<T> {
private:
	Node<T> root;
	int sizeOfList = 0;

	void insertDataAtBeginning(T data, Node<T> node) {
		if (node.getNextNode() != null) {
			insertDataAtBeginning(data, *node.getNextNode());
		}
		else {
			Node<T> newNode;
			newNode.setData(data);
			node.setNextNode(&newNode);
			++sizeOfList;
		}
	}

	void remove(T dataToRemove, Node<T> previousNode, Node<T> actualNode) {
		while (actualNode != null) {

			if (actualNode.getData().compare(dataToRemove) == 0) {
				previousNode.setNextNode(actualNode.getNextNode());
				actualNode = null;
				return;
			}

			previousNode = *actualNode;
			actualNode = *actualNode.getNextNode();
		}
	}

public:

	void insert(T data) {
		
		if (root == null) {
			root.setData(data);
			++sizeOfList;
		}
		else {
			insertDataAtBeginning(data, root);
		}
	}

	void remove(T data) {

		if (root == null) return;

		if (root.getData().compare(data)){
			root = *root.getNextNode();
		}
		else {
			remove(data, root, *root.getNextNode());
		}
	}

	int size() {
		return sizeOfList;
	}

	bool isEmpty() {
		return sizeOfList == 0;
	}
};