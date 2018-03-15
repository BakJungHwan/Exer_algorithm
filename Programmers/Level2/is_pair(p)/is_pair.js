function is_pair(s){
	var open = 0;
	for(var i=0; i<s.length; ++i)
	{
		if(s[i]=="(")
		{
			++open;
		}
		else if(s[i]==")")
		{
			--open;
		}
		if(open<0)
		{
			return false;
		}
	}
  return open==0 ? true:false;
}

// 아래는 테스트로 출력해 보기 위한 코드입니다.
console.log( is_pair("(hello)()") )
console.log( is_pair(")(") )