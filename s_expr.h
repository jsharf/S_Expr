#ifndef S_EXPR_H
#define S_EXPR_H

// NOTE: Requires C++14

template <typename T, typename... Values>
auto S(T f, Values... args) -> decltype(f(args...))
{
    return f(args...);
}



#endif /* S_EXPR_H */
