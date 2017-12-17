import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class InterQuartile {

    public static double median(int[] data, int start, int end)
    {
        if((end-start+1) % 2 == 0)
        {
            return (data[(end+start)/2]+data[(end+start)/2+1])/2.0;
        }
        else
        {
            return data[(end+start)/2];
        }
    }
    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] x = new int[n];
        int[] y = new int[n];
        int s_size = 0;
        
        for(int i=0; i<n; ++i)
        {
            x[i] = scan.nextInt();
        }
        
        for(int i = 0; i<n; ++i)
        {
            y[i] = scan.nextInt();
            s_size += y[i];
        }
        
        int[] s = new int[s_size];
        int start_loc = 0;
        for(int i=0; i<n; ++i)
        {
            for(int j=0; j<y[i]; ++j)
            {
                s[start_loc+j] = x[i];
            }
            start_loc += y[i];
        }
        
        Arrays.sort(s);
        
		
        int lower_half_end;
        int upper_half_start;
        
        if(s_size % 2 == 0)
        {
            lower_half_end = (s_size-1)/2;
            upper_half_start = (s_size-1)/2+1;
        }
        else
        {
            lower_half_end = (s_size-1)/2-1;
            upper_half_start = (s_size-1)/2+1;
        }
        System.out.printf("%.1f\n",median(s,upper_half_start,s_size-1)-median(s,0,lower_half_end));
        
    }
}