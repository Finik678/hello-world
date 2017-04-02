#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

#define pi 3.1416
#define radiusEarth 6378.1
#define radiusPool 3.0
#define radiusTrack 4.0

class Circle {
		private:
			double radius, circumference, area;
			
		public:
            Circle(double) {
                setRadius(0);
            }
			void setRadius(double radius) {
                this->radius = radius;
                this->circumference = 2 * pi * radius;
                this->area = pi * radius * radius;
            };

			void setCircumference(double circumference) {
                this->circumference = circumference;
                this->radius = circumference / (2 * pi);
                this->area = pi * radius * radius;
            };

			void setArea(double area) {
                this->area = area;
                this->radius = sqrt(area / pi);
                this->circumference = 2 * pi * radius;
            };

            double get_radius() {
                return radius;
            };

            double get_circumference() {
                return circumference;
            };

            double get_area() {
                return area;
            };

		};

int main() {
	setlocale(LC_ALL , "Russian");

	
    // ������ ����� ������ � ��������
    Circle Earth(radiusEarth);
    Circle Rope(0);
    Rope.setCircumference(Earth.get_circumference() + 1);

    double gap = Rope.get_radius() - Earth.get_radius();

    cout << "������ ����� ������ � �������� : " << gap << "��" << endl;

    // ��������� ���������� 
    Circle Pool(radiusPool);
    Circle Perimeter(radiusTrack);
   
    Pool.setRadius(radiusPool);
    Perimeter.setRadius(radiusTrack);

    double track = Perimeter.get_area() - Pool.get_area();
    double fence = Perimeter.get_circumference();
    double cost_track = track * 1000;
    double cost_fence = fence * 2000;
    
    cout << "��������� �������� ������� " << cost_track << " ������" << endl;
    cout << "��������� ������� � ������ " 
         << cost_track + cost_fence << " ������" << endl;
	_getch();
    return 0;
}