#ifndef BOX_H;
#define BOX_H; 
using namespace std; 

class Box { 
    public: 
    Box(); 

    Box(const double newLength, const double newBreadth, const double newHeight); 
    ~Box(); 
    double GetVolume(); 

    void SetLength (double length); 

    void SetBreadth (double Breadth); 

    void SetHeight(double Height); 
// Overload + operator to add two Box objects. Box operator+(const Box& b); 

    private: 
    double length; // Length of a box 
    double breadth; // Breadth of a box 
    double height; // Height of a box 

}; 
#endif;
