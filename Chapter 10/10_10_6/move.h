//
// Created by klause on 2020/7/31.
//

#ifndef CPP_PRIMER_PLUS_MOVE_H
#define CPP_PRIMER_PLUS_MOVE_H

class Move {
private:
    double x;
    double y;

public:
    Move(double a = 0, double b = 0);

    void show_move() const;

    Move add(const Move &m) const;

    void reset(double a = 0, double b = 0);
};

#endif //CPP_PRIMER_PLUS_MOVE_H
