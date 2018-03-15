function waterMelon(n){
  var result = ""
  for(var i=0; i<Math.floor(n/2); ++i)
  {
  	result+="수박";
  }
  if(n % 2 != 0)
  {
  	result+="수";
  }
  return result;
}

// 실행을 위한 테스트코드입니다.
console.log("n이 3인 경우: "+ waterMelon(3))
console.log("n이 4인 경우: "+ waterMelon(4))