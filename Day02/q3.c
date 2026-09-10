/*
 * Name: Anurag Negi
 * Roll: 590038663
 * Day: 02 Question: 3
 * Date: 07-09-2026
 * PROBLEM STATEMENT:
 * Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
 */
    #include <stdio.h>
    int main()
    {
        int length,breadth;
        scanf("%d %d",&length,&breadth);
        int area=length*breadth;
        int perimeter=2*(length+breadth);
        printf("Area=%d, Perimeter=%d\n", area, perimeter);
        return 0;
    }