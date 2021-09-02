class Polygon {
public:
    Polygon(int n, float radius);
    // have to use virtual for virtual method 
    virtual float computePerimeter();
protected:
    int m_nbSides;
    int m_radius;
};

class Pentagon : public Polygon {
public:
    Pentagon(float radius);
};

class Hexagon : public Polygon {
public:
    Hexagon(float radius);
    // 6*radius is easier than generic case
    // have to use override for virutal method
    // warning have to run with -Wc++11-extensions added in Makefile
    float computePerimeter() override;
};
