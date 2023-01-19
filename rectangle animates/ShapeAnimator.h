#pragma once // 會讓所在的檔案在一個單獨的編譯中只被包含一次
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <windows.h> //包含Windows API中所有函數
using namespace std;

const HANDLE outHandle = GetStdHandle(STD_OUTPUT_HANDLE); //取得螢幕控制權

// A shape has a direction and is able to move in that direction.
// The move is a virtual member function.
class Shape
{
public:
    void setDirection(int drow, int dcol)
    {
        dRow = drow; dCol = dcol;
    }
    void getDirection(int &drow, int &dcol) const
    {
        drow = dRow; dcol = dCol;
    }
    virtual void move() = 0;
private:
    int dCol, dRow; // Direction of motion
};

// A SimpleShape can be drawn at a given position in a specified color
class SimpleShape : public Shape
{
public:
    virtual void draw() const = 0;
    void getPosition(int &row, int &col) const
    {
        row = rowPos; col = colPos;
    }
    void setPosition(int row, int col)
    {
        rowPos = row; colPos = col;
    }
    void setColor(int c) { color = c; }
    int getColor() const { return color; }
    virtual void move() override;
private:
    int color;
    int rowPos, colPos;
};

// A Box is a rectangular type of shape
class Box : public SimpleShape
{
public:
    virtual void draw() const override;
    Box(int rowPos, int colPos, int width, int height);
private:
    int width, height;
};

class Box2 : public SimpleShape
{
public:
    virtual void draw() const override;
    Box2(int rowPos, int colPos, int width, int height);
private:
    int width, height;
};

// A Tent is an isosceles triangle whose horizontal base has a
// given length and whose height is half the length of the base.
// The position of the triangle is the left endpoint of the base


// A ComplexShape is made up of simpler shapes. It is represented
// as a vector of pointers to the simpler shapes that make it up
class ComplexShape : public Shape
{
public:
    ComplexShape(const vector<shared_ptr<Shape>>& shapeCollection);
    virtual void move() override;
private:
    vector<shared_ptr<Shape>>shapes;
};

