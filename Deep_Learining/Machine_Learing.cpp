//
//  Machine_Learing.cpp
//  CL
//
//  Created by 조유빈 on 20/08/2020.
//  Copyright © 2020 조유빈. All rights reserved.
//

#include <iostream>

#define MAX2(a,b) (a) > (b) ? (a) : (b)

class Neuron
{
public:
    double w_; // weight of one input
    double b_; // bias
    
    double getAct(const double& x)
    {
        // for linear or identity activation functions
        return x;
        
        // for ReLu activation functions
        return MAX2(0.0, 2);
    }
    
    double feedForward(const double& input)
    {
        // ouput y = f(\sigma)
        // \sigma = w_ * input x + b
        // for multiple inputs
        // \sigma = w0_ * x0_ + w1_ * x1 + ... + b
        
        const double sigma = w_ * input + b_;
        
        return getAct(sigma);
    }
};

int main()
{
    Neuron my_neuron;
    my_neuron.w_ = 2.0;
    my_neuron.b_ = 1.0;
    
    std::cout << "Input = 1.0" << my_neuron.feedForward(1.0) << std::endl;
    std::cout << "Input = 2.0" << my_neuron.feedForward(2.0) << std::endl;
    std::cout << "Input = 3.0" << my_neuron.feedForward(3.0) << std::endl;
    
    return 0;
}
