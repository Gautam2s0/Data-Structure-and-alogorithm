const Rmdup=(n,arr)=>{
  let res={}
  for(let el of arr){
    if(res[el]){
      continue
    }
    else{
      res[el]=1
    }
  }
  let p=[]
  for(let key in res){
   p.push(key)
  }
  console.log(p.length)
  console.log(p.join(' '))
}
