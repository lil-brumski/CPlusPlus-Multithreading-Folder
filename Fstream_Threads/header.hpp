#pragma once

#include <iostream>
#include <fstream>

void func_one(const std::string& path){
    std::ofstream F1(path);
    
    for(size_t x = 1; x <= 100; x++){
        F1 << x << ".David Tamaratare Oghenebrume.\n";
    }
    
    F1.close();  
    
    std::cout << "Function 1 called!\n";
}


void func_two(const std::string& path){
    std::ofstream F2(path);
    
    for(size_t x = 1; x <= 100; x++){
        F2 << x << ".David Tamaralayefa Oghenerumo.\n";
    }
    
    F2.close();  
    
    std::cout << "Function 2 called!\n";    
}


void func_three(const std::string& path){
    std::ofstream F3(path);
    
    for(size_t x = 1; x <= 100; x++){
        F3 << x << ". Computer Engineering.\n";
    }
    
    F3.close();  
    
    std::cout << "Function 3 called!\n";    
}


void func_four(const std::string& path){
    std::ofstream F4(path);
    
    for(size_t x = 1; x <= 100; x++){
        F4 << x << ". Embedded Systems.\n";
    }
    
    F4.close();  
    
    std::cout << "Function 4 called!\n";    
}


void func_five(const std::string& path){
    std::ofstream F5(path);
    
    for(size_t x = 1; x <= 100; x++){
        F5 << x << ".C++ is the best programming language for low-level and high performance applications.\n";
    }
    
    F5.close();  
    
    std::cout << "Function 5 called!\n";    
}
