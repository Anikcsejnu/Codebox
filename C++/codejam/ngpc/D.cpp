#include <bits/stdc++.h>
#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4


using namespace std;


int main()
{
    int t, sizemat;

    cin>>t;
    while(t--)
    {
        cin>>sizemat;

    int initial_direction = UP , n = sizemat , p = 1 ;

    int r ,c , a[sizemat][sizemat];

    int row_right  = 0 , column_down = n-1 , row_left = n-1 , column_up = 0 ;

    for(r = 0 ; r < sizemat ; r++)
    {
        for(c = 0 ; c < sizemat ; c++)
            a[r][c] = 0 ;

    }

    while(p != n*n+1)
    {

          if(initial_direction == UP)
          {
            //Move RIGHT

            r = row_right++ ;

            for(c = 0 ; c < n ; c++)
            {
                if(a[r][c] == 0)
                    a[r][c] = p++;

            }




            initial_direction = RIGHT ;
          }
          else if(initial_direction == RIGHT)
          {

            c = column_down-- ;

            for(r = 0 ; r < n ; r++)
            {

                if(a[r][c] == 0)
                    a[r][c] = p++;
            }


            initial_direction = DOWN ;




          }
          else if(initial_direction == DOWN)
          {

            r = row_left-- ;

            for(c = n-1 ; c >= 0 ; c--)
            {
                if(a[r][c] == 0)
                    a[r][c] = p++;

            }

            initial_direction = LEFT ;





          }
          else if(initial_direction == LEFT)
          {

            c = column_up++;

            for(r = n-1 ; r >= 0 ; r--)
            {

                if(a[r][c] == 0)
                  a[r][c] = p++;

            }


            initial_direction = UP ;
          }

    }


    for(r = 0 ; r < sizemat ; r++)
    {
          for(c = 0 ; c < sizemat ; c++)
          printf("%4d",a[r][c]);

          printf("\n");



    }
    printf("\n");
    }

}
