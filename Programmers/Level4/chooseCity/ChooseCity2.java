class ChooseCity2
{
    public int chooseCity(int n, int [][]city)
    {
        int answer = 0;
        long min=123456789;

        for(int i=0; i<city.length; ++i)
        {
            long sum=0;
            for(int j=0; j<city[0].length; ++j)
            {
                if(i==j) continue;
                sum+=Math.abs(city[i][0]-city[j][0])*city[j][1];
            }
            if(min > sum)
            {
                answer = city[i][0];
                min = sum;
            }
        }
        return answer;
    }
    public static void main(String[] args)
    {
        ChooseCity2 test = new ChooseCity2();
        int tn = 3;
        int [][]tcity = {{1,5},{2,2},{3,3}};
        System.out.println(test.chooseCity(tn,tcity));
    }
}