#ifndef POINT_H
#define POINT_H

class Point{
    private:
		int x;
		int y;
    public:
        Point();
        Point(int x, int y);
        void SetPoint(int x, int y);
        int GetX();
        int GetY();
        void MoveUp();
        void MoveDown();
        void MoveLeft();
        void MoveRight();
        void Draw(char ch='O');
        void Erase();
        void CopyPos(Point * p);
        int IsEqual(Point * p);
        void Debug();
};

#endif // POINT_H
