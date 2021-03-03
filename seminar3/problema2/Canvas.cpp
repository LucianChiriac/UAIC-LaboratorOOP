#include "Canvas.h"

Canvas::Canvas(int width,int height)
{
    this->width = width;
    this->height = height;
    this->matrix = new char*[height];
    for(int i=0;i<height;i++)
        this->matrix[i] = new char[width];
}
void Canvas::Print()
{
    for(int i=0;i<this->height;i++)
    {
        for(int j=0;j<this->width;j++)
            std::cout << this->matrix[i] << ' ';
        std::cout << '\n';
    }
}

void Canvas::Clear()
{
    for(int i=0;i<this->height;i++)
    {
        delete this->matrix[i];
        this->matrix[i] = new char[width];
    }
}

