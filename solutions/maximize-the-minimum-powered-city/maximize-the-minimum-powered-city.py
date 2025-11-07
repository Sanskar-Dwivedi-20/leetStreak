import collections

class Solution:
    def maxPower(self, stations: List[int], r: int, k: int) -> int:
        N = len(stations)

        def good(target):
            needed = 0
            q = collections.deque()
            current = sum(stations[:r + 1])

            if current < target:
                a = target - current
                needed += a
                current += a
                q.append((r, a))

            for i in range(1, N):
                if i + r < N:
                    current += stations[i + r]

                if i - r - 1 >= 0:
                    current -= stations[i - r - 1]
                    if q and q[0][0] == i - r - 1:
                        _, d = q.popleft()
                        current -= d

                if current < target:
                    a = target - current
                    needed += a
                    current += a
                    q.append((i + r, a))

                if needed > k:
                    return False

            return needed <= k

        lo, hi = 0, sum(stations) + k
        ans = 0

        while lo <= hi:
            mid = (lo + hi) // 2
            if good(mid):
                ans = mid
                lo = mid + 1
            else:
                hi = mid - 1

        return ans
