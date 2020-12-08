
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;



struct Point{
  double x;
  double y;
  Point( double, double );
};



Point::Point( double nx = 0.0, double ny = 0.0 ):x(nx),y(ny){}




double length( Point p1, Point p2 ){

  return sqrt( (p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y) );


}




bool compare( Point p1, Point p2 ){

  return p1.x > p2.x;

  
}





int main(){


  int Cases, N;

  Point mountain[105];

  double highest, line, temp, m, c;


  while( scanf( "%d", &Cases ) != EOF ){


    for( int i = 0 ; i < Cases ; i++ ){

      scanf( "%d", &N );


      for( int j = 0 ; j < N ; j++)
        scanf( "%lf%lf", &(mountain[j].x), &(mountain[j].y) );


      sort( mountain, mountain+N, compare );


      highest = 0, line = 0;


      for( int j = 1 ; j < N ; j++ ){


        if( mountain[j].y > highest ){

          m = (mountain[j].y-mountain[j-1].y)  /  (mountain[j].x-mountain[j-1].x);

          c = mountain[j].y - m*mountain[j].x;

          temp = (highest-c)/m;

          line += length( mountain[j], Point( temp, highest ) );

          highest = mountain[j].y;

        }
        
      }

      printf( "%.2lf\n", line );

    }

  }

  return 0;

}

