class JumpCase {

    public int jumpCase(int num) {
        if(num==1)
        {
            return 1;
        }

        if(num==2)
        {
            return 2;
        }

        int[] arr = new int[num];
        arr[0] = 1;
        arr[1] = 2;
        for(int i=2; i<num; ++i)
        {
            arr[i] = arr[i-2]+arr[i-1];
        }
        return arr[num-1];
    }

    public static void main(String[] args) {
        JumpCase c = new JumpCase();
        int testCase = 4;
        //아래는 테스트로 출력해 보기 위한 코드입니다.
        System.out.println(c.jumpCase(testCase));
    }
}