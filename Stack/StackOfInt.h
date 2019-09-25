//
//  StackOfInt.h
//  Stack
//
//  Created by Robert Nowiński on 25/09/2019.
//  Copyright © 2019 Robert Nowiński. All rights reserved.
//

#ifndef StackOfInt_h
#define StackOfInt_h
class StackOfInts
{
public:
  virtual int pop() = 0;
  virtual void push(int x) = 0;
  virtual bool isEmpty() = 0;
  virtual int size() = 0;
  virtual int peek() const = 0;
  virtual void printFullStack() = 0;
  virtual ~StackOfInts() {}
};

#endif /* StackOfInt_h */
