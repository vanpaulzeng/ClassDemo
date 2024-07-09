//
//  main.cpp
//  ClassDemo
//
//  Created by Admin on 2024-06-28.
//

#include <iostream>

#include <string>
using namespace std;


class Houses{
public:
    Houses(string address);
    //~Houses();
    void setAddr(string newAddr);
    string getAddr();
    
private:
    string priAddr;
};

Houses::Houses(string address){
    setAddr(address);
}

void Houses::setAddr(string newAddr){
    priAddr = newAddr;
}

string Houses::getAddr(){
    return (priAddr);
}


int main() {
    // insert code here...;
    
    Houses   myHouse("5555");
    
    myHouse.setAddr("1671");
        
    
    
    std::cout << "House address is : \n" << myHouse.getAddr() << "\n";
    
    
    return 0;
}
