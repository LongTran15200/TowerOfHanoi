# Tower of Hanoi Solver

This code provides a solution to the Tower of Hanoi problem using a recursive approach. It follows a well-structured step-by-step logic.

## Code Logic

### Initialization

The main function `Hanoi` is the entry point. It takes tower names (start, des, a1, a2, a3) and the number of disks (n) as parameters.

### Base Case

In each recursive function (`StartToA3`, `DesToA3`, and `A3ToDes`), we check for a base case when `n` becomes 0, indicating no disks to move.

### Recursive Movements

1. `StartToA3`: Moves n-1 disks from start to a3, using des, a1, a2, and a3 as auxiliary towers.
2. `A3ToDes`: Moves the largest disk from start to des after the n-1 disks are on a3, using des, a1, a2, and a3 as auxiliary towers.
3. `DesToA3`: Moves n-1 disks from des to a3 after the largest disk is on des, using des, a1, a2, and a3 as auxiliary towers.

### Counting and Output

The code increments `moveNumber` at each step to track total moves and prints move details, providing a clear visualization.

## Time Complexity (Big O)

The algorithm exhibits a time complexity of O(3^n) due to the three recursive calls required to move each disk above another. Time complexity grows exponentially with the number of disks (n).

## Space Complexity (Big O)

The space complexity is O(n), increasing linearly with n, as each recursive call adds to the call stack.

## Usage

To use the code, call the `Hanoi` function with tower names and the number of disks. Example usage:
Hanoi("start", "dest", "a1", "a2", "a3", n);
