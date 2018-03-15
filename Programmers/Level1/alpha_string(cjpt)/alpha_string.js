function alpha_string46(s){
	if(s.length==4 || s.length==6)
  {
    return !Number.isNaN(parseInt(s));
  }
  return false;
}


// 아래는 테스트로 출력해 보기 위한 코드입니다.
console.log( alpha_string46("1123") );