import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Testing {

    public static void main(String[] args) {
        int T = 5;
        
        int[] n = {4, 8, 3, 5, 7};
        int[] k = {2, 6, 1, 4, 2};
        
        int[][] TC = {{0,-1,7,-1}, {9,8,3,2,1,3,-1,0}, {-1,2,0}, {-3, 5, 7, -7, 0}, {7, -7, 7, -7, 7, -7, 0}};
        
        System.out.println(T);
        
        for(int i=0; i<T; ++i)
        {
            System.out.println(n[i] + " " + k[i]);
            for(int a_i=0; a_i<TC[i].length; ++a_i)
            {
                System.out.print(TC[i][a_i] + " ");
            }
            System.out.println();
        }
        
        
        for(int i=0; i<T; ++i)
        {
            int count = 0;
            for(int a : TC[i])
            {
                if(a <=0)
                {
                    ++count;
                }
            }
            
            
            
            if(count >= k[i])
            {
                System.out.println("YES");
            }
            else
            {
                System.out.println("NO");
            }
        }
        
    }
}
