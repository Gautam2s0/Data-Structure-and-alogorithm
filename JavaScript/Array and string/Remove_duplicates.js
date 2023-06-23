Description

Given an array of n integers, the array is sorted. You have to remove the duplicates, print only unique elements, do it in place. i.e O(1) space


Input Description

1<=T<=10

1<=N<=100000

1<=Ai<=100000


Output Description

output a single integer x, i.e the number of unique elements in the array and in the next line print the x unique elements.






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
