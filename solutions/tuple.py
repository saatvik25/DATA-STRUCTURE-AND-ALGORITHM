# hash() is one of the functions in the __builtins__ module, so it need not be imported.


if __name__ == '__main__':
    n=int(input())
    a=tuple(map(int,raw_input().split()))
    print hash(a)
