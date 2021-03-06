#!/usr/bin/env python


class Solution:
    def findMinDifference(self, timePoints: List[str]) -> int:
        minutes = sorted(
            list(map(lambda x: int(x[:2]) * 60 + int(x[3:]), timePoints)))
        return min((y - x) % (24 * 60) for x, y in zip(minutes, minutes[1:] + minutes[:1]))
