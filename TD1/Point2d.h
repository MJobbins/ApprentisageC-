#ifndef POINT2D_H_INCLUDED
#define POINT2D_H_INCLUDED

class Point2d
{
	/*******************
	**METHODES
	********************/
	public :

	//Constante static contenant le point d'origine (0,0)
	static const Point2d ORIGIN;

	//Constructeurs et destructeurs
	Point2d(int x, int y);
	Point2d(Point2d const& p);
	virtual ~Point2d();

	//Getter et Setter
	void setX(int x);
	void setY(int y);
	void setXY(int x, int y);

	int getX() const;
	int getY() const;

	//Operators
	Point2d& operator=(Point2d const& p);

	friend bool operator==(Point2d const& p1, Point2d const& p2);
	friend bool operator!=(Point2d const& p1, Point2d const& p2);

	/*******************
	**ATTRIBUTS
	********************/
	private :

	int m_x, m_y;
};

#endif