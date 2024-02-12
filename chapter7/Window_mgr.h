#ifndef WINDOW_MGR
#define WINDOW_MGR
#include <vector>
#include <string>
class Screen;

class Window_mgr {
  public:
  using ScreenIndex = std::vector<Screen>::size_type;
  void clear(ScreenIndex);
  ScreenIndex addScreen(const Screen&);
  private:
  std::vector<Screen> screens;
};

class Screen {
public:
  friend void Window_mgr::clear(ScreenIndex);
  using pos = std::string::size_type;
  Screen() = default;
  Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' '){};
  Screen(pos ht, pos wd, char c)
      : height(ht), width(wd), contents(ht * wd, c){};
  char get() const { return contents[cursor]; }
  char get(pos ht, pos wd) const;
  Screen &move(pos r, pos c);
  // means it can be called on both const and non-const objs
  void some_member() const;
  Screen &set(char);
  Screen &set(pos, pos, char);
  Screen &display(std::ostream &os) {
    do_display(os);
    return *this;
  }
  const Screen &display(std::ostream &os) const {
    do_display(os);
    return *this;
  }
  pos size() const;

private:
  mutable size_t access_ctr;
  pos cursor = 0;
  pos height = 0, width = 0;
  std::string contents;
  void do_display(std::ostream &os) const { os << contents; }
};

// compute row and col of cursor
inline Screen &Screen::move(pos r, pos c) {
  pos row = r * width;
  cursor = row + c;
  return *this;
}

inline char Screen::get(pos r, pos c) const {
  pos row = r * width;
  return contents[row + c];
}

inline void Screen::some_member() const { ++access_ctr; }

inline Screen &Screen::set(char c) {
  contents[cursor] = c;
  return *this;
}

inline Screen &Screen::set(pos row, pos col, char ch) {
  contents[row * width + col] = ch;
  return *this;
}

inline Screen::pos Screen::size() const {
  return height * width;
}

inline void Window_mgr::clear(ScreenIndex i) {
  Screen &s = screens[i];
  s.contents = std::string(s.height * s.width, ' ');
}

inline Window_mgr::ScreenIndex Window_mgr::addScreen(const Screen &s) {
  screens.push_back(s);
  return screens.size() - 1;
}
#endif