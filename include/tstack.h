// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int size>
class TStack {
public:
    TStack() :top(-1) {}
    bool isEmpty() {
      return top == -1;
    }
    bool isFull() {
      return top == size - 1;
    }
    void push(T value) {
      if (!isEmpty()) {
        arr[++top] = value;
      }
    }
    T get() {
      if (!isEmpty()) {
        return arr[top];
      }
    }
    void pop() {
      if (!isEmpty()) {
        top--;
      }
    }
    int getSize() {
      return top;
    }
};
#endif  // INCLUDE_TSTACK_H_
