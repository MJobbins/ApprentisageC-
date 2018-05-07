//
// Created by Jobbins Morgan on 07/05/2018.
//

#include <cmath>
#include "Point2d.h"
#include "Vector2d.h"

Vector2d::Vector2d(int p1_x, int p1_y, int p2_x, int p2_y) :
m_p1(p1_x, p1_y),
m_p2(p2_x, p2_y)
{}

Vector2d::Vector2d(const Point2d &p1, const Point2d &p2) :
m_p1(p1),
m_p2(p2)
{}

Vector2d::Vector2d(Vector2d const &vect) :
m_p1(vect.m_p1),
m_p2(vect.m_p2)
{}


Vector2d::Vector2d(int x, int y) :
m_p1(0, 0),
m_p2(x, y)
{}

Vector2d::~Vector2d()
{}

Point2d Vector2d::getP1()
{
    return m_p1;
}

Point2d Vector2d::getP2()
{
    return m_p2;
}

void Vector2d::setP1(Point2d const &p)
{
    m_p1 = p;
}

void Vector2d::setP1(int x, int y)
{
    m_p1.setX(x);
    m_p1.setY(y);
}

void Vector2d::setP2(Point2d const &p)
{
    m_p2 = p;
}

void Vector2d::setP2(int x, int y)
{
    m_p2.setX(x);
    m_p2.setY(y);
}

int Vector2d::length()
{
    return sqrt((pow((m_p1.getX() - m_p2.getX()), 2) + pow((m_p1.getY() - m_p2.getY()), 2)));
}

int Vector2d::normeX()
{
    return m_p2.getX() - m_p1.getX();
}

int Vector2d::normeY()
{
    return m_p2.getY() - m_p1.getY();
}

