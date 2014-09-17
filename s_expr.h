#ifndef S_EXPR_H
#define S_EXPR_H

template <typename T, typename... Values>
auto s(T f, Values... args) -> decltype(f(args...))
{
    return f(args...);
}

template <>
struct s <>
{
    // atom
    auto car = 0;
    auto cdr = 0;
}

template <typename T, typename... Values>
struct s
{
    // s-expr
    static auto func = [&, f, args...] { return f(args...); };
    static auto car = f;
    static auto cdr = s<Values...>
    static auto len = sizeof...(Values) + 1;
};

// Moral of the story: Bad ideas can be just as fun as good ideas

#endif /* S_EXPR_H */
