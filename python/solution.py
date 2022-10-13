class Solution:
    @staticmethod
    def find_k_diff_pair(nums, k):
        """Find the first pair (nums[j]-nums[i]) that satisfies the nums[j]-nums[i] == k condition,
        then return the pair of values (i, j) (can be None),
        the specific conditions are as follows:

        Specific Conditions:
            - i != j
            - 0 <= i, j < len(nums)
            - nums[j] - nums[i]) == k

        Example:
        >>> Solution.find_k_diff_pair([1, 2, 3, 4], 1)
        (0, 1)
        >>> Solution.find_k_diff_pair([1, 2, 3, 4], 2)
        (0, 2)
        >>> Solution.find_k_diff_pair([4, 2, 3, 1], 3)
        (3, 0)
        >>> Solution.find_k_diff_pair([1, 2, 3, 4], 5)

        Args:
            nums (list[double]): a list of numbers
            k (double): the difference between the two numbers, i.e. nums[i] - nums[j] (can be negative)

        Returns:
            (int,int) or None : the first pair that satisfies the conditions
        """
        visited = dict()
        for i, num in enumerate(nums):
            if num - k in visited:
                return (visited[num - k], i)
            if num + k in visited:
                return (i, visited[num + k])
            visited.update({num: i})
        return None

    @staticmethod
    def find_k_diff_pairs(nums, k):
        """Find all pairs [(nums[i], nums[j]),...] that satisfy the nums[j]-nums[i] == k condition,
        then return the list of pairs [(i, j),...] (can be empty),
        NOTE : (nums[i], nums[j]) and (nums[j], nums[i]) are considered the same pair,
        the specific conditions are as follows:

        Specific Conditions:
            - i != j
            - 0 <= i, j < len(nums)
            - nums[j] - nums[i]) == k

        Example:
        >>> Solution.find_k_diff_pairs([1, 2, 3, 4], 1)
        [(0, 1), (1, 2), (2, 3)]
        >>> Solution.find_k_diff_pairs([1, 2, 3, 4], 2)
        [(0, 2), (1, 3)]
        >>> Solution.find_k_diff_pairs([1, 1, 1, 4, 4, 4], 3)
        [(0, 3), (0, 4), (0, 5), (1, 3), (1, 4), (1, 5), (2, 3), (2, 4), (2, 5)]
        >>> Solution.find_k_diff_pairs([1, 2, 3, 4], 5)
        []

        Args:
            nums (list[double]): a list of numbers
            k (double): the difference between the two numbers, i.e. nums[i] - nums[j] (can be negative)

        Returns:
            list[(i,j)...]: all pairs that satisfy the conditions

        """
        visited = dict()
        pairs = set()
        for i, num in enumerate(nums):
            if num in visited:
                visited[num].append(i)
            else:
                visited.update({num: [i]})

        for key in visited.keys():
            if key - k in visited:
                for i in visited[key - k]:
                    for j in visited[key]:
                        if i != j:
                            pairs.add((i, j))
            if key + k in visited:
                for i in visited[key]:
                    for j in visited[key + k]:
                        if i != j:
                            pairs.add((i, j))

        # convert to list and sort
        return sorted(list(pairs))


if __name__ == "__main__":
    import doctest

    doctest.testmod()

    print("All tests passed!")
