#!/usr/bin/env python

s, g = Counter(secret), Counter(guess)
a = sum(i == j for i, j in zip(secret, guess))
return '%sA%sB' % (a, sum((s & g).values()) - a)
