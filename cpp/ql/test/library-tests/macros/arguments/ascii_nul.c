#define IGNORE(x)
#define ID(x) x
#define IGNORE2(x) IGNORE(ID(x))

// The following line contains an ASCII NUL character after "raw: " in the
// string literal. Not all editors may display or preserve it.
IGNORE2(ID("escaped: \0, raw:  "))
