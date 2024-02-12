#ifndef CLASS_PAIR_H
#define CLASS_PAIR_H

class Y;

class X {
  Y *pointer2Y;
};

class Y {
  X objX;
};
#endif