#ifndef HEADER_H
#define HEADER_H

class Rectangle
{
private:
//this shows the private member variables in this class
    float length;
    float width;
public:
//now it shows public  member variables in the class
    Rectangle();
    ~Rectangle();
    float getlength();
    float getwidth();

    void setlength(float lengthvalue);
    void setwidth(float widthvalue);

    float findArea();
};

#endif

