class Tiling {
	public int tiling(int n) {
		int[] tileNum = new int[n+1];
		tileNum[0] = 0;
		tileNum[1] = 1;
		tileNum[2] = 2;

		for(int i=3; i<=n; ++i)
		{
			tileNum[i] = (tileNum[i-1] + tileNum[i-2]) % 100000;
		}
		return tileNum[n];
	}

	public static void main(String args[]) {
		Tiling tryHelloWorld = new Tiling();
		System.out.print(tryHelloWorld.tiling(2));
	}
}