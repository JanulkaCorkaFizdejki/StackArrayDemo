//
//  QueneOfInts.h
//  Stack
//
//  Created by Robert Nowiński on 25/09/2019.
//  Copyright © 2019 Robert Nowiński. All rights reserved.
//

#ifndef QueneOfInts_h
#define QueneOfInts_h

class QueueOfInts
{
public:
  virtual void enqueue() = 0;
  virtual int dequeue(int x) = 0;
  virtual bool isEmpty() = 0;
  virtual int peek() const = 0;
  virtual ~QueueOfInts() {}
};

#endif /* QueneOfInts_h */
