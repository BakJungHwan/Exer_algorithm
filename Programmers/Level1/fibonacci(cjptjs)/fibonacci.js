function fibonacci(num) {
	var answer = 0;
  var f = [0,1]
  var i=0;
  while(i-1!=num)
  {
    f.push(f[i]+f[i+1]);
    ++i;
  }
	return f[num];
}

// 아래는 테스트로 출력해 보기 위한 코드입니다.
console.log(fibonacci(3))