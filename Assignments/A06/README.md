## 12578- 12578 - 10:6:2
### Joachim Isaac  
### Approach:

Understand:
We have the national flg of bangladesh as what we use to visualize the problem.

Notice that the question provides us some essential information.
Our input will be T which is the number of testcases and the following l or lengths within a test case.

We need to take in T and base on the length we get we have to print out the areas of the circle in the flag 
and the area of the rectangle, exclusive of the circle.

The information provided gives us a few hints that PI is considered arcos(-1)
and that in our first intput where the length is 10 our radius was 1 and our width was 6.

I also specified that their were ratios asscoiated with this 10:6 for the width and 5:1 with the radius.

more specifically it was said that (If the length is 10 then width should be 6 and radius should be 2). 


This means that we know our radius and width scale with our length 

radius would be 10/2 ==> 0.2
width would be 10/6 ==> 0.6



radius = L * 0.2 
width = L * 0.6
PI = arcos(-1)


Now that we have all our tools we just need to find the areas and print them out.

Since we need the area of teh rectangle , exclusive of the circle we have to account for that 

so our algorithm should go like this 

take in test case ==> T

loop T times:
    
    read in Length

    radius = Length * 0.2
    width = Length * 0.6


    //calculate the area of the circle 
    circle_area = PI * radius * radius 

    //calculate the total area of the rectangle
    total_rect_area =  Length * width 

    //minus the area of the circle from the total_rect_area to get the rect_area_exclusive of the circle 
    rect_area = total_rect_area - circle_area

    print ==> circle_area, rectangle_area



time complexity O(T) where T is the number if test cases 
space O(1)





### Sources

#resource to find out if there is a built in arc-cosine in c++ 
https://www.programiz.com/cpp-programming/library-function/cmath/acos



################################################################################################################
################################################################################################################

## 460 - Overlapping Rectangles
### Joachim Isaac  

### Approach:

Understand:
The aim of this problem is to decide whether two rectangles overlap or not.
we will be given input as Xll(lower_left), Yll(lower_left), Xur(Upper right) and Yur(upper right).
We will be given two sets of these. They will reperesent our two rectangles .

In addtion to the points we can to consider that wil will be given a single character input, that we can call T.
T will represent the number of testcases we have.

So what exactly do we need to return, well if the rectangle doesn't overlap we have to return "No Overlap"

It was also said that if two windows that share a common edge but have no other points in common are considered
to have ‘No Overlap’.

Alternatively if we do get a pair of rectangles that do overlap we need to print out the cordinates for the 
region that overlaps.

So simply speaking how could we solve it ?

In simple terms it's a few simple steps 

1. We have to find out if the current test case has an Overlap if it doesn't we print "No Overlap"
2. If it does however we need to now calculate the region that overlaps , store those values and print them out.

So it's easy to just say that, but how do we actuallt acheive these steps in code, or atleast visually/agorithmicly?


Let's work on that:
                                        
```
(upper_left)                (upper_right)
 | ____________|________________________|(100,120) -----------------------(500,120)
       |       |                        |                                 |  
       |       |                        |                                 |
(0,20) --------|-------------------------                                 |
|_            (80,0)_____________________________________________________ |
(lower_left)                (lower_right)
```


XLL, YLL, XUR and YUR 

rectangle1 ==> 0 20 100 120
rectangle1 ==> 80 0 500 60


Let's notice that 

cases:
1--> if the rec1 topright y value is <  the rec2 bottom left y value: then the second triangle is completely above the first .
2--> if the rec1 bottom left y is greater than rec2 top right y: then the first rectangle is completely above the second.
3--> if the rec1 top right x is less than rec2 bottom left x: then rec2 is to the right of rec1 completely .
4--> if the rec1 bottom left x value is greater than rec2 bottom right x: then rec2 is to the left of rec1 completely.

These are all cases where the rectangles do not overlap 

so if none of these hold we can true true 
but if ant do hold we return false 

in order words, if any of the cases hold the rectangles do not overlap and if none hold they do overlap.
we could wrap this in a fucntion ==> do_overlap(rectangle1,rectangle2):bool

so now we can get more into the nitty gritty 

but we need to know how to get the region of overlap 


based on the sample out, i noticed a pattern 



Sample Input
1
0 20 100 120
80 0 500 60

Sample Output
80 20| 100 60
max  | min
     |
     |
     |
We are taking the min and max values for each point

for the first half, we grab both max
for the second half we grab both min 

0 20 100 120
80 0 500 60

max(0,80) = 80
max(20,0) = 20

min(100,500) = 100
min(120,60) =60

this ends up giving us the result we want 
80 20  100 60

T = numberOfTestCases

loop for T times:
     rec1,rec2 = read in the two rectangles 

     if do_overlap(rec1,rec2){
         //how do we get the region of overlap?
        output = ""
        Xll = max(rec1.Xll,rec2.Xll)
        Yll = max(rec1.Yll,rec2.Yll)
        Xur = min(rec1.Xur,rec2.Xur)
        Yur = min(rec1.Yur,rec2.Yur)
        output += string(Xll) + string(Yll) + string(Xur) + string(Yur)
        print output 
     }
     else{
         print ‘No Overlap’
     }

O(T) time 
O(1) space if we do not include our output string, it would also be fair to say that 
the output will always be of length 4 so it could be still considered constant.



### Sources
helped to visualize the points for the rectangle:
https://www.baeldung.com/java-check-if-two-rectangles-overlap
