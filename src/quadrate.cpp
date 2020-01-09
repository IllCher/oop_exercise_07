#include "quadrate.h"
quadrate::quadrate(): _a{0, 0}, _b{0, 0}, _c{0, 0}, _d{0, 0}{}
quadrate::quadrate(const point& a, const point& b, const point& c, const point& d) : _a{a}, _b{b}, _c{c}, _d{d}{}
quadrate::quadrate(std::istream &is) {
    is >> _a >> _b >> _c >> _d;
};
double quadrate::square() const {
    return ((_c.x - _a.x) * (_c.x - _a.x) + (_c.y - _a.y) * (_c.y - _a.y))/2;
}
point quadrate::center() const {
    return point{(_a.x + _c.x) / 2, (_a.y + _c.y) / 2};
}
std::ostream& quadrate::print(std::ostream& os) const {
    os << _a  << _b << _c << _d << std::endl;
}

std::ostream& quadrate::print_file(std::ostream& os) const {
    os << "q\n" << _a  << _b << _c << _d << std::endl;
}

