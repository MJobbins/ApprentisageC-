#include "Point2d.h"
#include <math.h>

const Point2d::ORIGIN (0, 0); 

Point2d::Point2d(int x, int y) : m_x(x), m_y(y)
{}

Point2d::Point2d(const Point2d& p) : m_x(p.getX()), m_y(p.getY())
{}

Point2d::~Point2d()
{}

Point2d Point2d::getX() const
{
    return m_x;
}

Point2d Point2d::getY() const
{
    return m_y;
}

void Point2d::setX(int x)
{
    m_x = x;
}

void Point2d::setY(int y)
{
    m_y = y;
}

void Point2d::setXY(int x, int y)
{
    m_x = x;
    m_y = y;
}

Point2d& Point2d::operator =(const Point2d& p)
{
    m_x = p.getX();
    m_y = p.getY();
}

bool operator==(Point2d const& p1, Point2d const& p2)
{
    return p1.getX() == p2.getX() && p1.getY() == p2.getY()
}

bool operator!=(Point2d const& p1, Point2d const& p2)
{
    return !(p1 == p2);
}