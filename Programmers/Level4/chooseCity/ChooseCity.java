import java.util.Arrays;
import java.util.Comparator;

class ChooseCity
{
    public int chooseCity(int n, int [][]city)
    {
        int answer = 0;
        int sum=0;
        for(int i=0; i<city.length; ++i)
        {
            sum += city[i][1];
        }
        int half = sum/2;
        if(sum%2 == 1)
        {
            ++half;
        }


        Arrays.sort(city,new Comparator<int[]>(){
            @Override
            public int compare(final int[] arr1, final int[] arr2)
            {
                if(arr1[1] - arr2[1] > 0)
                {
                    return -1;
                }
                else return 1;
            }
        });


        int temp=0;
        for(int i=0; i<city.length; ++i)
        {
            temp += city[i][1];
            if(temp >= half)
            {
                answer = city[i][0];
                break;
            }
        }
        return answer;
    }
    public static void main(String[] args)
    {
        ChooseCity test = new ChooseCity();
        int tn = 3;
        int [][]tcity = {{1,5},{2,2},{3,3}};
        System.out.println(test.chooseCity(tn,tcity));
    }
}