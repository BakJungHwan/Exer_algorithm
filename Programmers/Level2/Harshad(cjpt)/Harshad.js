function Harshad(n){
  var tempN = n;
	var digitSum=0;
	while(tempN>0)
	{
		digitSum+=tempN%10;
    tempN/=10;
    tempN = parseInt(tempN);
	}
 	if(n % digitSum == 0)
 	{
 		return true;
 	}
   return false;
}

// 아래는 테스트로 출력해 보기 위한 코드입니다.
console.log(Harshad(18))