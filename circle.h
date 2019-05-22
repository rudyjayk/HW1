#ifndef CIRCLE_H
#define CIRCLE_H

 class Circle{
    private:

        double radius;

    public:

        Circle(){
            radius = 0.0;
        }
        Circle(double r_in){
            radius = r_in;
        }
        double getArea(){
            return 3.14*radius*radius;
        }
        double getRadius(){
            return radius;
        }
        void setRadius(double r){
            radius = r;
        }

        Circle operator+ (Circle & other){
            
            Circle newCircle;
            newCircle.setRadius(this->getRadius() + other.getRadius());

            return newCircle;
        }
};
#endif