

const rotate=(n,k,arr)=>{
  let unit=k%n
  let r=arr.splice(n-unit,n)
  console.log([...r,...arr].join(" "))
}
