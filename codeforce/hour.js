function hour(n) {
  var jam;
  var result = n.split(":");

  if (result[0] == 12) {
    result[0] = 0;
  } else if (result[0] > 12) {
    result[0] %= 12;
  }

  if (parseInt(result[0]) > 12) {
    return `${result[0]}:${result[1]} PM`;
  } else {
    return `${result[0]}:${result[1]} AM`;
  }
}

console.log(hour("12:14"));
