#include <iostream>

using namespace std;

int M1[10][10] = {
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 1}
};

int M2[10][10] = { 
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };
int main()
{

  int triangular=1;

  for(int i = 0; i < 10; i++) 
    {
      for(int j = 0; j < 10; j++)
      { 
         if(i != j) 
         {
             if(M1[i][j] != 0) 
                {
                 triangular = 0;
                }
         }
      }
    }
  if (triangular == 0)
     {
        cout << "M1 nao eh triangular" << endl;
     } else 
     {
      cout << "M1 eh triangular" << endl;
     }


  for(int i = 0; i < 10; i++) 
  {
     for(int j = 0; j < 10; j++)
       { 
        if(i != j) 
        {
            if(M2[i][j] != 0) 
              {
               triangular = 0;
               }
        }  
      }
  }
  if (triangular == 0)
  {
      cout << "M2 nao eh triangular" << endl;
  } else {
      cout << "M2 eh triangular" << endl;
  }
 return 0;
}


