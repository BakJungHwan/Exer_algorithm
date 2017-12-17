public class countBolb {
   private static final int N = 8;
   private static int[][] image = {
       {1,0,0,0,0,0,0,1},
       {0,1,1,0,0,1,0,0},
       {1,1,0,0,1,0,1,0},
       {0,0,0,0,0,1,0,0},
       {0,1,0,1,0,1,0,0},
       {0,1,0,1,0,1,0,0},
       {1,0,0,0,1,0,0,1},
       {0,1,1,0,0,1,1,1}
   };
   
   private static final int BACKGROUND_PIXEL = 0;
   private static final int IMAGE_PIXEL = 1;
   private static final int VISITED_PIXEL = 2;

   public static void initializeImage()
	{
		int i = 0;
		int j = 0;
		for(i=0; i<N ; i++)
		{
			for(j=0; j<N; j++)
			{
				if(image[i][j] == VISITED_PIXEL)
				{
					image[i][j] = IMAGE_PIXEL;
				}
			}
		}
	}

	
   public static int countBolb(int x, int y){
    if(x<0 || y<0 || x>=N || y>=N)
    {
        return 0;
    }else if(image[x][y] != IMAGE_PIXEL)
    {
        return 0;
    }
	else
    {
		image[x][y] = VISITED_PIXEL;
		int count = countBolb(x-1,y)+countBolb(x-1,y-1)+countBolb(x,y-1)+countBolb(x+1,y-1)+countBolb(x+1,y)+countBolb(x+1,y+1)+countBolb(x,y+1)+countBolb(x-1,y+1);
		if(count > 0)
		{
			return 1+count;
		}
		return 1;

    }
            
    
   }
     
	public static void print2DMatrix(int[][] matrix)
	{
		int i = 0;
		int j = 0;
		for(i=0; i<N; i++)
		{
			for(j=0; j<N; j++)
			{
				System.out.printf("%3d",matrix[i][j]);
			}
			System.out.println();
		}
	}

    public static void main(String[] args) {
	int i = 0;
	int j = 0;
    int [][] aa = new int[8][8];

	  for(i = 0; i<8; i++)
		{
		  for(j=0;j<8;j++)
			{
			  aa[i][j] = countBolb(i,j);
			  initializeImage();
			}
		}

		print2DMatrix(aa);
        
    }
    
}
