#ifndef VECTOR2D_H_INCLUDED
#define VECTOR2D_H_INCLUDED

class Vector2d
{
	/*******************
	**METHODES
	********************/
	public :

	//Constructeurs et destructeur
	Vector2d(Point2d const& p1, Point2d const& p2);
	Vector2d(int p1_x, int p1_y, int p2_x, int p2_y);
	Vector2d(Vector2d const& vect);
	Vector2d(int x, int y);
	~Vector2d();

	//Getters et Setters
	Point2d getP1();
	Point2d getP2();

	void setP1(Point2d const& p);
	void setP1(int x, int y);
	void setP2(Point2d const& p);
	void setP2(int x, int y);

	//Methodes

	//on devrais ici retourner un float pour plus de precisions
	int length();
	int normeX();
	int normeY();

	


	/*******************
	**ATTRIBUTS
	********************/
	private :

	Point2d m_p1, m_p2;

};

#endif