function longest_palindrom(s){
  for(var i=s.length; i>0; --i)
  {
	  for(var j=0; j+i<=s.length; ++j)
	  {
	  	var sTemp = s.substr(j,i);
	  	var reSTemp = sTemp.split("").reverse().join("");
	  	if(sTemp == reSTemp)
	  	{
	  		return i;
	  	}
	  }
  }
  return 0;
}


// 아래는 테스트로 출력해 보기 위한 코드입니다.
console.log( longest_palindrom("토마토맛토마토") )
console.log( longest_palindrom("토마토맛있어") )