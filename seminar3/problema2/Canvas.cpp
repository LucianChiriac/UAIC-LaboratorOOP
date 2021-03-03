#include "Canvas.h"

Canvas::Canvas(int width,int height)
{
    this->width = width;
    this->height = height;
    this->matrix = new char*[height];
    for(int i=0;i<height;i++)
        this->matrix[i] = new char[width];
    this->Clear();
}
void Canvas::Print()
{
    for(int i=0;i<this->height;i++)
    {
        for(int j=0;j<this->width;j++)
            std::cout << this->matrix[i][j] << ' ';
        std::cout << '\n';
    }
}

void Canvas::Clear()
{
    for(int i=0;i<this->height;i++)
    {
        for(int j=0;j<this->width;j++)
            this->matrix[i][j]=' ';
    }
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
    int y = y1;
    int w = x2 - x1;
    int h = y2 - y1;
    int f = 2*h-w;

    for(int x=x1;x<=x2;x++)
    {
        this->matrix[x][y] = ch;
        if(f<0)
        {
            f += 2*h;
        }
        else
        {
            y++;
            f+=2*(h-w);
        }
    }

}

void Canvas::SetPoint(int x,int y, char ch)
{
    this->matrix[x][y] = ch;
}