// Chef and Instant Noodles
// Chef has invented 
// 1
// 1-minute Instant Noodles. As the name suggests, each packet takes exactly 
// 1
// 1 minute to cook.

// Chef's restaurant has 
// �
// X stoves and only 
// 1
// 1 packet can be cooked in a single stove at any minute.

// How many customers can Chef serve in 
// �
// Y minutes if each customer orders exactly 
// 1
// 1 packet of noodles?

// Input Format
// The first and only line of input contains two space-separated integers 
// �
// X and 
// �
// Y — the number of stoves and the number of minutes, respectively.
// Output Format
// Print a single integer, the maximum number of customers Chef can serve in 
// �
// Y minutes
// Constraints
// 1
// ≤
// �
// ,
// �
// ≤
// 1000
// 1≤X,Y≤1000
// Sample 1:
// Input
// Output
// 3 7
// 21
// Explanation:
// Chef cooks for 
// �
// =
// 7
// Y=7 minutes and can cook 
// �
// =
// 3
// X=3 packets per minute, one on each stove.

// So, the total number of packets that can be cooked is 
// �
// ⋅
// �
// =
// 3
// ⋅
// 7
// =
// 21
// X⋅Y=3⋅7=21.

// Each person orders one packet, so the maximum number of customers that can be served is 
// 21
// 21.

// Sample 2:
// Input
// Output
// 7 8
// 56
// Explanation:
// Chef cooks for 
// �
// =
// 8
// Y=8 minutes and can cook 
// �
// =
// 7
// X=7 packets per minute, one on each stove.

// So, the total number of packets that can be cooked is 
// �
// ⋅
// �
// =
// 7
// ⋅
// 8
// =
// 56
// X⋅Y=7⋅8=56.

// Each person orders one packet, so the maximum number of customers that can be served is 
// 56
// 56.
#include <stdio.h>

int main() {
    int X, Y;

    
    scanf("%d %d", &X, &Y);
    int customers = X * Y;
       printf("%d\n", customers);

    return 0;
}