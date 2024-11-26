/*Write a function towerOfHanoi that takes three arguments: the number of disks n, the source peg, the destination peg, and the auxiliary peg.
The function should recursively move the disks from the source peg to the destination peg using the auxiliary peg.
Print the steps to move the disks.*/

#include <iostream>

void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    // Base case: If there's only one disk, move it directly from source to destination
    if (n == 1) {
        std::cout << "Move disk 1 from " << source << " to " << destination << std::endl;
        return;
    }

    // Move top n-1 disks from source to auxiliary, using destination as auxiliary
    towerOfHanoi(n - 1, source, auxiliary, destination);

    // Move the nth disk from source to destination
    std::cout << "Move disk " << n << " from " << source << " to " << destination << std::endl;

    // Move the n-1 disks from auxiliary to destination, using source as auxiliary
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n = 3; // Number of disks
    towerOfHanoi(n, 'A', 'C', 'B');  // A is the source, C is the destination, B is the auxiliary

    return 0;
}

