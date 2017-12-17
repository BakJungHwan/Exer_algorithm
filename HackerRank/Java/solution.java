import java.io.*;
import java.util.*;

public class Solution1 {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        double mean = 0;
        double median = 0;
                
        int N = scan.nextInt();
        int[] X = new int[N];
        
        for(int i_N=0; i_N<N; ++i_N)
        {
            X[i_N] = scan.nextInt();
            mean += X[i_N];
        }
        
        mean /= N;
        
        Arrays.sort(X);

		for(int i .. X)
		{
			System.out.print(i + "  ");
		}
		System.out.println();
		System.out.println();
        
        if(N % 2 == 0)
        {
            median = (X[N/2]+X[N/2+1])/2;
        }
        else
        {
            median = X[N/2];
        }
        
        int max_count=1;
        int temp_count=1;
        int temp=X[0];
        int mode = X[0];
        
        for(int i_Mode=1; i_Mode<N; ++i_Mode)
        {
            if(temp == X[i_Mode])
            {
                ++temp_count;
            }
            else
            {
                temp_count = 1;
                temp = X[i_Mode];
            }
            
            if(temp_count > max_count)
            {
                max_count = temp_count;
                mode = temp;
            }
        }
        
        System.out.printf("%.1f\n", mean);
        System.out.printf("%.1f\n", median);
        System.out.println(mode);

    }
}