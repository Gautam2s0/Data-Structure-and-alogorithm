

function reverseArray(n, arr) {
  let res = "";
  for (let i = n - 1; i >= 0; i--) {
    if (i == 0) {
      res += `${arr[i]}`;
    } else {
      res += `${arr[i]} `;
    }
  }
  console.log(res);
}
