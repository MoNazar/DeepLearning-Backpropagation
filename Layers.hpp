//
//  Layers.hpp
//  face_rec
//
//  Created by 徐鹏 on 11/2/16.
//  Copyright © 2016 徐鹏. All rights reserved.
//

#ifndef Layers_hpp
#define Layers_hpp
#include "Neuron.hpp"
#include <stdio.h>
class Layer1
{
private:
    static const int Neuron_max_num = 10;
public:
    Layer1();
    Layer1(int neurons_num);
    ~Layer1();
    Neuron neurons_[Neuron_max_num];
    int neurons_num_;
};

#endif /* Layers_hpp */
