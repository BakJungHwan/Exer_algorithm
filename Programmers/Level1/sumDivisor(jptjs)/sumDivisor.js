function sumDivisor(num) {
  var i = 1;
  var answer=0;
	while(i<Math.sqrt(num))
  {
    if(!(num % i))
    {
      answer += i + num/i;
    }
    ++i;
  }
	return answer;
}

// 아래는 테스트로 출력해 보기 위한 코드입니다.
console.log(sumDivisor(12));