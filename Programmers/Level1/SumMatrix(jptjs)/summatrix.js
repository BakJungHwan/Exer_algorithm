function sumMatrix(A,B){
	var answer = Array();
  for(var i=0; i<A.length; ++i)
  {
    var temp = Array();
    for(var j=0; j<A[0].length; ++j)
    {
      temp.push(A[i][j] + B[i][j]);
    }
    answer.push(temp);
  }
	return answer;
}

// 아래는 테스트로 출력해 보기 위한 코드입니다.
console.log(sumMatrix([[1,2], [2,3]], [[3,4],[5,6]])) 