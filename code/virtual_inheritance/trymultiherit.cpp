#include "TextBox.hpp"
#include <iostream>

int main() {
    // create a TextBox and call draw
    TextBox myTextBox("My Text", 2.5, 2.0);
    myTextBox.draw(); //error draw ambigous
    
    // Fix the code to call both draws by using types
    Text &t = myTextBox; 
    t.draw();
    Rectangle &r = myTextBox;
    r.draw();

    // try with virtual inheritance


}
