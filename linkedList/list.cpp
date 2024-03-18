#include <iostream>

class ListNode {
public:
  int data;
  ListNode *next;
  ListNode() = default;
  ListNode(int num) {
    data = num;
    next = nullptr;
  }
};

class LinkList {
private:
  int len;
  ListNode *next;

public:
  LinkList() {
    std::cout << "创建链表" << std::endl;
    len = 0;
    next = nullptr;
  }
  ~LinkList() {
    clear();
    std::cout << "销毁" << std::endl;
  }
  bool isEmpty() {
    if (next == nullptr) {
      return true;
    }
    return false;
  }
  int push(int data) {
    ListNode *node = new ListNode(data);
    node->next = next;
    next = node;
    ++len;
    return data;
  }
  int append(int data) {
    ListNode *node = new ListNode(data);
    ListNode *curr = next;
    while (curr->next != nullptr) {
      curr = curr->next;
    }
    curr->next = node;
    return data;
  }
  int insert(int data, int index) {
    ListNode *curr = (ListNode *)this;
    ListNode *node = new ListNode(data);
    for (int i = 0; i < index; ++i) {
      curr = curr->next;
    }
    node->next = curr->next;
    curr->next = node;
    return data;
  }
  int node_delete(int index) {
    ListNode *pre = (ListNode *)this;
    for (int i = 0; i < index; i++) {
      pre = pre->next;
    }
    ListNode *node = pre->next;
    pre->next = node->next;
    int val = node->data;
    delete node;
    --len;
    return val;
  }
  void print() {
    ListNode *curr = next;
    while (curr != nullptr) {
      std::cout << curr->data << ' ';
      curr = curr->next;
    }
  }
  void modify(int data, int index) {
    ListNode *curr = this->next;
    for (int i = 0; i < index; ++i) {
      curr = curr->next;
    }
    curr->data = data;
  }
  void clear() {
    if (!isEmpty()) {
      node_delete(0);
    }
  }
};

class LoopList {
private:
  int len;
  ListNode *next;

public:
  LoopList() {
    len = 0;
    next = (ListNode *)this;
  }
};
int main() {
  LinkList ls;
  ls.push(1);
  ls.push(4);
  ls.push(5);
  ls.append(10);
  ls.append(134);
  ls.insert(2, 0);
  std::cout << "删除元素: " << ls.node_delete(0) << std::endl;
  ls.modify(0, 1);
  ls.print();
  ls.clear();
  ls.print();
}


32,45,67,12,98,23,56,78,45,32,32,67,89,43,27,68,90,21,76,34,56,78,12,45,67,89,31,54,76,98,23,56,78,12,34,56,78,90,21,43,65,87,12,45,67,89,23,45,67,89,12,34,56,78,90,21,43,65,87,98,23,45,67,89,12,34,56,78,90,21,43,65,87,45,67,89,12,34,56,78,90,21,43,65,87,12,34,56,78,90,21,43,65,87,98,23,45,67,89,12,34,56,78,90,21,43,65,87
   