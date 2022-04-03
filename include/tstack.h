// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int size>
class TStack {
 private:
  T arr[100];
  int top;
 public:
  TStack(): top(-1) {}
  bool isEmpty() {
    return -1 == top;
  }
  bool isFull() {
    return size - 1 == top;
  }
  T get() {
    if (isEmpty())
     throw "Empty !";
    return arr[top];
  }
  void pop() {
    if (!(isEmpty()))
     --top;
  }
  void push(T value) {
    if (isFull())
     throw "Full !";
    else
      arr[++top] = value;
    }
};
#endif  // INCLUDE_TSTACK_H_
