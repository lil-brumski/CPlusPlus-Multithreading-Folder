//#include <iostream>
#include <thread>
#include "header.hpp"

int main(){
    std::thread t1(func_one, "text_files/brumski.txt");
    
    std::thread t2(func_two, "text_files/lala.txt");
    
    std::thread t3(func_three, "text_files/comp_eng.txt");
    
    std::thread t4(func_four, "text_files/embedded_systems.txt");
    
    std::thread t5(func_five, "text_files/cpp.txt");
    
    t1.join();
    
    t2.join();
    
    t3.join();
    
    t4.join();
    
    t5.join();
}