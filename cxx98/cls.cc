// g++ cls.cc -o cls

#include <iostream>

class Rectangle{
    private:
        int height;
        int width;
    
    public:
        Rectangle(int h=0, int w=0): height(h), width(w){}
        int Area();
};

int Rectangle::Area(){
    return height * width;
}


int main(){
    int width;
    int height;
    std::cin >> width;
    std::cin >> height;
    Rectangle rect = Rectangle(width, height);
    std::cout << rect.Area()<< std::endl;

    return 0;
}