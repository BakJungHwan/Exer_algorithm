import java.util.Arrays;

public class BestSet {

    public int[] bestSet(int n, int s){
        int[] answer = {-1};
        if(n>s)
        {
        	return answer;
        }
        answer = new int[n];
        for(int i=0; i<n; ++i)
        {
        	if(i<n-s%n)
        	{
        		answer[i] = s/n;
        	}
        	else
        	{
        		answer[i] = s/n+1;
        	}
        }

        return answer;
    }
    public static void main(String[] args) {
        BestSet c = new BestSet();
        System.out.println(Arrays.toString(c.bestSet(3,13)));
    }

}