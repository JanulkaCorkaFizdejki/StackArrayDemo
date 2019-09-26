//
//  Implementation1.cpp
//  Stack
//
//  Created by Robert Nowiński on 25/09/2019.
//  Copyright © 2019 Robert Nowiński. All rights reserved.
//

#include "Implementation1.hpp"
#include "StackOfInt.h"
#include <iostream>

class Implementation1 : public StackOfInts  {

public:
    Implementation1(int firstElement) {
        pointer_array = new int[1];
        pointer_array[0] = firstElement;
    }
    
    int pop() override {
        int checker = temp_size_array > 0 ? temp_size_array - 1 : 0;
        
        if (checker == 0) {
            
            int output = pointer_array[checker];
            
            int tmp_array[1] = {pointer_array[0]};
            
            delete [] pointer_array;
            
            pointer_array = new int[1];
            pointer_array[0] = tmp_array[0];
            
            temp_size_array = 0;
            
            return output;
            
        } else {
            int output = pointer_array[checker];
            
            int tmp_array[checker];
            
            for (int i = 0; i <= checker; i++) {
                tmp_array[i] = pointer_array[i];
            }
            
            delete [] pointer_array;
            
            int tmp_inc = 0;
            pointer_array = new int[checker];
            for (int i = 0; i < checker; i++) {
                pointer_array[i] = tmp_array[i];
                tmp_inc++;
            }
            
            temp_size_array = tmp_inc;
            
            return output;
        }
    }
   
    // PUSH STACK METHOD
    void push(int y) override {
        int tmp_array[temp_size_array];
        
        for (int i = 0; i <= temp_size_array; i++) {
            tmp_array[i] = pointer_array[i];
        }
        
        delete [] pointer_array;
        
        int tmp_inc = 0;
        pointer_array = new int[temp_size_array + 1];
        
        for (int x = 0; x <= temp_size_array; x++) {
            if (x < temp_size_array) {
                pointer_array[x] = tmp_array[x];
            } else {
                pointer_array[x] = y;
            }
            tmp_inc++;
        }
        temp_size_array = tmp_inc;
    }
    
    
    // IS EMPTY STACK METHOD
    bool isEmpty() override {
        return temp_size_array > 0 ? true : false;
    }
    
    
    // CURRENT STACK SIZE
    int size() override {
        return temp_size_array;
    }
    
    
    // CURRENT STACK PEEK
    int peek() const override {
        return temp_size_array > 0 ? pointer_array[temp_size_array - 1] : 0;
    }
    
    
    // SHOW FULL STACK ELEMENTS
    void printFullStack() override {
        for (int i = 0; i < temp_size_array; i++) {
            std::cout << "(" << i + 1 << ") " << "[stock-value: " << pointer_array[i] << "]" <<"\n";
        }
    }
    
private:
    int *pointer_array;
    int temp_size_array = 1;
};
