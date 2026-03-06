// The Tower of Hanoi is a classic mathematical puzzle involving three rods (A, B, and C) and n disks of different sizes. Initially, all disks are stacked on rod A in decreasing order of diameter - the largest disk at the bottom and the smallest at the top.
// Goal is to move the entire stack to another rod (rod C) while following these rules:

// Move only one disk at a time.
// At each step, you can take the top disk from any rod and place it on another rod.
// A disk can only be moved if it is the topmost disk of a rod.
// No larger disk may be placed on top of a smaller disk.

#include <stdio.h>

void hanoi(int n, int st, int end)
{
    if (n == 0)
        return;
    int other = 6 - (st + end);
    hanoi(n - 1, st, other);
    printf("Disk %d moved from %d to %d\n", n, st, end);
    hanoi(n - 1, other, end);
}
int main()
{
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);
    hanoi(n, 1, 3);
    return 0;
}

// EXPLANATION

// 🥇 Step 1 — Move n−1 disks aside
// hanoi(n - 1, st, other);

// 👉 This is:

// move 99 → (if n = 100)

// Move all smaller disks out of the way.

// 🥈 Step 2 — Move biggest disk
// printf("Disk %d moved from %d to %d\n", n, st, end);

// 👉 This is:

// move biggest disk

// Why disk n?

// Because disks are numbered:

// 1 = smallest
// n = biggest

// So when n=100:

// Move disk 100 from st → end

// Big boss move 😎

// 🥉 Step 3 — Bring smaller stack back
// hanoi(n - 1, other, end);

// 👉 This is:

// move 99 → onto the biggest disk