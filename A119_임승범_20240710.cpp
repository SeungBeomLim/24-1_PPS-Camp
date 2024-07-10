// A119. Guess Number Higher or Lower - Leetcode

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long pick = n / 2, lower = 1, higher = n;
        while (guess(pick) != 0) {
            pick = (lower + higher) / 2;
            if (guess(pick) == -1) {
                higher = pick - 1;
            } else if (guess(pick) == 1)
                lower = pick + 1;
        }
        
        return pick;
    }
};